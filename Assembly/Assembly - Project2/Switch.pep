;Robert Florence

;CMPSCI 122 
;Assembly Project 2
;Professor Ferguson
;This program mimics the basic switch statement

         STRO    opening,d  
BR       0x0008             
         .BLOCK  2  

         DECI 0x0006,d
         LDA  0x0006,d
         CPA  0,i                 ;  Start of switch 
         BREQ 0x0035              ;  Break when its 0
         CPA  1,i
         BREQ 0x0041              ;  Break when its 1
         CPA  2,i
         BREQ 0x004D              ;  Break when its 2
         CPA  3,i
         BREQ 0x0059              ;  Break when its 3
         CPA  4,i
         BREQ 0x0065              ;  Break when its 4
         DECO 0x0006,d            ;  Not 0-4 run Default Case
         STRO    default,d

BR       0x006E
         DECO 0x0006,d            ;Start of case 0
         STRO case,d
         DECO 0,i

BR       0x006E
         DECO 0x0006,d            ;Start of case 1
         STRO case,d
         DECO 1,i

BR       0x006E
         DECO 0x0006,d            ;Start of case 2
         STRO case,d
         DECO 2,i

BR       0x006E
         DECO 0x0006,d            ;Start of case 3
         STRO case,d
         DECO 3,i

BR       0x006E
         DECO 0x0006,d            ;Start of case 4

         STRO case,d
         DECO 4,i                 ;End body switch

         STRO done,d              ;end of switch, jump here when its done
         STOP
opening:     .ASCII  "Enter a condition value between 0 and 4: \x00"

default:     .ASCII  " is not between 0 and 4\x00"

case:        .ASCII  " inside the switch matches \x00"

done:        .ASCII  " \nSwitch Complete\x00"  
         .END