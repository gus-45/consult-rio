#include<stdio.h>
#include<stdlib.h>

int main(){


    printf("Bem- vindo\n");
    printf("O que deseja fazer?\n");

    printf("[1] - Marcar uma consulta\n");
    printf("[2] - Sair do programa\n");
    int opcaoUsuario = 0;
    scanf("%d", &opcaoUsuario);
    // Qualquer opção que o usuario digite que não seja o numero 1 eu encerro o programa
    if(opcaoUsuario != 1 ){
        printf("Programa finalizado!\n");
        system("pause");
        return 0;
    }

    // Armazeno o nome do paciente na variavel apos ele digitar
    char nomePaciente[100] = "";
    printf("Digite seu nome:\n");
    scanf("%s", &nomePaciente);

    // Armazenoo o dia da consulta do paciente na variavel apos ele digitar
    int diaConsulta;
    printf("Informe o dia da consulta (valores validos [1 a 30]):\n");
    scanf("%d", &diaConsulta);
    // Verifico se o usuario digitou um numero de um dia que esteja entre os valores de 1 a 30
    // qualuqer numero que não seja esses eu encerro o programa
    if(diaConsulta < 1 || diaConsulta > 30){
        printf("Dia invalido!\n");
        system("pause");
        return 0;
    }

    // Armazenoo o mes da consulta do paciente na variavel apos ele digitar
    int mesConsulta;
    printf("Informe o mes desejado (valores validos [1 a 12]):\n");
    scanf("%d", &mesConsulta);
    // Verifico se o usuario digitou um numero de um dia que esteja entre os valores de 1 a 12
    // qualuqer numero que não seja esses eu encerro o programa
    if(mesConsulta < 1 || mesConsulta > 12){
        printf("Mes invalido!\n");
        system("pause");
        return 0;
    }

    // Armazenoo o ano da consulta do paciente na variavel apos ele digitar
    int anoConsulta;
    printf("Informe o ano da consulta (valores validos [2024 a ...]):\n");
    scanf("%d", &anoConsulta);
    // Verifico se o usuario digitou um numero de um dia que esteja entre os valores de 2024 pra cima
    // qualuqer numero que não seja esses eu encerro o programa
    if(anoConsulta < 2024){
        printf("Ano invalido!\n");
        system("pause");
        return 0;
    }

    // Armazenoo a especialidade da consulta do paciente na variavel apos ele digitar
    int especialidadeMedico;
    printf("Informe a especialidade do medico desejado:\n");
    printf("[1] - Pediatria\n");
    printf("[2] - Cardiologia\n");
    scanf("%d", &especialidadeMedico);

    // Declaração das variveis que serão utilizadas para armazenar as informações que o usuario ira digitar
    int codigoMedico;
    char temPlanoSaude;
    float valorConsulta = 0;

    // Uso o switch case para comparar se o valor que o usuario digitou a respeito da especialidade vai ser 1, 2 ou um numero invalido    
    switch (especialidadeMedico)
    {
        // Se o numero armazenado na variavel especialidadeMedico for 1(Pediatria) eu entro no case 1             
       case  1:
            // Armazeno o código do medico que o usuario vai digitar na variavel codigoMedico            
            printf("Informe o nome do medico:\n");             
            printf("[1] - Ricardo\n");
            printf("[2] - Diana\n");
            scanf("%d", &codigoMedico);
            // Checo se o código do medico armazenado na variavel codigoMedico esta entre os valores 1 ou 2 qualquer valor fora esses eu entro no if e finalizo o programa 
            if(codigoMedico < 1 || codigoMedico > 2 ){
                printf("Nome medico invalido!\n");
                system("pause");
                return 0;
            }

            // Armazeno o valor que o usuario vai digitar na variavel temPlanoSaude        
            printf("Ira usar o plano medico:\n");
            printf("[S] - SIM\n");
            printf("[N] - NAO\n");
            scanf(" %c", &temPlanoSaude);
            // Checo se valor armazenado na variavel temPlanoSaude é igual a S ou N seja maiuscula ou minuscula, se for diferente dessa condição eu finalizo o programa
            if(temPlanoSaude != 'S' || temPlanoSaude != 's' || temPlanoSaude != 'N' || temPlanoSaude != 'n'){
                printf("Valor invalido!\n");
                system("pause");
                return 0;
            }

            // Checo se valor armazenado na variavel temPlanoSaude é igual a S e se o valor armazenado na variavel codigoMedico é igual a 2(Diana) 
            // Se atender esse criterio eu entro no if e informo que não aceita e finalizo o programa
            if((temPlanoSaude == 'S' || temPlanoSaude == 's') && codigoMedico == 2){
                printf("Medico nao aceita plano de saude!\n");
                system("pause");
                return 0;
            }
            
            // Checo se o valor da variavel temPlanoSaude é igual a N, se for quer dizer que o usuario vai pagar pela consulta 
            // Então entro no if e atribuo o valor da consulta na variavel valorConsulta
            // Se o valor for S eu mantenho o valor da variavel valorConsulta como 0, igual ao que foi declarado na linha 72
            if(temPlanoSaude == 'N' || temPlanoSaude == 'n'){
                valorConsulta = 150.00;
            } 
            
            // Imprimo as informações referentes ao agendamento
            printf("Seu agendamento foi finalizado com sucesso!\n");
            printf("Nome do paciente:%s\n",nomePaciente);
            printf("Codigo da especialidade escolhida:[%d]\n",especialidadeMedico);
            printf("Codigo do medico escolhido:[%d]\n",codigoMedico);
            printf("Data da consulta:%d/%d/%d\n",diaConsulta,mesConsulta,anoConsulta);
            printf("Valor da consulta:%f\n",valorConsulta);
            break;
        
        
            printf("Informe o nome do medico:\n"); 
            printf("[1] - Celia:\n");
            printf("[2] - Rubens\n");
            scanf("%d", &codigoMedico);
            // Checo se o código do medico armazenado na variavel codigoMedico esta entre os valores 1 ou 2 qualquer valor fora esses eu entro no if e finalizo o programa 
            if(codigoMedico < 1 || codigoMedico > 2){
                printf("Nome medico invalido!\n");

            }

            // Armazeno o valor que o usuario vai digitar na variavel temPlanoSaude
            printf("Ira usar o plano medico:\n");
            printf("[S] - SIM\n");
            printf("[N] - NAO\n");
            scanf(" %c", &temPlanoSaude);
            // Checo se valor armazenado na variavel temPlanoSaude é igual a S ou N seja maiuscula ou minuscula, se for diferente dessa condição eu finalizo o programa
            if(temPlanoSaude != 'S' || temPlanoSaude != 's' || temPlanoSaude != 'N' || temPlanoSaude != 'n'){
                printf("Valor invalido!\n");
                system("pause");
                return 0;
            }

            // Checo se valor armazenado na variavel temPlanoSaude é igual a S e se o valor armazenado na variavel codigoMedico é igual a 1(Celia) 
            // Se atender esse criterio eu entro no if e informo que não aceita e finalizo o programa
            if((temPlanoSaude == 'S' || temPlanoSaude == 's') && codigoMedico == 1){
                printf("Medico nao aceita plano de saude!\n");
                system("pause");
                return 0;
            }
            
            // Checo se o valor da variavel temPlanoSaude é igual a N, se for quer dizer que o usuario vai pagar pela consulta 
            // Então entro no if e atribuo o valor da consulta na variavel valorConsulta
            // Se o valor for S eu mantenho o valor da variavel valorConsulta como 0, igual ao que foi declarado na linha 72
            if(temPlanoSaude == 'N' || temPlanoSaude == 'n'){
                valorConsulta = 200.00;
            }

            // Imprimo as informações referentes ao agendamento           
            printf("Seu agendamento foi finalizado com sucesso!\n");
            printf("Nome do paciente:%s\n",nomePaciente);
            printf("Codigo da especialidade escolhida:[%d]\n",especialidadeMedico);
            printf("Codigo do medico escolhido:[%d]\n",codigoMedico);
            printf("Data da consulta:%d/%d/%d\n",diaConsulta,mesConsulta,anoConsulta);
            printf("Valor da consulta:%f\n",valorConsulta);
            break;

        // Se o numero armazenado na variavel especialidadeMedico for diferente de 1 ou 2 en entro no default e finalizo o program
        default:
            printf("Especialidade invalida!\n");
            system("pause");
            break;
    }

    system("pause");
    return 0;
}
