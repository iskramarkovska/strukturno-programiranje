/*Да се напише програма во која од стандарден влез прво се внесува еден позитивен цел број z, а потоа последователно се внесуваат парови цели броеви (a, b). 
Внесувањето на парови цели броеви треба да заврши кога корисникот ќе го внесе парот (0, 0). 
Треба да се пресмета колку пати z е еднаков на збирот на секој внесен пар броеви a и b, како и колкав процент од вкупниот број внесени парови (a, b) 
даваат збир z (ЗАБЕЛЕШКА: парот (0, 0) не се зема во предвид при извршувањето на пресметките!).*/

#include <stdio.h>
int main(){
    
    int z, a, b, parovi=0, brparovi=-1;
    float procent;
    scanf("%d", &z);
    
    while(a!=0 || b!=0){
        scanf ("%d%d", &a, &b);
        brparovi++;
        if(a+b==z)
        parovi++;
    }
    printf("Vnesovte %d parovi od broevi chij zbir e %d\n", parovi, z);
    procent=100.00/brparovi*parovi;
    printf("Procentot na parovi so zbir %d e %.2f%%", z, procent);
    
    
    return 0;
}
