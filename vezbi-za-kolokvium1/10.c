/*Цик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично поголеми односно помали една во однос на друга. 
На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:
a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e
Пр. 343, 4624, 6231209
Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат). 
Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.*/

#include<stdio.h>
int main(){
    
   int n, a, zz, ld, stld, s;
   while(scanf("%d", &n)){
       if(n<10) continue;
        a=n;
        zz=1;
        ld=a%10;
        stld=a%100/10;
          if(ld>stld) {s=0;}
          else if(ld<stld) {s=1;}
          else zz=0;
        a/=10;
        while(a>=10){
          ld=a%10;
          stld=a%100/10;
          if(ld>=stld && s==0) {zz=0;}
          else if(ld<=stld && s==1) {zz=0;}
          else s=!s; a/=10;
       }
       if(zz) printf("%d\n", n);
  }
      return 0;
}
