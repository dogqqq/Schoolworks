; GCD and LCM
; Program Description: a program for counting gcd and lcm 
; Author: CrazyFire
; Creation Date: 2019/10/16

.386
.model flat, stdcall
.stack 4096

includelib Irvine32.lib

euclidean PROTO, M : DWORD, N : DWORD
ReadInt PROTO
WriteInt PROTO
Crlf PROTO

.data
	inputNum1 SDWORD 0
	inputNum2 SDWORD 0
	mulNum SDWORD 0
	gcdNum SDWORD 0
	lcmNum SDWORD 0

.code
	main PROC 
	inNum:
		call ReadInt		; ReadInt will get input to eax register
		cmp eax,0 			; if input is limit than 0 then end program
		jle getout

		mov inputNum1, eax	; safe input to input1
		call ReadInt
		mov inputNum2, eax	; safe input to input2
		imul inputNum1		; -> ebx:eax = eax * inputNum1
		mov mulNum, eax		; safe eax inform to mulNum for lcm
		invoke euclidean, inputNum1, inputNum2 

	GCD:
		mov gcdNum, eax

	LCM:
		mov eax, mulNum
		idiv gcdNum
		mov lcmNum, eax

	outPrint:
		mov eax, gcdNum
		call WriteInt
		mov eax, lcmNum
		call WriteInt
		call Crlf
		jmp inNum

	getout:
		ret

	main ENDP

	euclidean PROC, M: DWORD, N: DWORD
		cmp N, 0
		jle back

		mov edx, 0
		mov eax, M
		div N

		mov eax, N
		mov M, eax
		mov N, edx
		invoke euclidean, M, N
		ret

	back:
		mov eax, M
		ret
	euclidean ENDP
END main