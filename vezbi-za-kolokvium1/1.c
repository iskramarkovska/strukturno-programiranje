/*Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8). Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност
се внесува од тастатура), да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.*/

#include <stdio.h>
int main(){
  int i, a, blag, cif, m, n;
  scanf("%d%d", &m, &n);
  
  for(i=m; i<=n; i++){
    a=i;
    blag=1;
      while(a){
      cif=a%10;
      if(cif%2!=0) {blag=0; break;}
      a/=10;}
  if(blag) {printf("%d", i); break;}
 }
  if(!blag) printf("NE");
  
 return 0; 
}
