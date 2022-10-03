#include <stdio.h>
int main(){
float n[3][3] = {{8,6,7},{3,5,10},{9,2,7}};
float soma = 0;
float prova = 0;
float soma1, soma2, soma3;
float mediaGeral;
float maior, menor = n[0][0];
float mediaAluno;
float somaAluno=0;

float maiorMediaProva;

for(int aluno=0; aluno<3; aluno++){
    for(int nota=0; nota<3; nota++){
        
        soma+=n[aluno][nota]; 
            if(n[aluno][nota]>maior){
                maior = n[aluno][nota];
            }
            if(n[aluno][nota]<menor){
                menor = n[aluno][nota];
            }
    }
}
for(int nota=0; nota<3; nota++){
    soma1+=n[0][nota];
}
for(int nota=0; nota<3; nota++){
    soma2+=n[1][nota];
}
for(int nota=0; nota<3; nota++){
    soma3+=n[2][nota];
}
if((soma1/3)>(soma2/3)&&(soma1/3)>(soma3/3)){
    maiorMediaAluno = soma1/3;
}
else if((soma2/3)>(soma1/3)&&(soma2/3)>(soma3/3)){
    maiorMediaAluno = soma2/3;
}
else{
    maiorMediaAluno = soma3/3;
}

float maiorMediaAluno[] = {soma1/3, soma2/3, soma3/3};
for(int prova=0; prova<3; prova++){
    for(int aluno=0; aluno<3; aluno++){
        maiorMediaProva[] = 
    }
}
if(maiorMediaProva[a]>maiorProva){
            maiorProva = mediaProvas[a];
            maxProva=a;
        }
         }

mediaGeral = soma /9;
printf("A média do aluno 1 eh: %.2f\nA média do aluno 2 eh: %.2f\nA média do aluno 3 eh %.2f\n", soma1/3, soma2/3, soma3/3);
printf("O aluno com maior média eh: %.2f\n", maiorMediaAluno);
printf("A media geral vale: %.2f\n", mediaGeral);
printf("A maior nota eh: %.2f\n", maior);
printf("A menor nota eh: %.2f\n", menor);

return 0;
}
