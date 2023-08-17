#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int voteSystem()
{
    int vote;
    printf("\n(CANDIDATO 1) Ticos");
    printf("\n(CANDIDATO 2) Tuut");
    printf("\n(CANDIDATO 3) Calvin");
    printf("\nEm qual candidato deseja votar? (Insira apenas o numero dele): ");
    scanf("%d",&vote);
    return vote;
}

int calcularVotos(int votosTotais, int votosCand1, int votosCand2, int votosCand3)
{
    printf("\nVotos totais: %d",votosTotais);
    printf("\nVotos ao candidato 1: %d",votosCand1);
    printf("\nVotos ao candidato 2: %d", votosCand2);
    printf("\nVotos ao candidato 3: %d", votosCand3);
    float porcentoCand1 = ((float)votosCand1 / votosTotais) * 100;
    float porcentoCand2 = ((float)votosCand2 / votosTotais) * 100;
    float porcentoCand3 = ((float)votosCand3 / votosTotais) * 100;
    printf("\n---------- FIM DA VOTACAO ----------");
    printf("\nCandidato 1 teve %f %% dos votos", porcentoCand1);
    printf("\nCandidato 2 teve %f %% dos votos", porcentoCand2);
    printf("\nCandidato 3 teve %f %% dos votos", porcentoCand3);
    return 0;
}

int main()
{
    int keepgoing=1;
    int totalVotes=0;
    int votesCand1=0;
    int votesCand2=0;
    int votesCand3=0;
    while(keepgoing==1)
    {
        printf("\n---------- SISTEMA DE VOTACAO ----------");
        int voto;
        voto = voteSystem();
        if(voto==1)
        {
            votesCand1++;
        } else if(voto==2)
        {
            votesCand2++;
        } else if(voto==3)
        {
            votesCand3++;
        }
        totalVotes++;
        printf("\nDeseja continuar? (1==Sim, 2 OU QUALQUER OUTRO NUMERO==Nao)");
        scanf("%d", &keepgoing);
    }
    calcularVotos(totalVotes, votesCand1, votesCand2, votesCand3);
    return 0;
}
