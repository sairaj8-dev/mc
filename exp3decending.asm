SJMP 30H
	ORG 30H
		
		MOV R2 ,#04
		
		OUTER:
		MOV R1 ,#04
		MOV R0,#30H
		
		INNER:
		MOV A,@R0
		INC R0
		MOV B,@R0
		CJNE A,B,CHECK
		SJMP NEXT
		
		CHECK:
		JNC NEXT
		MOV @R0,A
		DEC R0
		MOV @R0,B
		INC R0
		
		NEXT:
		DJNZ R1,INNER
		DJNZ R2,OUTER
		END
