#include <stdio.h>
int main(){
float n[3][3] = {{8,6,7},{3,5,10},{9,2,7}};
float soma = 0;
float media;
float maior = -1;

for(int aluno=0; aluno<3; aluno++){
    for(int nota=0; nota<3; nota++){
        soma+=n[aluno][nota];
        if(n[aluno][nota]>maior){
            maior = n [aluno][nota];
        }
    }
}
media = soma /9;
printf("A media geral vale: %.2f\n", media);
printf("A maior nota eh: %.2f", maior);
for(int prova=0; prova<3; prova++){
    for(int aluno=0; aluno<3; aluno++){
        //logica p calcular media
        //acesso n[aluno][prova]
    }
}
return 0;
}
