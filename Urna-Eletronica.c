#include <stdio.h>

int main ()
{
    printf("~~~~~~~~ Eleição Melhor Linguagem da Atualidade ~~~~~~~~\n\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~~~~ 1. C             ~~~~\n");
    printf("~~~~ 2. Java          ~~~~\n");
    printf("~~~~ 3. Python        ~~~~\n");
    printf("~~~~ 4. JavaScript    ~~~~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

    int c = 0, java = 0, python = 0, javascript = 0, nulo = 0, branco = 0, voto = 0;
    
    printf("Vote na Linguagem que você considera ser a melhor atualmente: ");
    scanf("%d", &voto);

    if (voto == 1)
        c++;
    else if (voto == 2)
        java++;
    else if (voto == 3)
        python++;
    else if (voto == 4)
        javascript++;
    else if (voto == 0)
        branco++;
    else
        nulo++;

    printf("Vote na Linguagem que você considera ser a melhor atualmente: ");
    scanf("%d", &voto);

    if (voto == 1)
        c++;
    else if (voto == 2)
        java++;
    else if (voto == 3)
        python++;
    else if (voto == 4)
        javascript++;
    else if (voto == 0)
        branco++;
    else
        nulo++;

    printf("Vote na Linguagem que você considera ser a melhor atualmente: ");
    scanf("%d", &voto);

    if (voto == 1)
        c++;
    else if (voto == 2)
        java++;
    else if (voto == 3)
        python++;
    else if (voto == 4)
        javascript++;
    else if (voto == 0)
        branco++;
    else
        nulo++;

    printf("Vote na Linguagem que você considera ser a melhor atualmente: ");
    scanf("%d", &voto);

    if (voto == 1)
        c++;
    else if (voto == 2)
        java++;
    else if (voto == 3)
        python++;
    else if (voto == 4)
        javascript++;
    else if (voto == 0)
        branco++;
    else
        nulo++;

    printf("Vote na Linguagem que você considera ser a melhor atualmente: ");
    scanf("%d", &voto);

    if (voto == 1)
        c++;
    else if (voto == 2)
        java++;
    else if (voto == 3)
        python++;
    else if (voto == 4)
        javascript++;
    else if (voto == 0)
        branco++;
    else
        nulo++;

    printf("\n\n\n~~~~~~~~ Eleição Melhor Linguagem da Atualidade ~~~~~~~~\n\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~~~~ O RESULTADO DA ELEIÇÃO É: ~~~~~\n");
    printf("~~~~ 1. C: %d                  ~~~~~~\n", c);
    printf("~~~~ 2. Java: %d               ~~~~~~\n", java);
    printf("~~~~ 3. Python: %d             ~~~~~~\n", python);
    printf("~~~~ 4. JavaScript: %d         ~~~~~~\n", javascript);
    printf("~~~~ Votos em Branco: %d       ~~~~~~\n", branco);
    printf("~~~~ Votos Nulos: %d           ~~~~~~\n", nulo);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    
    if (c == 0 && java == 0 && python == 0 && javascript == 0)
        printf("Não houve linguagem mais votada, pois todos os votos foram brancos ou nulos!");
    else
        if (c > java && c > python && c > javascript)
            printf("A Linguagem mais votada é: 1. C com %d voto(s)!", c);
        else if (java > c && java > python && java > javascript)
            printf("A Linguagem mais votada é: 2. Java com %d voto(s)!", java);
        else if (python > c && python > java && python > javascript)
            printf("A Linguagem mais votada é: 3. Python com %d voto(s)!", python);
        else if (javascript > c && javascript > java && javascript > python)
            printf("A Linguagem mais votada é: 4. JavaScript com %d voto(s)!", javascript);
        else
               printf("Houve empate entre as linguagens!");

    return 0;
}