/*
+=======================+
+CODIGO FEITO POR CARBANAK+
+=======================+
*/

/*
+==============================+
+CODIGO TERMINADO NO DIA 15/03/2024+
+==============================+
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// verificar se o sistema e linux/windows

#ifdef _WIN32
#include <windows.h>
#elif __linux__ || __unix__ || __APPLE__
#include <unistd.h>
#endif


// pegar nome de usuario.

void get_username(char *username) {
#ifdef _WIN32
    DWORD username_len = UNLEN + 1;
    GetUserName(username, &username_len);
#elif __linux__ || __unix__ || __APPLE__
    size_t username_len = 1024;
    getlogin_r(username, username_len);
#endif
}

// função para converter uma string para minúsculas
void toLowerString(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

// função para comparar strings ignorando o caso minusculo ou maisculo
int strcmpIgnoreCase(const char *str1, const char *str2) {
    char lowerStr1[50];
    char lowerStr2[50];
    
    strcpy(lowerStr1, str1);
    strcpy(lowerStr2, str2);
    
    toLowerString(lowerStr1);
    toLowerString(lowerStr2);
    
    return strcmp(lowerStr1, lowerStr2);
}


// função para limpar tela
void limparTela() {
    #ifdef _WIN32
        system("cls"); // Para Windows
    #else
        system("clear"); // Para sistemas baseados em Unix/Linux
    #endif
}



void main() {
   
   //carrega o idiota para português
   setlocale(LC_ALL, "Portuguese");

   //variaveis
   char inicio[50]; // inicio do jogo

   // partes historia
   char parte2[50]; // parte 2
   char parte3[50]; // parte 3
   char parte4[50]; // parte 4
   char parte5[50]; // parte 5
   char parte6[50]; // parte 6
   char parte7[50]; // parte 7
   char parte8[50]; // parte 8
   char parte9[50]; // parte 9
   char parte10[50]; // parte 10


   // inicio do programa
   
    //arte ascii de inicio
   
    printf("                       Horror Game Based Text                        \n\n");
    printf("     Trama:  O Farol                                                  \n");
    printf("                                   |>>>                               \n");
    printf("                                  |                               \n");
    printf("                    |>>>      _  _|_  _         |>>>                \n");
    printf("                    |        |;| |;| |;|        |                   \n");
    printf("                _  _|_  _    \\\\.    .  /    _  _|_  _               \n");
    printf("               |;|_|;|_|;|    \\\\:.,  /    |;|_|;|_|;|              \n");
    printf("               \\..      /    ||;   . |    \\\\    .  /              \n");
    printf("                \\\\  ,  /     ||:  .  |     \\\\  .  /               \n");
    printf("                 ||:   |_   _ ||_ . _ | _   _||:   |                \n");
    printf("                 ||:  .|||_|;|_|;|_|;|_|;|_|;||:.  |                \n");
    printf("                 ||:   ||.    .     .      . ||:  .|                \n");
    printf("                 ||: . || .     . .   .  ,   ||:   |       \\,/      \n");
    printf("                 ||:   ||:  ,  _______   .   ||: , |            /`\\ \n");
    printf("                 ||:   || .   /++++++\\    . ||:   |                \n");
    printf("                 ||:   ||.    |+++++++| .    ||: . |                \n");
    printf("              __ ||: . ||: ,  |+++++++|.  . _||_   |                \n");
    printf("     ____--`~    '--~~__|.    |+++++__|----~    ~`---,              \n");
    printf("-~--~                   ~---__|,--~'                  ~~----_____-~' \n\n");
   

   printf("Esse Jogo é Apenas Para Digitar.\n");
   printf("Digite \033[31mINICIAR\033[0m Para Começar\n");
   scanf(" %s", inicio);


// bloco parte 1

if (strcmpIgnoreCase(inicio, "INICIAR") == 0) {   
  printf("o seu uso desde jogo trará consequências.\n");
  printf("não use o jogo se não for capaz de lidar com as consequências\n");
  printf("se você concorda com estes termos, escreva\n");
  printf("\033[31mEU CONCORDO COM ESTES TERMOS\033[0m.\n");
  scanf(" %[^\n]", parte2);  //scanf para a parte2



  // bloco parte 2

  if (strcmpIgnoreCase(parte2, "EU CONCORDO COM ESTES TERMOS") == 0) { 
     printf("\033[33;1mEntão Estamos De Acordo. Você Tomou Uma Exelente Decisão.\033[0m\n");

     sleep(3);

     //limpa a tela
     limparTela();

    char frase[] = "13 de março de 2023, Sexta. \n\nEu e meus amigos estávamos reunidos na escola, em frente à porta da nossa sala de aula, encostados na parede enquanto conversávamos calmamente. O dia estava nublado e havia um clima leve de frio, então estávamos de casacos. A conversa estava fluindo bem, tenho 3 amigos: um chamado Wanderson, outro Vitor e minha amiga Manuela. Estávamos falando sobre o \033[31;1mfarol\033[0m antigo da nossa cidade, compartilhando relatos do que aconteceu lá. Claro, eram todas mentiras ou histórias para assustar crianças. Eu estava rindo junto com eles.\n\n";

            // Efeito máquina de escrever
            int i = 0; 
            while (frase[i] != '\0') {
                putchar(frase[i]);
                fflush(stdout);
                usleep(50000);
                i++;
            }

            printf(" . _  .    .__  .  .  __,--'                 \n");
            printf("  (_)    ' /__\\ __,--'                       \n");
            printf("'  .  ' . '| o|'                             \n");
            printf("          [IIII]`--.__                       \n");
            printf("           |  |       `--.__                 \n");
            printf("           | :|             `--.__           \n");
            printf("           |  |                   `--.__     \n");
            printf("._,,.-,.__.'__`.___.,.,.-..,_.,.,.,-._..`--..\n\n\n");


            scanf(" %s", parte3); // parte 3
            

            //bloco parte 3
            if (strcmpIgnoreCase(parte3, "FAROL") == 0) {
   
            // limpa a tela
            limparTela();


           char frase[] = "Enquanto trocávamos essas histórias, o sino da escola repentinamente ecoou pelo corredor, anunciando o início das aulas. Num movimento rápido, me despedi brevemente e me dirigi para minha sala. Durante a aula de história, minha mente divagava entre os fatos relatados pelo professor e as histórias que compartilhamos mais cedo. De repente, um estrondo alto ecoou pelo prédio da escola, seguido por uma série de \033[31mgritos\033[0m vindos do lado de fora. Todos na sala de aula ficamos em silêncio, olhando uns para os outros com expressões de preocupação.\n\n";
 
 
           // Efeito máquina de escrever
            int i = 0; 
            while (frase[i] != '\0') {
                putchar(frase[i]);
                fflush(stdout);
                usleep(50000);
                i++;
            }

             printf("    \\_/\n");
             printf("  --(_)--  .\n");
             printf("    / \\   /_\\\n");
             printf("          |Q|\n");
             printf("    .-----' '-----.\n");
             printf("   /____[SCHOOL]___\\\n");
             printf("    | [] .-.-. [] |\n");
             printf("  ..|____|_|_|____|.................................)(... ldb\n\n\n");


            scanf(" %s", parte4);
           

            // bloco 4

            if(strcmpIgnoreCase(parte4, "GRITOS") == 0) {
              
             // limpa a tela
            limparTela();

           
            char frase[] = "Percebi o professor, visivelmente tenso, pediu que ficássemos calmos e permanecêssemos em nossos lugares enquanto ele saía para investigar o que estava acontecendo. O tempo parecia se arrastar enquanto esperávamos, com os murmúrios nervosos preenchendo o espaço antes silencioso da sala de aula e eu ficando cada vez mais tenso.\n\nMinutos depois, o professor retornou, seu rosto pálido refletindo a seriedade da situação. Ele nos informou que uma garota tinha pulado do terceiro andar da escola no terraço talvez \033[31msuicidio\033[0m, e que estava sem vida, o professor não falou o nome de quem era, logo começo a suar frio tentando não pensar em besteira.\n\n";



             // Efeito máquina de escrever
            int i = 0; 
            while (frase[i] != '\0') {
                putchar(frase[i]);
                fflush(stdout);
                usleep(50000);
                i++;
            }
           
    printf("          _\n");
    printf("        ,/_\\,\n");
    printf("      ,/_/ \\_\\,\n");
    printf("     /_/ ___ \\_\\\n");
    printf("    /_/ |(V)| \\_\\\n");
    printf("      |  .-.  |\n");
    printf("      | / / \\ |\n");
    printf("      | \\ \\ / |\n");
    printf("      |  '-'  |\n");
    printf("      '--,-,--'\n");
    printf("         | |\n");
    printf("         | |\n");
    printf("         | |\n");
    printf("         /\\|\n");
    printf("         \\/|\n");
    printf("          /\\ \n");
    printf("          \\/ \n\n");

            scanf(" %s", parte5);

            
            // bloco 5

            if(strcmpIgnoreCase(parte5, "SUICIDIO") == 0) {
         
            // limpa a tela
            limparTela();


             char frase[] = "Após alguns minutos trancado naquela sala de aula, eu me sentia um pouco abafado por estar ali por algumas horas a mais, mas permanecia preocupado com a possível identidade da \033[31mgarota\033[0m que supostamente teria se suicidado.\n\nApós alguns minutos, policiais entraram na sala e pediram para que todos saíssem organizadamente. Rapidamente me levantei de minha carteira, coloquei a mochila nas costas e segui as ordens, descendo as longas escadas da escola. Já era possível ouvir o som das sirenes das ambulâncias. De cima das escadas, tinha uma visão ampla e então olhei para um ponto específico lá embaixo... e vi... não... não, não, não!!!\n\n";


            // Efeito máquina de escrever
            int i = 0; 
            while (frase[i] != '\0') {
                putchar(frase[i]);
                fflush(stdout);
                usleep(50000);
                i++;
            }

    printf("           ______\n");
    printf("        .-\"      \"-.\n");
    printf("       /            \\\n");
    printf("      |              |\n");
    printf("      |,  .-.  .-.  ,|\n");
    printf("      | )(__/  \\__)( |\n");
    printf("      |/     /\\     \\|\n");
    printf("      (_     ^^     _)\n");
    printf("       \\__|IIIIII|__/\n");
    printf("        | \\IIIIII/ |\n");
    printf("        \\          /\n");
    printf("         `--------`\n\n");


            scanf(" %s", parte6);
            


           //bloco 6

          if(strcmpIgnoreCase(parte6, "GAROTA") == 0){
            
             
          // limpa a tela
            limparTela();
        

           char frase[] = "Parecia ser a Manuela, minha amiga. Então desço as escadas mais rapidamente para chegar lá embaixo. Quando finalmente chego, sou barrado pelos policiais. Ao confirmar que realmente era a Manuela, meu coração se parte. Eu amava a Manuela, mas nunca consegui dizer isso a ela em vida. Agora, morta, é algo que nunca será revelado... Apenas choro, sentindo um turbilhão de emoções no meu coração.\n\nAté que olho para trás e vejo alguém com uma máscara de palhaço do outro lado do portão da escola. Continuo chorando e apenas vejo rapidamente. Ele parece estar olhando, talvez surpreso, não sei dizer. A máscara é branca, com um grande \033[31msorriso\033[0m macabro preto. Depois de um breve momento de luto pela minha amiga, os policiais mandam todos os alunos irem embora. Eu caminho até o portão, ainda enxugando as lágrimas do rosto, e finalmente vou embora.\n\n";

           // Efeito máquina de escrever
            int i = 0; 
            while (frase[i] != '\0') {
                putchar(frase[i]);
                fflush(stdout);
                usleep(50000);
                i++;
            }

    printf("                                 {} {}\n");
    printf("                         !  !  ! II II !  !  !\n");
    printf("                      !  I__I__I_II II_I__I__I  !\n");
    printf("                      I_/|__|__|_|| ||_|__|__|\\_I\n");
    printf("                   ! /|_/|  |  | || || |  |  |\\_|\n");
    printf("       .--.        I//|  |  |  | || || |  |  |  |\\\\I        .--.\n");
    printf("      /-   \\    ! /|/ |  |  |  | || || |  |  |  | \\|\\ !    /=   \\\n");
    printf("      \\=__ /    I//|  |  |  |  | || || |  |  |  |  |\\\\I    \\-__ /\n");
    printf("       }  {  ! /|/ |  |  |  |  | || || |  |  |  |  | \\|\\ !  }  {\n");
    printf("      {____} I//|  |  |  |  |  | || || |  |  |  |  |  |\\\\I {____}\n");
    printf("_!__!__|= |=/|/ |  |  |  |  |  | || || |  |  |  |  |  | \\|\\=|  |__!__!\n");
    printf("_I__I__|  ||/|__|__|__|__|__|__|_|| ||_|__|__|__|__|__|__|\\||- |__I__I_\n");
    printf("-|--|--|- ||-|--|--|--|--|--|--|-|| ||-|--|--|--|--|--|--|-||= |--|--|- \n");
    printf(" |  |  |  || |  |  |  |  |  |  | || || |  |  |  |  |  |  | ||  |  |  |\n");
    printf("_|__|__|  ||_|__|__|__|__|__|__|_|| ||_|__|__|__|__|__|__|_||  |__|__|_\n");
    printf("-|--|--|= ||-|--|--|--|--|--|--|-|| ||-|--|--|--|--|--|--|-||- |--|--|- \n");
    printf("-|--|--|| |  |  |  |  |  |  | || || |  |  |  |  |  |  | ||= |  |  |  |\n");
    printf("~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^~~~~~~~~~~~\n\n");


      scanf(" %s", parte7);
  
       
       //bloco 7

       if(strcmpIgnoreCase(parte7, "SORRISO") == 0) {

         // limpa a tela
            limparTela();
        
        char frase[] = "14 de março, Sabado\n\nApós o dia anterior ter ficado de \033[31mluto\033[0m a noite toda, tento fazer contatos com meus colegas, o Wanderson e Vitor, mas nenhuma resposta, apenas tento ignorar mas ainda preocupado pensando que os mesmos estão também de luto naquele momento dificil de perder um amigo, como é um sabado visto uma calça e uma camisa casualmente, e saiu de casa para dar uma volta.\n\nAte chegar em uma praça local, perto de casa onde tem uma vista ampla do farol, onde tenho mémorias das gargalhadas de manuela quando estavamos comentando sobre, ate um momento eu conseguir ver... a manuela entrando no farol? logo me levanto do banco da praça e começo a correr pelas ruas pegando a direção ao farol.\n\n";
        
        // Efeito máquina de escrever
            int i = 0; 
            while (frase[i] != '\0') {
                putchar(frase[i]);
                fflush(stdout);
                usleep(50000);
                i++;
            }

    printf("  _|_|___________________|_|_  \n");
    printf(" |__:_____________________:__| \n");
    printf(" |___________________________| \n");
    printf(" |__:_____________________:__| \n");
    printf(" |___________________________| \n");
    printf("   |_|___________________|_|   \n");
    printf("  /__.___________________.__\\  \n");
    printf(" /__._____________________.__\\ \n");
    printf("/_____________________________\\ \n");
    printf("   | |_|               |_| |   \n");
    printf("   | |                   | |   \n");
    printf("   | |                   | |   \n");
    printf("   |_|                   |_|   \n\n");


    scanf(" %s", parte8);


     // bloco 8

    if(strcmpIgnoreCase(parte8, "LUTO") == 0) {

       // limpa a tela
        limparTela();

       char frase[] = "Após correr pelas ruas da cidade, notei algo particularmente estranho: não havia pessoas nas ruas. Logo deduzi que era sábado e que eu tinha acordado mais cedo do que o habitual. Aumentando meu ritmo, finalmente cheguei à frente do farol. Ele não era muito grande, e fiquei tendo uma luta interna para determinar se realmente vi algo ou se foi apenas uma alucinação causada pelo luto.\n\nDepois de finalmente tomar uma decisão, entrei no farol. Ao entrar, olhei ao meu redor e percebi que tudo estava sombrio. Ao olhar para cima, comecei a subir os degraus das escadas do farol. A cada passo que dava, minha cabeça doía e um \033[31mpressentimento\033[0m muito ruim me assolava.\n\n";

 // Efeito máquina de escrever
            int i = 0; 
            while (frase[i] != '\0') {
                putchar(frase[i]);
                fflush(stdout);
                usleep(50000);
                i++;
            }

            printf(" . _  .    .__  .  .  __,--'                 \n");
            printf("  (_)    ' /__\\ __,--'                       \n");
            printf("'  .  ' . '| o|'                             \n");
            printf("          [IIII]`--.__                       \n");
            printf("           |  |       `--.__                 \n");
            printf("           | :|             `--.__           \n");
            printf("           |  |                   `--.__     \n");
            printf("._,,.-,.__.'__`.___.,.,.-..,_.,.,.,-._..`--..\n\n\n");

      
          scanf(" %s", parte9);


        if(strcmpIgnoreCase(parte9, "PRESSENTIMENTO") == 0) {
 

         // pegar o usuario do computador
         char username[1024];
         get_username(username);

         // limpa a tela
        limparTela();

        char frase[] = "Continuo sentindo esse pressentimento ruim enquanto subo os degraus daquela escada enferrujada e quase cinza de tão velha, agora caminho com mais cuidado enquanto continuo subindo, tendo a sensação de estar sendo observado atentamente, até qu... \033[31mERROR, ERROR, ERROR.\033[0m\n\n";


        // Efeito máquina de escrever
            int i = 0; 
            while (frase[i] != '\0') {
                putchar(frase[i]);
                fflush(stdout);
                usleep(50000);
                i++;
            }

            printf("Olá %s, parece que chegamos a um momento crítico... agora cabe a você decidir o destino de Guilherme... sim, todo esse tempo você estava controlando o protagonista desta história...? Não posso dizer, meu desenvolvedor é iniciante... talvez em um futuro próximo ele aprenda a programar de verdade...\n\nBem... estou com preguiça de conversar com você, então escolha... sabiamente...\033[0;32m\n\n \033[31mMORRER\033[0m, \033[31mDESPERTAR\033[0m.\n", username);


            scanf(" %s", parte10);
 
         // bloco 10

         if(strcmpIgnoreCase(parte10, "MORRER") == 0) {


          // limpa a tela
          limparTela();

         char frase[] = "Até que, quando olho para baixo, percebo a escada rangendo e se rompendo devido à sua extrema ferrugem. Em um instante, me vejo caindo em direção ao abismo escuro até atingir o solo do local, ouvindo apenas o barulho do impacto. Logo após, mergulho na escuridão total.\n\nAbro os olhos e me deparo com meu próprio corpo deitado em uma maca hospitalar, rodeado por meus amigos, incluindo Manuela. No ambiente, há um clima de preocupação palpável. Enquanto absorvo a cena, uma notícia está sendo transmitida na televisão: a escola foi vítima de um bombardeio. É nesse momento que a realidade se desfaz diante de mim. Tudo o que vivenciei não passou de uma criação da minha mente ou do meu subconsciente, uma tentativa desesperada de me salvar que agora não sera mais possivel..\n\n\n";

          // Efeito máquina de escrever
            int i = 0; 
            while (frase[i] != '\0') {
                putchar(frase[i]);
                fflush(stdout);
                usleep(50000);
                i++;
            }

        // pega o usuario

         char username[1024];
         get_username(username);

            printf("Bom... parece que você fez uma escolha ruim.. ate mais, é obrigado por jogar %s\n", username);

         } else {

         if (strcmpIgnoreCase(parte10, "DESPERTAR") == 0) {

         
          // limpa a tela
          limparTela();

        char frase[] = "Até que, quando olho para baixo, percebo a escada rangendo e se rompendo devido à sua extrema ferrugem. Em um instante de pânico, sinto-me caindo em direção ao abismo, mas por fim consigo me segurar na grade da escada, ficando pendurado lá em cima. Com um esforço tremendo, consigo me levantar novamente, mas algo parece errado. Meu corpo não responde como deveria enquanto continuo subindo, até que um brilho intenso repentinamente invade meu rosto.\n\nAos poucos, começo a abrir os olhos e me vejo envolto por vários tubos ligados ao meu corpo, recebendo soro em uma cama de hospital, totalmente enfaixado. À minha frente, um médico me examina sob uma luz forte. Ao olhar ao redor, percebo meus amigos presentes no quarto. Meus olhos se fixam em Manuela e, com minhas últimas forças, consigo dizer:\n\n— Manuela... eu te amo...\n\nEntão, fecho os olhos, mergulhando em um sono profundo, talvez acordando horas depois.\n\n15 de abril de 2024.\n\nAgora, depois de terminar a escola e ingressar na faculdade, estou namorando Manuela. Nosso círculo de amigos cresceu, mas mantemos contato regular e nos reunimos frequentemente. Meu amigo Wanderson, que sempre zombou que nunca encontraria alguém, também encontrou uma pessoa incrível, assim como meu amigo Vitor.\n\n\n";


         // Efeito máquina de escrever
            int i = 0; 
            while (frase[i] != '\0') {
                putchar(frase[i]);
                fflush(stdout);
                usleep(50000);
                i++;
            }

            printf("Estou Impressionado, Parabéns você conseguiu o final bom.. de uma olhada na outra alternativa para entender a história...\n");


         }

         }

        } else {
            printf("Digite Certo.\n");
        }

    } else {
        printf("Digite Certo.\n");
    }

       } else {
           printf("Digite Certo.\n");
       }


          } else {
              printf("Digite Certo.\n");
          }




            } else {
              printf("Digite Certo.\n");

            }


            } else {
                printf("Digite Certo.\n");
            }


            } else {
                printf("Digite certo'.\n");
            }

 } else {
   printf("Digite certo\n");
 }

} else {
  printf("Digite certo\n");
}
}

