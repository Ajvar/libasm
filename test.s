section .data
msg1 db 'egal'
msg2 db 'diff'
a db 'a'
b db 'b'

SECTION .text

global _start

_start:
	mov rax, a
	mov rbx, b
	cmp eax,ebx
	je endone
	jne endtwo
endone:
	mov rax, 0x2000004
	mov rdi, 1
	mov rsi, msg1
	syscall
	ret
endtwo:
	mov rax, 0x2000004
	mov rdi, 1
	mov rsi, msg2
	syscall
	ret
