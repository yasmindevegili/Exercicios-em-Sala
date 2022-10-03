#include <stdio.h>
int main(){
float n[3][3] = {{8,6,7},{3,5,10},{9,2,7}};
float soma = 0;
int count = 1;
float mediaGeral;
float maior;
float menor;
float mediaAluno;
float maiorMediaAluno;
float maiorMediaProva;


for(int aluno=0; aluno<3; aluno++){
    for(int nota=0; nota<3; nota++){
        soma+=n[aluno][nota];
            if (n[aluno][nota]==0){
                maior = n[aluno][nota];
                menor = n[aluno][nota];
            }
            if(n[aluno][nota]>maior){
                maior = n[aluno][nota];
            }
            if(n[aluno][nota]<menor){
                menor = n[aluno][nota];
            }
    }
}
mediaGeral = soma /9;
printf("A media geral vale: %.2f\n", mediaGeral);
printf("A maior nota eh: %.2f\n", maior);
printf("A menor nota eh: %.2f\n", menor);

for(int nota=0; nota<3; nota++){
    for(int aluno=0; aluno<3; aluno++){
        soma+=n[nota][aluno];
        mediaAluno = soma /9;
        printf("A média do aluno %i eh: %.2f\n", count, mediaAluno);
        if (n[nota][aluno]==0){
                maiorMediaAluno = n[nota][aluno];
            }
            if(n[nota][aluno]>maior){
                maiorMediaAluno = n[nota][aluno];
            }
        count++;
    }
}

return 0;
}
