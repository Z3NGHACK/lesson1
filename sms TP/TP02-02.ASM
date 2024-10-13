TEST02:
	;a. MAKE LEFT RED AND RIGHT BLUE
	MOV AL, 84
	OUT 01

	;b. REVERSE THE LIGHT 
	MOV AL, 30
	OUT 01

	;c. DISPLAY ALL COLOR ON THE RIGHT SIDE
	MOV AL, 1C 
	OUT 01 

	;d, i. LTL(red) AND RTL(green)
	MOV AL, 84
	OUT 01

	;d, ii. LTL(red) AND RTL(amber)
	MOV AL, 88
	OUT 01

	;d, iii. LTL(red and amber) AND RTL(red)
	MOV AL, D0
	OUT 01

	;d, iv. LTL(green) AND RTL(red)
	MOV AL, 30
	OUT 01

	;d, v. LTL(red) AND RTL(green)
	MOV AL, 50
	OUT 01
	MOV BL, 02
	CALL F8

	;d, vi. LTL(red) AND RTL(red and amber)
	MOV AL, 98
	OUT 01
	
	;d, vii. REVESE
	
	JMP TEST02
	ORG F8
	LOOP:
		DEC BL
		JNZ LOOP
		RET
END