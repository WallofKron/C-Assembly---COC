;Robert Florence 

; Professor Ferguson
; COMP SCI 122 
; Assembly Project 3
; Due: May 15, 2014
; This program takes an integer input and outputs its negative

           BR      main        
num1:     .BLOCK 2                    ;constant a 
num2:     .BLOCK 2
msg1:    .ASCII "Num 1 = \x00"
msg2:    .ASCII "Num 2 = \x00"
msg3:    .ASCII "Enter a number: \x00"


main:    STRO msg3,d              ;output open message
         DECI num1,d              ; input num1

         LDA num1,d
         SUBA num1,d
         SUBA num1,d              ;subtract accumulator by num1 twice to get to 0, then to its negative
         STA num2,d               ;make num2 = negative num1

         STRO msg1,d              ;output num 1 = num1
         DECO num1,d
         CHARO '\n',i

         STRO msg2,d              ;output num 2 = num2
         DECO num2,d       
         STOP
         .END