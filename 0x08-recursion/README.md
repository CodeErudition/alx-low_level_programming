# 0x08. C - Recursion

## Below are projects related to recursion.

# Task 0
## Pseudo Code to Task 0 (0-puts_recursion.c).

```c
Start program
Function void _puts_recursion(char *s):
	Set base condition:
	if *s is == null terminator '\0':
		Print new line
	else 
		Print the first character of the string:
		_putchar(*s);
		Make a recursive call:
		_puts_recursion(s + 1);
End program
```
# Task 1
## Pseudo Code to Task 1 (1-print_rev_recursion.c).

```c
Start program
Function void _print_rev_recursion(char *s):
	Set base condition:
	if *s is == null terminator '\0':
		return;
	else
		Make a recursive call:
		_print_rev_recursion(s + 1);
		Print the current character pointed to by s:
		_putchar(*s);
End program
```
# Task 2
## Pseudo Code to Task 2 (2-strlen_recursion.c).

```c
Start program
Function int _strlen_recursion(char *s):
	Declear a variable slen to keep track of the string length.
        Set base condition:
        if *s is == null terminator '\0':
                return (0);	
        else
		Assign a recursive call to the variable slen to calculate 
		the length of the rest string:
		slen = _strlen_recursion(s + 1);
		Increment slen by one:
		slen++;
                Return (slen);
End program
```
