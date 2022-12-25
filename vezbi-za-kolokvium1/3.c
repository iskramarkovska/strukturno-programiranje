/*Од стандарден влез се чита еден природен број n. Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем. 
Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.*/

#include <stdio.h>
int main(){
    
  int n, sum=0, maxsum=0, indeks, i, j;
  scanf("%d", &n);
  for(i=n-1; i>0; i--){
      for(j=1; j<i; j++){
        if(i%j==0) sum+=j;
        if(sum>maxsum) {maxsum=sum; indeks=i;}
      }
      sum=0;
  }
  printf("%d", indeks);
  
     return 0;
}
