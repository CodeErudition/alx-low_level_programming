# 0x08. C - Recursion

## Below are projects related to recursion.

# Task 0
## Pseudo Code to Task 0 (0-puts_recursion.c).

```c
Start program
function void _puts_recursion(char *s):
	set base condition:
	if *s is == null terminator '\0'
		print new line
	else 
		print the first character of the string:
		_putchar(*s)
		make a recursive call:
		_puts_recursion(s + 1)
End program
```
# Task 1
## Pseudo Code to Task 1 (1-print_rev_recursion.c).

```c
Start program
function void _print_rev_recursion(char *s):
	set base condition:
	if *s is == null terminator '\0
		return 
	else
		make a recursive call:
		_print_rev_recursion(s + 1)
		print the current character pointed to by s:
		_putchar(*s)
End program
```
