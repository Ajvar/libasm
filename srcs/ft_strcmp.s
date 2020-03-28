SECTION .text
global ft_strcmp

ft_strcmp:
    mov rax, rdi
    mov rbx, rsi

compare:
    cmp byte [rax], 0
    je diff
    cmp rax, rbx
    jne diff
    inc rax
    inc rbx
    jmp compare

diff:
    sub rax,rbx
    ret