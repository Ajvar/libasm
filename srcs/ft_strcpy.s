global _ft_strcpy

SECTION .text

_ft_strcpy:
    mov rcx, -1

loop:
    inc rcx
    cmp [rsi + rcx], byte 0
    je end
    mov dl, [rsi + rcx]
    mov [rdi + rcx], dl
    inc rcx
    jmp loop
end:
    
    ret
