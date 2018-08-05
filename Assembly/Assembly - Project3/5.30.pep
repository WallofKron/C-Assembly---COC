;Robert Florence 

; Professor Ferguson
; COMP SCI 122 
; Assembly Project 3
; Due: May 15, 2014
; This program mimics a C++ style program and divides an integer by 16


         BR      main        
num:    .BLOCK 2

out:    .ASCII  "Answer = \x00"
msg:    .ASCII  "Enter a number to be divided by 16: \x00"

main:    STRO msg,d
         DECI num,d
         LDA num,d           ;taking integer input

         ASRA
         ASRA
         ASRA                ;ASR 4 times is equal to dividing by 16
         ASRA                
         STA num,d           ;store results
        
         STRO out,d          ;format and output results
         DECO num,d
         CHARO '\n',i
         STOP
         .END

         