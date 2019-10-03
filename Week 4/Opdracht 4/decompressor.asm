.cpu cortex-m0
.bss
buffer: .fill 0x28			//40
.text
.align 2
.global decompress

decompress:
	PUSH {R4, R5, R6, R7, LR}	//put all the registers on the stack
	LDR R3, =buffer			//load the buffer into R3
	LDR R4, =bericht		//load the bericht
	MOV R5, #0			//move 0 into register 5 to use as index

loop:
	LDRB R0, [R4, R5]		//load the byte int R4 at index R5 to R0
	ADD R5, R5, #1

	CMP R0, #0			//compare R0 to '\0'
	BEQ done			//if R0 is equal to #0 go to label done

	CMP R0, #'@'			//compare R0 with 64, ascii of 64 is '@'
	BEQ check			//if R0 is equal to @ go to the label check

	BL add				//if R0 is not equal to @ go to add1
	BL print			//print it on the screen
	B loop				//start the loop again

add:
	PUSH { LR }			//save where we where before this routine
	MOV R1, #0x27			//make the buffer_length equal to a 40

addLoop:
	SUB R1, #1			//take 1 from R1
	LDRB R2, [R3, R1]		//Load the byte R3 at index R1 into R2
	ADD R1, #1			//add 1 to R1
	STRB R2, [R3, R1]		//store the previously loaded byte into R3
	SUB R1, #1			//take one of R1

	CMP R1, #0			//compare if R1 is bigger than 0
	BGT addLoop			//if bigger than 0, do the loop again

	STRB R0, [R3, #0]		//store R0 into R3 at index 0
	POP { PC }			//go back where we where before

check:
	LDRB R6, [R4, R5]		//load the byte in R4 at index R5 into R6
	ADD R5, #1			//add 1 to R5 to load the next byte
	LDRB R7, [R4, R5]		//load the byte in R4 at index R5 into R7
	ADD R5, #1			//add 1 to R5
	SUB R6, #'0'			//substract 0 from R6
	SUB R7, #'0'			//substract 0 from R7	

checkLoop:
	LDRB R0, [R3, R6]		//load the byte R3 at index R6 (offset) into R0
	BL add				//do the add
	BL print			//print the char
	SUB R7, #1			//take one off the length
	BLE loop			//if R7 is 0 go to label loop
	BL checkLoop			//else stay looping this label

done:
	POP {R4, R5, R6, R7, PC}	//take the values of the stack and put them back
