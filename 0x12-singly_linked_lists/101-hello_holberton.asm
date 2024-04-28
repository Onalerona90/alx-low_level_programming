section .data
  message db 'Hello, Holberton', 10, 0	; message string with new line and null terminator

section .text
  global main							; make the entry point visible to the linker

  extern printf							; declare printf as an external function

  main:
    mov rdi, message					; load the address of the message into RDI
    xor eax, eax						; zero out EAX register
    call printf							; call printf with the message as argument

    mov eax, 0							; return 0 from main
    ret

