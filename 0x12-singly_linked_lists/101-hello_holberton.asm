section .data
    message db 'Hello, Holberton', 0
    format db '%s\n', 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    ; prepare arguments for printf
    mov rdi, format
    mov rsi, message

    ; call printf
    xor eax, eax
    call printf

    ; clean up and return
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
