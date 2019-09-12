.cpu cortex-m0
.text
.align 2
.global print_asciz, application, convert

print_asciz:
   PUSH {r5, lr}
   MOV r5, r0
loop:
   LDRB r0, [r5]
   ADD r0, r0, #0
   BEQ done
   BL convert
   BL uart_put_char
   ADD r5, r5, #1
   B loop
done:
   POP {r5, pc}

application:
   PUSH {LR}
   LDR r0, = bericht
   BL print_asciz
   POP {PC}
bericht:
   .asciz "Hello world, the ANSWER is 42! @[]`{}~\n"
   .align 2

convert:
   PUSH {R5, LR}
   MOV r5, r0
   CMP r5, #97
   BGE uppercase
   CMP r5, #65
   BGE lowercase
   B done1
lowercase:
   CMP r5, #90
   BGT done1
   ADD r5, #32
   B done1
uppercase:
   CMP r5, #122
   BGT done1
   SUB r5, #32
   B done1
done1:
   MOV r0, r5
   POP {R5, PC}