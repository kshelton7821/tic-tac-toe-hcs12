#include <hidef.h> /* common defines and macros */
#include <mc9s12dg256.h> /* derivative information */
#pragma LINK_INFO DERIVATIVE "mc9s12dg256b"
#include "main_asm.h" /* interface to the assembly module */


void main (){
  
     PWM_Init(120,0,0,60);
         
     
     
     while(1){
     }
      
  
}