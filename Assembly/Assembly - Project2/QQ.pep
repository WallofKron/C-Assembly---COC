;Robert Florence
;April 15, 2014
;A program to output "Hi" using direct addressing mode
;
         CHARO   0x0000,d    ;Output 'H'
         CHARO   0x0003,d    ;Output 'i'
         STOP                
         .ASCII  "Hi"        
         .END                  
