#include <stdio.h>

int main() {
                     
                  // VARIÁVEIS DO JOGO
    int jogador;
    int atributo1, atributo2, resultado1, resultado2;
         // ATRIBUTOS CARTA FORTALEZA
    int populacao1 = 2574412, npt1 = 50;    //npt1 e npt2 = número de pontos turísticos
    float area1 = 313.8, pib1 = 73100000000, dp1 = (float) populacao1 / area1, ppc1 = (float) pib1 / populacao1; // dp1 e dp2 = densidade populacional; ppc1 e ppc2 = pib per capita
        // ATRIBUTOS CARTA RECIFE
    int populacao2 = 1587707, npt2 = 55;    //npt1 e npt2 = número de pontos turísticos
    float area2 = 218.8, pib2 = 54970000000, dp2 = (float) populacao2 / area2, ppc2 = (float) pib2 / populacao2;  // dp1 e dp2 = densidade populacional; ppc1 e ppc2 = pib per capita

                             // INICIANDO O JOGO COM MENÚ PARA ESCOLHER UMA DAS DUAS CARTAS.
    printf("\n==========================================\n               SUPER TRUNFO\n==========================================\n");
    printf("-Escolha uma carta- \n[1]FORTALEZA \n[2]RECIFE \ncarta: ");
    scanf("%d", &jogador); 
              //COMANDO COM IF SE A ESCOLHA DO JOGADOR FOR FORTALEZA.
    if (jogador == 1) {
        printf("\n---------------------------------------------\nJogador -CARTA FORTALEZA- \nComputador -CARTA RECIFE-\n---------------------------------------------\n\n");
                 // MENU PARA ESCOLHA DO PRIMEIRO ATRIBUTO.
        printf("Escolha dois atributos diferentes \npara o desafio de comparação. \n\n-PRIMEIRO ATRIBUTO- \n[1] POPULAÇÃO \n[2] ÁREA \n[3] PIB \n[4] NÚMERO DE PONTOS TURÍSTICOS \n[5] DENSIDADE POPULACIONAL \n[6] PIB PER CÁPITA \nATRIBUTO: ");
        scanf("%d", &atributo1);
        printf("\n---------------------------------------------\n");
           // USANDO SWITCH PARA ESCOLHER COMANDO DO MENÚ.
        switch (atributo1) {
        case 1:
            printf("     -POPULAÇÃO-");
            printf("\nFORTALEZA POPULAÇÃO: %d \nRECIFE POPULAÇÃO: %d", populacao1, populacao2);
            resultado1 = populacao1 > populacao2 ? 1 : 0;  // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
            break;
        case 2:
            printf("        -ÁREA-");
            printf("\nFORTALEZA ÁREA: %.2f km² \nRECIFE ÁREA: %.2f km²", area1, area2);
            resultado1 = area1 > area2 ? 1 : 0;  // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
            break;
        case 3:
            printf("        -PIB-");
            printf("\nFORTALEZA PIB: %.2f bilhões de reais \nRECIFE PIB: %.2f bilhões de reais", pib1/1000000000, pib2/1000000000);
            resultado1 = pib1 > pib2 ? 1 : 0;  // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
            break;
        case 4:
            printf("        -NÚMEROS DE PONTOS TURÍSTICOS-");
            printf("\nFORTALEZA NÚMEROS DE PONTOS TURÍSTICOS: %d \nRECIFE NÚMEROS DE PONTOS TURÍSTICOS: %d", npt1, npt2);
            resultado1 = npt1 > npt2 ? 1 : 0;  // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
            break;
        case 5:
            printf("        -DENSIDADE POPULACIONAL-");
            printf("\nFORTALEZA DENSIDADE POPULACIONAL: %.0f hab/km² \nRECIFE DENSIDADE POPULACIONAL: %.0f hab/km²", dp1, dp2);
            resultado1 = dp1 < dp2 ? 1 : 0;  // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
            break;
        case 6:
            printf("        -PIB PER CAPTA-");
            printf("\nFORTALEZA PIB PER CAPTA: %.2f reais \nRECIFE PIB PER CAPTA: %.2f reais", ppc1, ppc2);
            resultado1 = ppc1 > ppc2 ? 1 : 0;  // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
            break;
        default:  //UTILIZAÇÃO DO DEFAULT
            printf("OPÇÃO INVÁLIDA!");
            break;
        }                  
                   //CONTINUAÇÃO DO PROGRAMA (CASO NÃO UTILIZAÇÃO DO DEFAULT) ESCOLHENDO SEGUNDO ATRIBUTO
        if (atributo1 > 0 && atributo1 < 7) {
            printf("\n---------------------------------------------\n\n-SEGUNDO ATRIBUTO- \n[1] POPULAÇÃO \n[2] ÁREA \n[3] PIB \n[4] NÚMERO DE PONTOS TURÍSTICOS \n[5] DENSIDADE POPULACIONAL \n[6] PIB PER CÁPITA \nATRIBUTO: ");
            scanf("%d", &atributo2);
            printf("\n---------------------------------------------\n");
            if (atributo2 != atributo1){
                switch (atributo2) {       // USANDO SWITCH PARA ESCOLHER COMANDO DO MENÚ.
                case 1:
                    printf("     -POPULAÇÃO-");
                    printf("\nFORTALEZA POPULAÇÃO: %d \nRECIFE POPULAÇÃO: %d", populacao1, populacao2);
                    resultado2 = populacao1 > populacao2 ? 1 : 0;  // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
                    break;
                case 2:
                    printf("        -ÁREA-");
                    printf("\nFORTALEZA ÁREA: %.2f km² \nRECIFE ÁREA: %.2f km²", area1, area2);
                    resultado2 = area1 > area2 ? 1 : 0;  // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
                    break;
                case 3:
                    printf("        -PIB-");
                    printf("\nFORTALEZA PIB: %.2f bilhões de reais \nRECIFE PIB: %.2f bilhões de reais", pib1/1000000000, pib2/1000000000);
                    resultado2 = pib1 > pib2 ? 1 : 0;  // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
                    break;
                case 4:
                    printf("        -NÚMEROS DE PONTOS TURÍSTICOS-");
                    printf("\nFORTALEZA NÚMEROS DE PONTOS TURÍSTICOS: %d \nRECIFE NÚMEROS DE PONTOS TURÍSTICOS: %d", npt1, npt2);
                    resultado2 = npt1 > npt2 ? 1 : 0;  // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
                    break;
                case 5:
                    printf("        -DENSIDADE POPULACIONAL-");
                    printf("\nFORTALEZA DENSIDADE POPULACIONAL: %.0f hab/km² \nRECIFE DENSIDADE POPULACIONAL: %.0f hab/km²", dp1, dp2);
                    resultado2 = dp1 < dp2 ? 1 : 0;  // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
                    break;
                case 6:
                    printf("        -PIB PER CAPTA-");
                    printf("\nFORTALEZA PIB PER CAPTA: %.2f reais \nRECIFE PIB PER CAPTA: %.2f reais", ppc1, ppc2);
                    resultado2 = ppc1 > ppc2 ? 1 : 0;  // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
                    break;
                default:
                    printf("OPÇÃO INVÁLIDA!"); //UTILIZAÇÃO DO DEFAULT
                    break;
                }
            } else {
                printf("OPÇÃO INVÁLIDA, ATRIBUTOS IGUAIS!");
            }        
        }                          //COMANDO COM ELSE IF SE A ESCOLHA DO JOGADOR FOR RECIFE.
    } else if (jogador == 2) {
        printf("\n---------------------------------------------\nJogador -CARTA RECIFE- \nComputador -CARTA FORTALEZA-\n---------------------------------------------\n\n");
                    // MENU PARA ESCOLHA DO PRIMEIRO ATRIBUTO.
        printf("Escolha dois atributos diferentes \npara o desafio de comparação. \n\n-PRIMEIRO ATRIBUTO- \n[1] POPULAÇÃO \n[2] ÁREA \n[3] PIB \n[4] NÚMERO DE PONTOS TURÍSTICOS \n[5] DENSIDADE POPULACIONAL \n[6] PIB PER CÁPITA \nATRIBUTO: ");
        scanf("%d", &atributo1);
        printf("\n---------------------------------------------\n");
        switch (atributo1) {    //USANDO SWITCH PARA ESCOLHER COMANDO DO MENÚ.
        case 1:
            printf("        -POPULAÇÃO-");
            printf("\nRECIFE POPULAÇÃO: %d \nFORTALEZA POPULAÇÃO: %d", populacao2, populacao1);
            resultado1 = populacao2 > populacao1 ? 1 : 0;    // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
            break;
        case 2:
            printf("        -ÁREA-");
            printf("\nRECIFE ÁREA: %.2f km²\nFORTALEZA ÁREA: %.2f km²", area2, area1);
            resultado1 = area2 > area1 ? 1 : 0;    // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
            break;
        case 3:
            printf("        -PIB-");
            printf("\nRECIFE PIB: %.2f bilhões de reais \nFORTALEZA PIB: %.2f bilhões de reais", pib2/1000000000, pib1/1000000000);
            resultado1 = pib2 > pib1 ? 1 : 0;    // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
            break;
        case 4:
            printf("        -NÚMEROS DE PONTOS TURÍSTICOS-");
            printf("\nRECIFE NÚMEROS DE PONTOS TURÍSTICOS: %d \nFORTALEZA NÚMEROS DE PONTOS TURÍSTICOS: %d", npt2, npt1);
            resultado1 = npt2 > npt1 ? 1 : 0;    // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
            break;
        case 5:
            printf("        -DENSIDADE POPULACIONAL-");
            printf("\nRECIFE DENSIDADE POPULACIONAL: %.0f hab/km² \nFORTALEZA DENSIDADE POPULACIONAL: %.0f hab/km²", dp2, dp1);
            resultado1 = dp2 < dp1 ? 1 : 0;    // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
            break;
        case 6:
            printf("        -PIB PER CAPTA-");
            printf("\nRECIFE PIB PER CAPTA: %.2f reais \nFORTALEZA PIB PER CAPTA: %.2f reais", ppc2, ppc1);
            resultado1 = ppc2 > ppc1 ? 1 : 0;    // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
            break;
        default:                           //UTILIZAÇÃO DO DEFAULT
            printf("OPÇÃO INVÁLIDA!");
            break;
        }        //CONTINUAÇÃO DO PROGRAMA (CASO NÃO UTILIZAÇÃO DO DEFAULT) ESCOLHENDO SEGUNDO ATRIBUTO
        if (atributo1 > 0 && atributo1 < 7) {     
            printf("\n---------------------------------------------\n\n-SEGUNDO ATRIBUTO- \n[1] POPULAÇÃO \n[2] ÁREA \n[3] PIB \n[4] NÚMERO DE PONTOS TURÍSTICOS \n[5] DENSIDADE POPULACIONAL \n[6] PIB PER CÁPITA \nATRIBUTO: ");
            scanf("%d", &atributo2);
            printf("\n---------------------------------------------\n");
            if (atributo2 != atributo1){             //IF PARA NÃO REPETIR O PRIMEIRO ATRIBUTO COM O SEGUNDO
                switch (atributo2) {      //USANDO SWITCH PARA ESCOLHER COMANDO DO MENÚ.
                case 1:
                    printf("        -POPULAÇÃO-");
                    printf("\nRECIFE POPULAÇÃO: %d \nFORTALEZA POPULAÇÃO: %d", populacao2, populacao1);
                    resultado2 = populacao2 > populacao1 ? 1 : 0;    // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
                    break;
                case 2:
                    printf("        -ÁREA-");
                    printf("\nRECIFE ÁREA: %.2f km² \nFORTALEZA ÁREA: %.2f km²", area2, area1);
                    resultado2 = area2 > area1 ? 1 : 0;    // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
                    break;
                case 3:
                    printf("        -PIB-");
                    printf("\nRECIFE PIB: %.2f bilhões de reais \nFORTALEZA PIB: %.2f bilhões de reais", pib2/1000000000, pib1/1000000000);
                    resultado2 = pib2 > pib1 ? 1 : 0;    // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
                    break;
                case 4:
                    printf("        -NÚMEROS DE PONTOS TURÍSTICOS-");
                    printf("\nRECIFE NÚMEROS DE PONTOS TURÍSTICOS: %d \nFORTALEZA NÚMEROS DE PONTOS TURÍSTICOS: %d", npt2, npt1);
                    resultado2 = npt2 > npt1 ? 1 : 0;    // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
                    break;
                case 5:
                    printf("        -DENSIDADE POPULACIONAL-");
                    printf("\nRECIFE DENSIDADE POPULACIONAL: %.0f hab/km² \nFORTALEZA DENSIDADE POPULACIONAL: %.0f hab/km²", dp2, dp1);
                    resultado2 = dp2 < dp1 ? 1 : 0;    // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
                    break;
                case 6:
                    printf("        -PIB PER CAPTA-");
                    printf("\nRECIFE PIB PER CAPTA: %.2f reais \nFORTALEZA PIB PER CAPTA: %.2f reais", ppc2, ppc1);
                    resultado2 = ppc2 > ppc1 ? 1 : 0;    // UTILIZAÇÃO DO OPERADOR TERNÁRIO PARA COMPARAÇÃO DOS ATRIBUTOS
                    break;
                default:          //UTILIZAÇÃO DO DEFAULT
                    printf("OPÇÃO INVÁLIDA!");
                    break;
                    }    
            } else {             //USANDO ELSE CASO A ESCOLHA DE ATRIBUTO SEJA IGUAL AO PRIMEIRO ATRIBUTO
                printf("OPÇÃO INVÁLIDA, ATRIBUTOS IGUAIS!");
            }   
        } 
    } else {       // ELSE CASO O JAGADOR NÃO ESCOLHA UMA DAS DUAS CARTAS (FORTALEZA OU RECIFE).
        printf("\nOPÇÃO INVÁLIDA!\n");
    }                              //REVELANDO AS 2 CARTAS DO JOGO JÁ CADASTRADAS
    printf("\n---------------------------------------------\n\n");      
    printf("====== CARTAS DO JOGO REVELADAS ======\n        -Carta 1-\nEstado: A\nCódigo: A01\nNome da Cidade: FORTALEZA\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.0f hab/km²\nPIB per Capita: %.2f reais\n\n", populacao1, area1, pib1/1000000000, npt1, dp1, ppc1);

    printf("        -Carta 2-\nEstado: B\nCódigo: B02\nNome da Cidade: RECIFE\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.0f hab/km²\nPIB per Capita: %.2f reais\n\n", populacao2, area2, pib2/1000000000, npt2, dp2, ppc2);
                //USANDO IF PARA ANALISAR VENCEDOR, PERDEDOR OU EMPATE, CASO O USUÁRIO ESCOLHA AS OPÇÕES EXISTENTES DOS MENÚS ANTERIORES
    if ((atributo1 < 7 && atributo1 > 0 && atributo2 < 7 && atributo2 > 0 && atributo1 != atributo2)) {
        printf("=============================================\n");
        if ((resultado1 == 1) && (resultado2 ==1)) {
            printf("### PARABÉNS, VOCÊ VENCEU!!! ###");
        } else if ((resultado1 == 0) && (resultado2 == 0)) { 
            printf("### VOCÊ PERDEU! ###");
        } else{
            printf("### EMPATOU! ###");
        }
        printf("\n=============================================\n\n"); 
    } 
    
    return 0;
}
