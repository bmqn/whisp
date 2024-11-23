# Whisp

An interpreter for a C-inspired Functional Machine Calculus (FMC) variant which has first-class locations.

Whisp, at it's core, is a stack-based language with support for abstract concepts such as first-class functions etc.

## Goals
- Typed
- Compiled to a native executable
- Self hosting

### Basics

The most basic hello world program is written as

```
> ["Hello World!"]out

Hello World!
```

Using an application, `[...]`, this program pushes a string literal `"Hello World!` to the `out` stream.

To showcase the power of the language, we can it's generalize the code and wrap it into a variable called `print`, i.e. create a function.

```
> [<x> . [x]out] . <print>
```

Using an abstraction, `<...>`, we pop the top of the default stack, to which we previously pushed our code to print, and bind it in a variable called `print`.

To use `print` like a function, we can push our string literal `"Hello World!` to the default stack and execute the code bound in `print`

```
> ["Hello World!"] . print

Hello World!
```

### Conditional cases

Conditional cases are defined similarly to a conventional switch-case statement, and they enable us to branch the program.

```
> [0] . {0 -> ["Hello"]out, ["Goodbye"]out}

Hello
```

```
> [1] . {0 -> ["Hello"]out, ["Goodbye"]out}

Goodbye
```

This program will print `"Hello"` if there is `0` at the top of the default stack, or `"Goodbye"` otherwise.

- All conditional cases must have a _base case_, which will be used uncondtionally if all other cases fail to match.
- Variables bound inside a case term are scoped inside that term only, but it can use variables previously bound outside.

Recusive functions will often use conditional cases in order to operate on the stack until some _base case_ is met.

### Programs

Program which pushes (prints) `0` to the output stream. 

```
write = (<@a> . <x> . a[x])
print = ([#out] . write)
main  = ([0] . print)
```

The function `print` is defined in terms of a more general variant called `write` which parameterizes the location to write to and the term to write.

How about a linked-list ? Let's define function `LinkedList` to create a linked-list and function `push_back` to push elements to its tail.

```
LinkedList = (
    <v> . new<@p> . [#null]p . [v]p . [#p]
)

push_back = (
    <v> . <@p> . p<pv> . p<@pp> . [#pp] . (
        null      -> [v] . LinkedList . <@npp> . [#npp]p . [pv]p,
        otherwise -> [#pp]p . [pv]p . [#pp] . [v] . push_back
    )
)
```

Let's also define a function `traverse` for traversing the list in order and running a function `f` on each element.

```
traverse = (
    <f> . <@p> . p<pv> . p<@pp> . [#pp]p . [pv]p . [#pp] . (
        null      -> [pv] . f,
        otherwise -> [pv] . f . [#pp] . [f] . traverse
    )
)
```

Create a linked-list called `p` by calling `LinkedList`, then add elements by calling `push_back`, then print each element by calling `traverse` with the function `print`.

```
print = (
    <x> . [x]out
)

main = (
    [1] . LinkedList . <@p>
    . [#p] . [2] . push_back
    . [#p] . [3] . push_back
    . [#p] . [4] . push_back
    . [#p] . [5] . push_back
    . [#p] . [print] . traverse
)
```
