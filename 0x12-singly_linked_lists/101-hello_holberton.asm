section .data
    hello db "Hello, Holberton",10  ; The message to be printed, 10 is the newline character
    hello_len equ $ - hello

section .text
    global main

main:
    ; Open stdout (file descriptor 1)
    mov rax, 1                  ; syscall number for sys_write
    mov rdi, 1                  ; file descriptor 1 (stdout)
    mov rsi, hello              ; pointer to the message
    mov rdx, hello_len          ; message length
    syscall

    ; Exit the program
    mov rax, 60                 ; syscall number for sys_exit
    xor rdi, rdi                ; exit status 0
    syscall

