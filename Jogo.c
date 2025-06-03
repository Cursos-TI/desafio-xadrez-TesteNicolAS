/* Vou trabalhar dnv e fazer o jogo de xadrez de acordo com as regras

utilizar reciprocidade e procedimento + loops alinhados

utilizar as peças : torre + bispo + rainha

usar reciprocidade :)

*/

/* utilizar loops alinhados 

peça : cavalo

*/

/* Lembrete : usar apenas tipos de dados => int e string

*/

#include <stdio.h>

void FimDoPrograma(){

    printf("Fim do programa, obrigado :) \n"); // armazenar + imprimir a menssagem => Fim do programa, obrigado 
}

void DefaultErro(){

    printf("Erro\n"); // usar esse printf dentro dos switch quando alguem digitar algo que não existe !!!

}

void UmMomento(){

    printf("Um momento...\n"); // armazenar e imprimir a menssagem => um momento

}

// aqui fica os procedimentos + reciprocidade

void EscolhaSaidaDeDados()
{

    // armazenou a menssagem => escolha 
    // vou usar nas entradas e saida de dados do programa 

    printf("Escolha : \n");

}

void MoverTorre(int casasTorre){ // tipo de dado inteiro + nome significativo
    if (casasTorre > 1)
    {
        MoverTorre(casasTorre  - 1); // incrementar i++ 
    // 1, 2, 3 ...
    }
    printf("Torre andando %d casa, ou casas em linha reta !!\n", casasTorre); // imprimir essa meenssagem
        // fazer entrar em loop  

        /* inverti a ordem
        seguiu uma ordem crescente i++ ;
        1, 2, 3....*/

}

void MoverBispoDireita(int casasBispoDireita){ // tipo de dado inteiro + nome significativo
    if (casasBispoDireita > 1) // condição verdadeira + variavel > 1 + boleano ( 1 )
    {

        MoverBispoDireita(casasBispoDireita - 1); // incrementar i++
        // 1, 3, 3...

    }

    printf("Bispo andando %d casa, ou casas na diagonal direita!!\n", casasBispoDireita); /* Imprimir esta menssagem
    entrar em loop*/
    
}

void MoverBispoEsquerda(int casasBispoEsquerda){ // tipo de dados inteiro + nome significativo
    if (casasBispoEsquerda > 1) // condição verdadeira + variavel > 1 + boleano ( 1 )
    {
        MoverBispoEsquerda(casasBispoEsquerda - 1); // incrementar i++
        // 1, 2, 3...

    }

    printf("Bispo andando %d casa, ou casas na diagonal esquerda!!\n", casasBispoEsquerda); /* imprimir esta menssagem
    + loop*/
    
}

void RainhaDireita(int casasRainhaDIreita){ // tipo de dados inteiro + nome significativo
    if (casasRainhaDIreita > 1) // condição verdadeira + variavel > 1 + boleano ( 1 )
    {

        RainhaDireita(casasRainhaDIreita - 1); // incrementar i++
        // 1, 2, 3...

    }

    printf("Rainha andando %d casa, ou casas para a direita!!\n", casasRainhaDIreita); /* Imprimir esta menssagem
    + loop
    
    */
    
} 

void RainhaEsquerda(int casasRainhaEsquerda){ // tipo de dados inteiro + nome significativo
    if (casasRainhaEsquerda > 1) // condição verdadeira + variavel < 1 + boleano ( 1 )
    {
        RainhaEsquerda(casasRainhaEsquerda - 1); // incrementar i++
        // 1,2, 3...
    }

    printf("Rainha andando %d casa, ou casas para a esquerda!!\n", casasRainhaEsquerda); /* Imprimir esta menssagem
    + loop
    
    */
    

}

int main()
{

    // entrada e saida de tipos de dados
    int escolha, escolha2, escolhaTorre, escolhaBispo, bispoMovimento, escolhaRainha, EscolhaRainhaSEgunda, escolhaCavalo, EscolhaCalavoSegunda;

    // + entradas e saidas de tipos de dados
    int cavaloAtrasDireita, cavaloAtrasEsquerda, ScanCavaloDireita, ScanCavaloEsquerda;

    // quantidades do loop da torre
    int TorreAndando = 5;

    // quantidade do loops do bispo na diagonal direita
    int BispoAndandoDireita = 5;

    // quantidade de loops do bispo na diagonal esquerda
    int BispoAndandoEsquerda = 5;

    // quantidade de loops da rainha na direita
    int rainhaAndandoDireita = 8;

    // quantidade de loops da rainha na esquerda
    int rainhaAndandoEsquerda = 8;

    int cavaloMovimentacao= 1;
    // utilizar nos loops alinhados
    // while + for
    int cavaloMovimentacaoEsquerda = 1;
    /* utilizar nos loops alinhados 
    while + for

    */

    int Case1AtrasDireitaCAvalo = 1;

    int case2AtrasEsquerdaCavalo = 1;

    int case3SobeDireitaCavalo = 1;

    int case4SobeEsquerdaCavalo = 1; 

    /* usar no switch ( ScanCavaloDireita )
    e utilizar dentro dos case, os loops ( Estruturas de repetição )*/

    int SegundoCase1Direita = 1;

    int SegundoCase2Esquerda = 1;

    int SegundoCase3Direita = 1;

    int SegundoCase4Esquerda = 1;

    /* usar no switch ( ScanCavaloEsquerda )
    e utilizar dentro dos case, os loops ( estruturas de repetição )*/





    //   MoverBispoDireita(BispoAndandoDireita); // Entrar em loop a menssagem => bispo andando %d casa, ou casas, na diagonal direita !!
            // loop em 5 x 

            // usar isso aqui depois

    // increment

    // introdução
    printf("Bem vindo \n");
    printf("Jogo de Xadrez \n");

    do
    {

        printf("1. Iniciar...\n");
        printf("2. Ver regras...\n");
        EscolhaSaidaDeDados(); // imprimir a menssagem => Escolha :
        scanf("%d", &escolha); // entrada e saida de dados

        if (escolha % 2 != 0) 
        {
            // Aqui o código vai seguir sem loop !!!
            printf("Iniciando o jogo !!\n");
        } else {

            printf("Escolha alguma peca para jogar\n");
            printf("1. Torre\n");
            printf("2. Bispo \n");
            printf("3. Rainha \n");
            printf("4. Cavalo \n");
            printf("Cada peca faz um movimento diferente...\n");
            /*Resumo do jogo
            entrar em loop sempre que o usuario digitar 2
            selecionar a opção 2 !!
            
            */

        }
        
    } while (escolha % 2 == 0);

       printf("Escolha alguma peca para jogar\n");
            printf("1. Torre\n");
            printf("2. Bispo \n");
            printf("3. Rainha \n");
            printf("4. Cavalo \n");
            EscolhaSaidaDeDados(); // imprimir a menssagem => escolha :
            scanf("%d", &escolha2);
            // entrada e saida de dados

            switch (escolha2)
            {
            case 1:

            printf("1. iniciar...\n");
            printf("2. Saber o que a torre faz...\n");
           EscolhaSaidaDeDados(); // imprimir a menssagem => escolha :
            scanf("%d", &escolhaTorre); // entrada e saida de dados

            default:

            DefaultErro();

            switch (escolhaTorre)
            {
            case 1:
                 MoverTorre(TorreAndando); //imprimir a menssagem => torre andando %d casa, ou casas em linha reta!!
            //entrar em loop

            return 0;

            
                break;
            
            case 2:
        
            printf("A torre anda 5 casas, apenas em linha reta!!\n");
            printf("Apenas em uma unica diredao ok? \n");

            // explicar o que a torre faz com mais detalhe

            return 0;

            break;

             default:

            DefaultErro(); 

            return 0;

              break;

            }
            
            case 2:

            printf("1. Iniciar...\n");
            printf("2. Saber o que o bispo faz...\n");
           EscolhaSaidaDeDados(); // imprimir a menssagem => escolha :
           scanf("%d", &escolhaBispo); // entrada e saida de dados

           if (escolhaBispo == 1)
           {

            UmMomento(); // imprimir a menssagem => um momento

           }  else if (escolhaBispo == 2)
           {

            UmMomento(); // imprimir a menssagem => um momento

           }

           switch (escolhaBispo) // menu interativo
           {
           case 1:

           UmMomento(); // imprimir a menssagem => um momento...
           printf("1. Diagonal direita...\n");
           printf("2. Diagonal esquerda...\n");
           EscolhaSaidaDeDados(); // imprimir a menssagem => escolha :
           scanf("%d", &bispoMovimento); // entrada e saida de dados

           switch (bispoMovimento)
           {
           case 1:

           MoverBispoDireita(BispoAndandoDireita); // Entrar em loop a menssagem => bispo andando %d casa, ou casas, na diagonal direita !!
            // loop em 5 x 

            FimDoPrograma(); // imprimir a menssagem => obrigado, fim do programa :)

            return 0;

            break;

            case 2:

            MoverBispoEsquerda(BispoAndandoEsquerda); /* Entrar em loop a menssagem
            
            Bispo andando %d casa, ou casas, na diagonal esquerda
            
            */
           
            FimDoPrograma(); // imprimir a menssagem => obrigado, fim do programa

            return 0;

            break;
           
           default:

           DefaultErro(); // imprimir a menssagem => Erro!!

           return 0;

            break;

           }


            break;
           
           case 2:

           printf("O bispo anda 5 casas apenas na diagonal direita!!\n"); // explicar o que o bispo faz

            break;

            default:

            DefaultErro(); // imprimir a menssagem => erro!!

            return 0;

           }

                case 3: 

            UmMomento(); // imprimir a menssagem => um momento
            printf("1. Iniciar...\n");
            printf("2. Saber o que a rainha faz...\n");
           EscolhaSaidaDeDados(); // imprimir a menssagem => escolha :
           scanf("%d", &escolhaRainha); // entrada e saida de dados

           switch (escolhaRainha)
           {
           case 1:

           UmMomento();
           printf("1. Rainha anda 8 casas, ate a direita...\n");  
           printf("2. Rainha anda 8 casas, ate a esquerda...\n");
           EscolhaSaidaDeDados(); // imprimir a menssagem => escolha :
           scanf("%d", &EscolhaRainhaSEgunda); // entrada e saida de dados

           switch (EscolhaRainhaSEgunda)
           {

            // menu interativo
           case 1:

           RainhaDireita(rainhaAndandoDireita); // imprimir a menssagem => Rainha andando 8 casas, ate a direita
           // 8 loops 
           FimDoPrograma(); // imprimir a menssagem => fim, do programa :)

            break;

            case 2:

             RainhaEsquerda(rainhaAndandoEsquerda); // imprimir a menssagem => Rainha andando 8 casas, ate a direita
            // 8 loops
            FimDoPrograma(); // imprimir a menssagem => fim, do programa :)

            break;
           
           default:
           DefaultErro(); //imprimir a menssagem => Erro!!
            break;
           }

            
            break;
           
            case 2:

            printf("Rainha andando 8 casas até a direita, ou esquerda...\n"); // explicar as regras

            return 0;

            break;

            default:
            DefaultErro(); // imprimir a menssagem => Erro!!

            return 0;

            break;
           }



           break;

           case 4:

           UmMomento(); // imprimir a menssagem => um momento 
           printf("1. Iniciar...\n"); // case 1 // caso 1
           printf("2.Saber o que o cavalo faz...\n"); // case 2 // caso 2
           EscolhaSaidaDeDados(); // imprimir a menssagem => escolha :
           scanf("%d", &escolhaCavalo); // entrada e saida de dados

           /* aqui vou debugando aos poucos porque estou com dificuldades de usar os loops alinhados
           
           >:(
           
           */

           switch (escolhaCavalo)
           { // menu interativo
           case 1: // caso 1

           UmMomento(); // imprimir a menssagem => um momento
           printf("1. O cavalo vai subir duas casas e vai ir para a direita!!\n"); // case 1
           printf("2. O cavalo vai subir duas casas e vai ir para a esquerda!!\n"); // case 2
           EscolhaSaidaDeDados(); // imprimir a menssagem => Entrada e saida de dados
           scanf("%d", &EscolhaCalavoSegunda); // entrada e saida de dados

           switch (EscolhaCalavoSegunda)
           { // menu interativo
           case 1: // caso 1
            
           while (cavaloMovimentacao--) // loop externo + decremento
           {
            for (int i = 1; i <= 2; i++) // for interno
            {
                printf("Andando %d casa, ou casas para cima\n", i); // bloco de código interno
            }

            printf("Cavalo indo para a direita\n"); // bloco de código externo

              // simular os movimentos da peça cavalo

            } 

            printf("agora...\n");
            printf("1. Cavalo volta para atras...\n"); // case 1
            printf("2. FIm...\n"); // case 2
            EscolhaSaidaDeDados(); // imprimir a menssagem => escolha
            scanf("%d", &cavaloAtrasDireita); // entrada e saida de dados

            switch (cavaloAtrasDireita)
            { // menu interativo
            case 1: //caso 1

                printf("1. Cavalo volta duas casas para atras e vai para a direita!!\n"); // case 1
                printf("2. Cavalo volta duas casas para atras e vai para a esquerda!!\n"); // case 2
                printf("3. Cavalo sobe duas casas e vai para a direita!!\n"); // case 3
                printf("4. Cavalo sobe duas casas e vai para a esquerda!!\n"); // case 4
                EscolhaSaidaDeDados(); // imprimir a menssagem => escolha :
                scanf("%d", &ScanCavaloDireita); // entrada e saida de dados

                switch (ScanCavaloDireita)
                { // menu interativo
                case 1: // caso 1

                while (Case1AtrasDireitaCAvalo--) // loop externo
                {
                    for (int i = 1; i <= 2; i++) // loop interno
                    {
                        printf("volta %d casa, ou casas para atras!!\n", i); // bloco de código interno
                    }

                    printf("CAvalo indo para direita!!\n"); // bloco de código externo
                    
                }

                FimDoPrograma(); // imprimir a menssagem => fim do programa

                return 0;
                
                   
                    break;

                    case 2: // case 2

                    while (case2AtrasEsquerdaCavalo--) // decremento
                    { // loop externo
                        for (int i = 1; i <= 2; i++) // loop interno
                         {
                            printf("Volta %d casa, ou casas para atras!!\n", i); // bloco de código interno
                        }

                        printf("Cavalo indo para a esquerda!!\n"); // bloco de código externo
                        
                    }

                     FimDoPrograma(); // imprimir a menssagem => fim do programa

                        return 0;
                    

                    break;

                    case 3: // case 3

                    while (case3SobeDireitaCavalo--) // loop externo
                    {
                        for (int i = 1; i <= 2; i++) // loop interno
                        {

                            printf("Sobe %d casa, ou casas para cima!!\n", i);
                      
                        }

                        printf("Cavalo indo para direita!!\n");
                        
                    }

                    FimDoPrograma(); // imprimir a menssagem => fim do programa

                    return 0;
                    

                    break;

                    case 4: // case 4

                    while (case4SobeEsquerdaCavalo--) // loop externo
                    {
                        for (int i = 1; i <= 2; i++) // loop interno
                        {
                            printf("Sobe %d casa, ou casas para cima!!\n", i); // bloco de código externo
                        }

                        printf("Cavalo indo para a esquerda!!\n"); // bloco de código interno
                        
                    }

                    FimDoPrograma(); // imprimir a menssagem => Erro!!

                    return 0;
                    

                    break;
                
                default:

                DefaultErro(); // imprimir a menssagem => erro!!

                    break;
                }


                
                break;

                case 2: // caso 2

                break;

                FimDoPrograma(); // imprimir a menssagem => fim do programa;
            
            default:

            DefaultErro(); // imprimir a menssagem
                break;
            }

          
            
            break;

            case 2: // caso 2 

            while (cavaloMovimentacaoEsquerda--) // loop externo
            {
                for (int i = 1; i <= 2; i++) // loop interno
                {  

                   printf("Andando %d casa, ou casas para cima!!\n", i); // bloco de código interno

                }

                  printf("Cavalo indo para a esquerda\n"); // bloco de código externo

                    // simular os movimentos da peça cavalo
                
            }

            printf("agora...\n");
            printf("1. Seguir com o jogo...\n"); // case 1
            printf("2. FIm...\n"); // case 2
            EscolhaSaidaDeDados(); // imprimir a menssagem => escolha
            scanf("%d", &cavaloAtrasEsquerda); // entrada e saida de dados

            switch (cavaloAtrasEsquerda)
            { // menu interativo
            case 1: // caso 1
                printf("1. Cavalo volta duas casas para atras e vai para a direita!!\n"); // case 1
                printf("2. Cavalo volta duas casas para atras e vai para a esquerda!!\n"); // case 2
                printf("3. Cavalo sobe duas casas e vai para a direita!!\n"); // case 3
                printf("4. Cavalo sobe duas casas e vai para a esquerda!!\n"); // case 4
                EscolhaSaidaDeDados(); // imprimir a menssagem => escolha :
                scanf("%d", &ScanCavaloEsquerda); // entrada e saida de dados

                switch (ScanCavaloEsquerda)
                { // menu interativo
                case 1: // caso 1    
                
                while (SegundoCase1Direita--) // loop externo
                {
                    for (int i = 1; i <= 2; i++) // loop interno
                    {
                        printf("Volta %d casa, ou casas para atras!!\n", i); // bloco de código interno
                    }

                    printf("Cavalo indo para a direita!!\n"); // bloco de código externo 
                    
                }

                FimDoPrograma(); // imprimir a menssagem => fim do programa

                return 0;
                
                    
                    break;

                    case 2: // caso 2

                    while (SegundoCase2Esquerda--) // loop externo
                    {
                        for (int i = 1; i <= 2; i++) // loop interno
                        {
                            printf("volta %d casa, ou casas para atras!!\n", i); // bloco de código interno
                        }

                        printf("Cavalo indo para a esquerda!!\n"); // bloco de código externo
                        
                    }

                    FimDoPrograma(); // imprimnir a menssagen => fim do programa

                    return 0;
                    

                    break;

                    case 3: // caso 3
                    
                    while (SegundoCase3Direita--) // loop externo
                    {
                        for (int i = 1; i <= 2; i++) // loop interno
                        {
                            printf("Sobe %d casa, ou casas para cima!!\n", i); // bloco de código interno
                        }

                        printf("Cavalo indo para a direita!!\n"); // bloco de código externo
                        
                    }

                    FimDoPrograma(); // imprimir a menssagem => fim do programa

                    return 0;
                    

                    break;

                    case 4: // caso 4

                    while (SegundoCase4Esquerda--) // loop externo
                    {
                        for (int i = 1; i <= 2; i++) // loop interno
                        {
                            printf("Sobe %d casa, ou casas para cima!!\n", i); // bloco de código interno
                        }

                        printf("Cavalo indo para a esquerda!!\n"); // bloco de código externo
                        
                    }

                    FimDoPrograma(); // imprimir a menssagem => fim do programa 

                    return 0;
                    

                    break;
                
                default:

                DefaultErro(); // imprimir a menssagem => erro!!
                    break;
                }

                break;

                case 2: // caso 2 

                FimDoPrograma(); // imprimir a menssagem => fim do progama

                return 0;

                break;
            
            default:

            DefaultErro(); // imprimir a mwenssagem => erro!!

                break;
            }

            break;
           
           default:

           DefaultErro(); // imprimir a menssagem => Erro!!

            break;

           }
           




            break;

            case 2: // caso 2 

                printf("O cavalo e bem diferente => 2 casas, para a horizontal, direita, esquerda, ou vertical...\n");
                printf("O cavalo => Depois faz um movimento perpendicular (Para o lado, ou para cima) \n");
                printf("Faz um movimento em L !! \n");

                // explicar como funciona o cavalo

                return 0;

            break;
           
           default:

           DefaultErro(); // imprimir a menssagem => Erro!!

           return 0;

            break;

           }

           break;

            }

    return 0;

}
