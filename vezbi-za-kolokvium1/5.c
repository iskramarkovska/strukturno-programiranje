/*Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.
Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.
Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број, во истиот редослед. 
Соодветно да се испечатат пораки „PAREN“ и „NE“.
Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)*/

#include <stdio.h>
int main(){ //x pogolem
    
   int x, y, temp, cifx, cify, paren;
   scanf("%d%d", &x, &y);
   if(x<=0 || y<=0) {printf("Invalid input\n"); return 0;}
   while (x){//x=1357 y=12345678
   paren=1;
   while(y){
       if(y>x){temp=y; y=x; x=temp;}
       cifx=x%100/10; //cifx=12345678%100/10=7
       cify=y%10;
       if(cifx!=cify) { paren=0; break;}
    y/=10;
    x/=100;
}
   if(paren) printf("PAREN");
   else printf("NE");
   break;
   } //mm
   
    return 0;
}
