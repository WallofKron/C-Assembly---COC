;Robert Florence

;CMPSCI 122 
;Assembly Project 2
;Professor Ferguson
;This program mimics the basic While loop statement like used in other high order languages

         BR      main        
var1:    .BLOCK  2           ;global variable 
var2:    .BLOCK  2           ;global variable
openmsg:     .ASCII  "Enter A number to count up to: \x00"
;
main:    LDA     0,i         ;var1 = 0
         STA     var1,d       
         STRO    openmsg,d 
         DECI     var2,d    
do:      DECO    var1,d      ;var 1 before it gets added
         LDA     var1,d       
         ADDA    1,i        ;adding 1 to var1
         STA     var1,d          
while:   LDA     var1,d       ;while var1 < var2
         CPA     var2,d    
         BRLT    do          
         DECO    var1,d       ;print all numbers until var2
         STOP                
         .END                  