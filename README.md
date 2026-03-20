# printf ≽^-⩊-^≼
I built this project to understand what really happens behind a simple `printf` call ^~^.  
Instead of relying on the standard library, this is my own implementation that handles formatted output from scratch -parsing the format string-, reading variable arguments, and printing everything manually.

## This project helped me get comfortable with:
-variadic functions (va_list)
-parsing strings character by character
-handling different data types in a unified way
-writing cleaner and more modular C code

## What It Supports
`%c` → characters.  
`%s` → strings.  
`%p` → pointers.  
`%d` / `%i` → integers.  
`%u` → unsigned integers.  
`%x` / `%X` → hexadecimal.  
`%%` → literal %  
## How It Works 
The function scans the format string one character at a time.  
If it's a normal character → print it directly  
If it sees % → switch to parsing mode  
Based on the specifier → fetch the correct argument using va_arg  
Convert it (if needed) → print it  
Everything is built around small helper functions to keep things clean and reusable.  
## build
```bash
make
```
## example
```bash
ft_printf("Hello %s\n", "world");
ft_printf("Value: %d\n", 42);
ft_printf("Pointer: %p\n", ptr);
```
## sample output
```bash
Hello world
Value: 42
Pointer: 0x7ffee4bff5c8
```
