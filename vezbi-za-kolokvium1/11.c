/*Цик-цак е број за кој важи дека за секој пар соседни цифри во бројот важи дека едната е помала од 5, а другата е поголема или еднаква на 5. 
На пример, ако бројот x е составен од цифрите a, b, c и d, тогаш за нив важи:
a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5
Пр.  508294, 2638, 81
Од тастатура се читаат непознат број на цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат). 
Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.*/

#include <stdio.h>
int main(){
    
    int n, a, zz, ld, stld, s;
    while(scanf("%d", &n)){
        if(n<10) continue;
        a=n; zz=1;
        while(a>=10){
            ld=a%10;
            stld=a%100/10; //m
            if(ld>=5 && stld>=5){zz=0; break;}
            else if(ld<5 && stld<5){zz=0; break;}
            a/=10;
        }
        if(zz) {printf("%d\n", n);}
    }
    return 0;
}
