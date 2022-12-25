/*Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри. 
Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356). 
Од тастатура се внесува природен број n ( n > 9). Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“. 
Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).*/

#include <stdio.h>
int main(){
    
   int n, a, cif, i, brcif=0, obraten=0;
   scanf("%d", &n);
   if(n<10) {printf("Brojot ne e validen"); return 0;}
   for(i=n-1; i>0; i--){
       a=i;
       while(a){
           cif=a%10;
           brcif++;
           obraten=obraten*10+cif;
           a/=10;
       }
       if(obraten%brcif==0) {printf("%d", i); break;}
       obraten=brcif=0;
   }
    
    return 0;
}
