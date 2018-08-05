;Robert Florence

; Professor Ferguson
; COMP SCI 122 
; Assembly Project 3
; Due: May 15, 2014
; This program takes a length and width input and gives a perimeter output


             BR      main        
width:       .BLOCK 2
length:      .BLOCK 2
perim:       .BLOCK 2 

wid:     .ASCII  "Width = \x00"
len:     .ASCII  "Length = \x00"
per:     .ASCII  "Perimeter = \x00"
msg1:     .ASCII  "Enter a Width: \x00"
msg2:     .ASCII  "Enter a Length: \x00"


main:    STRO msg1,d
         DECI width,d             ; width input
        
         STRO msg2,d
         DECI length,d            ;length input
         
         LDA  width,d
         ADDA length,d
         ASLA                     ; add length to width, then mult. total by 2
        
         STA  perim,d         ; save result in accumulator to perimeter
         STRO wid,d
         DECO width,d
         CHARO '\n',i
         STRO len,d
         DECO length,d
         CHARO  '\n',i
         CHARO  '\n',i
         STRO per,d
         DECO perim,d         ; output width endl, length endl, then perimeter endl
         STOP    
         .END