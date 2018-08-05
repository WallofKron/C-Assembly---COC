;Robert Florence

; Professor Ferguson
; COMP SCI 122 
; Assembly Project 3
; Due: May 15, 2014
; This program mimics a simple C++ character input output program


         BR      main        
chConst:  .EQUATE 0x61                    ;constant a 
ch1:      .BLOCK 1
ch2:      .BLOCK 1
msg1:     .ASCII   "Enter 2 letters with no spaces: \x00"


main:    STRO  msg1,d
         CHARI ch1, d
         CHARI ch2, d             ; take input for both ch1 and ch2

         CHARO ch1, d
         CHARO chConst, i         ; output the two characters you input with an 'a' between them
         CHARO ch2, d
         STOP
         .END                  
