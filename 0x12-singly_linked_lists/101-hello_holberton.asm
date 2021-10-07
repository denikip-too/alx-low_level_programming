section .text
	global main
main:
	mov edx,len
	mov ecx,message
	mov ebx,1
	mov eax,4
	int 0x80
	mov eax,1
	int 0x80

section .data
message db 'Hello, Holberton', 0xa
len equ $ - message
