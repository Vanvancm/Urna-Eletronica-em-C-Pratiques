#include <stdio.h>

int main ()
{
    printf("          Eleição - Melhor Linguagem da Atualidade        \n\n");
    printf("Vote na Linguagem de Programação que você considera ser a melhor atualmente: \n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("     n°      Linguagem           \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("     1.      C                  \n");
    printf("     2.      Java               \n");
    printf("     3.      Python             \n");
    printf("     4.      JavaScript         \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

    int c = 0, java = 0, python = 0, javascript = 0, nulo = 0, branco = 0, voto;
    
    printf("Eleitor 1\nInsira seu voto: \n");
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

    printf("Eleitor 2\nInsira seu voto: \n");
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

    printf("Eleitor 3\nInsira seu voto: \n");
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

    printf("Eleitor 4\nInsira seu voto: \n");
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

    printf("Eleitor 5\nInsira seu voto: \n");
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

    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~      \n");
    printf("                  RELATÓRIO               \n");
    printf("           1. Linguagem C: %d             \n", c);
    printf("           2. Java: %d                    \n", java);
    printf("           3. Python: %d                  \n", python);
    printf("           4. JavaScript: %d              \n", javascript);
    printf("           Votos em Branco: %d            \n", branco);
    printf("           Votos Nulos: %d                \n", nulo);
    printf("      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~      \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf("                 RESULTADO:                \n");
    
    if ((nulo + branco) == 5)
        printf("Não houve linguagem eleita, pois todos os votos foram brancos ou nulos!");
    else {
        if (c > java && c > python && c > javascript)
            printf("A Linguagem mais votada é: 1. C com %d voto(s)!", c);
        else if (java > c && java > python && java > javascript)
            printf("A Linguagem mais votada é: 2. Java com %d voto(s)!", java);
        else if (python > c && python > java && python > javascript)
            printf("A Linguagem mais votada é: 3. Python com %d voto(s)!", python);
        else if (javascript > c && javascript > java && javascript > python)
            printf("A Linguagem mais votada é: 4. JavaScript com %d voto(s)!", javascript);
        else {
            if (c == java && c == python && c == javascript)
                printf("As Linguagens C, Java, Python e JavaScript empataram!");
            else if (c == java && c == python && c != 0)
                printf("As Linguagens C, Java e Python empataram!");
            else if (c == python && c == javascript && c != 0)
                printf("As Linguagens C, Python e JavaScript empataram!");
            else if (c == java && c == javascript && c != 0)
                printf("As Linguagens C, Java e JavaScript empataram!");
            else if (java == python && java == javascript && java != 0)
                printf("As Linguagens Java, Python e JavaScript empataram!");
            else {
                if (c == java && c != 0)
                    printf("As Linguagens C e Java empataram!");
                else if (c == python && c != 0)
                    printf("As Linguagens C e Python empataram!");
                else if (c == javascript && c != 0)
                    printf("As Linguagens C e JavaScript empataram!");
                else if (java == python && java != 0)
                    printf("As Linguagens Java e Python empataram!");
                else if (java == javascript && java != 0)
                    printf("As Linguagens Java e JavaScript empataram!");
                else
                    printf("As Linguagens Python e JavaScript empataram!");
            }
        }
    }

    return 0;
}
