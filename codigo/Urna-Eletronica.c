/*PRATIQUES - ATIVIDADE DA DISCIPLINA DE PROGRAMAÇÃO ESTRUTURADA

    URNA ELETRÔNICA - ELEIÇÃO - MELHOR LINGUAGEM DA ATUALIDADE

Alunos: Hugo Carlos Magro da Silva - 202224410089
        João Pedro da Silva Santos - 202224410010
        Márcio Aquilles Monteles Silva - 202224410262
        Mateus Junior da Silva Pinto - 202224410283
        Vanessa Correia Miranda - 202224410271 */

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

    int c = 0, java = 0, python = 0, javascript = 0, nulo = 0, branco = 0, voto; //declara e inicializa as variáveis
    
    printf("Eleitor 1\nInsira seu voto: \n"); //imprime na tela o comando para o usuário
    scanf("%d", &voto); //recebe o valor digitado pelo usuário e atribui a variável voto

    if (voto == 1) //verifica se o valor digitado é igual a 1
        c++; //se for incrementa o valor da variavel c
    else if (voto == 2) //verifica se o valor digitado é igual a 2
        java++; //se for incrementa o valor da variavel java
    else if (voto == 3) //verifica se o valor digitado é igual a 3
        python++; //se for incrementa o valor da variavel python
    else if (voto == 4) //verifica se o valor digitado é igual a 4
        javascript++; //se for incrementa o valor da variavel javascript
    else if (voto == 0) //verifica se o valor digitado é igual a 0
        branco++; //se for incrementa o valor da variavel branco
    else //se nenhuma das possibilidades acima forem atendidas, significa que o valor digitado é nulo, por isso
        nulo++; //incrementa o valor da variavel c

    printf("Eleitor 2\nInsira seu voto: \n"); //repete o mesmo processo do voto do Eleitor 1
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

    printf("Eleitor 3\nInsira seu voto: \n"); //repete o mesmo processo do voto do Eleitor 1
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

    printf("Eleitor 4\nInsira seu voto: \n"); //repete o mesmo processo do voto do Eleitor 1
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

    printf("Eleitor 5\nInsira seu voto: \n"); //repete o mesmo processo do voto do Eleitor 1
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
    
    if ((nulo + branco) == 5) //Considerando que são apenas 5 eleitores, realiza a soma dos votos brancos e nulos e compara o resultado a 5. Se for igual,
        printf("Não houve linguagem eleita, pois todos os votos foram brancos ou nulos!"); //informa que não houve linguagem eleita, pois todos os votos são brancos ou nulos
    else { //não sendo a soma dos votos brancos e nulos igual a 5
        if (c > java && c > python && c > javascript) //verifica se a variavel c é maior que as variaveis das outras linguagens
            printf("A Linguagem mais votada é: 1. C com %d voto(s)!", c); //se for, imprime na tela que c é a linguagem mais votada e mostra a quantidade de votos
        else if (java > c && java > python && java > javascript) //verifica se a variavel java é maior que as variaveis das outras linguagens
            printf("A Linguagem mais votada é: 2. Java com %d voto(s)!", java); //se for, imprime na tela que java é a linguagem mais votada e mostra a quantidade de votos
        else if (python > c && python > java && python > javascript) //verifica se a variavel python é maior que as variaveis das outras linguagens
            printf("A Linguagem mais votada é: 3. Python com %d voto(s)!", python); //se for, imprime na tela que python é a linguagem mais votada e mostra a quantidade de votos
        else if (javascript > c && javascript > java && javascript > python) //verifica se a variavel javascript é maior que as variaveis das outras linguagens
            printf("A Linguagem mais votada é: 4. JavaScript com %d voto(s)!", javascript); //se for, imprime na tela que javascript é a linguagem mais votada e mostra a quantidade de votos
        else { //Não havendo uma única linguagem vencedora
            if (c == java && c == python && c == javascript) //verifica se há empate entre as 4 Linguagens
                printf("As Linguagens C, Java, Python e JavaScript empataram!"); //se houver, imprime na tela que as 4 linguagens empataram
            else if (c == java && c == python && c != 0) //verifica se há empate entre c, java e python e se elas receberam algum voto
                printf("As Linguagens C, Java e Python empataram!"); //se sim, imprime na tela que c, java e python empataram
            else if (c == python && c == javascript && c != 0) //verifica se há empate entre c, python e javascript e se elas receberam algum voto
                printf("As Linguagens C, Python e JavaScript empataram!"); //se sim, imprime na tela que c, python e java empataram
            else if (c == java && c == javascript && c != 0) //verifica se há empate entre c, java e javascript e se elas receberam algum voto
                printf("As Linguagens C, Java e JavaScript empataram!"); //se sim, imprime na tela que c, java e javascript empataram
            else if (java == python && java == javascript && java != 0) //verifica se há empate entre java, python e javascript e se elas receberam algum voto
                printf("As Linguagens Java, Python e JavaScript empataram!"); //se sim, imprime na tela que c, java e javascript empataram
            else { //Não havendo empate entre as 4 Linguagens ou entre 3 delas
                if (c == java && c != 0)
                    printf("As Linguagens C e Java empataram!"); //se sim, imprime na tela que c e java empataram
                else if (c == python && c != 0) //verifica se há empate entre c e python e se elas receberam algum voto
                    printf("As Linguagens C e Python empataram!"); //se sim, imprime na tela que c e python empataram
                else if (c == javascript && c != 0) //verifica se há empate entre c e javascript e se elas receberam algum voto
                    printf("As Linguagens C e JavaScript empataram!"); //se sim, imprime na tela que c e javascript empataram
                else if (java == python && java != 0) //verifica se há empate entre java e python e se elas receberam algum voto
                    printf("As Linguagens Java e Python empataram!"); //se sim, imprime na tela que java e python empataram
                else if (java == javascript && java != 0) //verifica se há empate entre java e javascript e se elas receberam algum voto
                    printf("As Linguagens Java e JavaScript empataram!"); //se sim, imprime na tela que java e javascript empataram
                else //Não ocorrendo nenhuma das possibilidades anteriores, significa que ocorreu um empate entre python e javascript, logo
                    printf("As Linguagens Python e JavaScript empataram!"); //imprime na tela que python e javascript empataram
            }
        }
    }

    return 0;
}
