# C string utilities

A small C project that reimplements a few common string functions for practice.
As I learn more about systems programming, I will keep improving the code and
adding more efficient implementations.

It includes functions for measuring, copying, joining, comparing, and searching
strings. `src/main.c` runs a set of `str_str` tests and compares the result with
the standard library's `strstr`.

## Build and run

```sh
make
make run
```

The public declarations live in `include/my_string.h`. It is deliberately not
called `string.h`, which would hide the C standard library header of the same
name.

`str_cat` writes into its destination buffer, so callers must give `dest`
enough room for both strings and the terminating `\0`.
