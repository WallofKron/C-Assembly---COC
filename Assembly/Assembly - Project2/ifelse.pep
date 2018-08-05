;Robert Florence
;CS 122/Assembly
;Professor Ferguson
;Spring 2014
;this program simulates an if-else statement in assembly language


         BR      main        
limit:   .EQUATE 50         ;constant
num:     .EQUATE 0           


main:    SUBSP   2,i         ;allocate num
         STRO    msg3,d
         STRO    msg4,d
         DECI    num,s       ;take input for num
if:      LDA     num,s      
         CPA     limit,i     ;if (num >= limit)
         BRLT    else 
         DECO    num,s     
         STRO    msg1,d      ;output "high"
         DECO    limit,i    

         BR      endIf 
 
else:    DECO    num,s          
         STRO    msg2,d      ;output "low"
         DECO    limit,i  

         
endIf:   ADDSP   2,i         
         STOP                
msg1:    .ASCII  " number is Greater than \x00" 
 
msg2:    .ASCII  " number is Lower than \x00"   

msg3:    .ASCII  "Limit = 50\x00"

msg4:    .ASCII  "\nEnter a number above or below the Limit: \x00"
         .END
