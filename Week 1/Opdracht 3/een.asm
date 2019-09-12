.cpu cortex-m0
.text
.align 2
.global print_asciz, application

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