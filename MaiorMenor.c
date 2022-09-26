#include <stdio.h>
int main(){
    float n[5];
    int i, maior, menor;
    for(i=0;i<5;i++){
    printf("Digite a nota %i:", i+1);
    scanf("%f", &n[i]);
    if(n[i]>maior){
        maior = n[i];
    }
    if(n[i]<menor){
        menor = n[i];
    }
    }
    printf("%i %i", maior, menor);
    
    
    
    
}
