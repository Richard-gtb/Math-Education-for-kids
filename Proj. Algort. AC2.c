#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
system("color 5B");

char num, perg1, num1, nome[50], dowhile, materia, sair, rosto=2;
int saida, teste, pontos, resp1, resp2, resp3, resp4, resp5, resp6, resp7, resp8, resp9, resp10;
int resp11, resp12, resp13, resp14, resp15, aleatorio, aleatorio1, pontuacao;
int saidateoria, triangulo, losango, quadrado, trapezio, circunferencia, pentagono;
pontos = 0;
num = 0;


printf("\n\t    Math Education For Kids\n"); //p�gina inicial
printf("    ==========================================\n");
printf("\n Ol�, seja bem vindo a nossa plataforma de ensino.");	
printf("\nIremos te ajudar a aprender mais sobre geometria \n       e ainda se apaixonar por ela :)");	
printf("\nMas antes de iniciarmos, nos diga seu nome:\n\n\t");
gets(nome);

while (1)
{


do
{
pontos = 0;
system("cls");
printf("\n\nBom %s, escolha uma das op��es abaixo para iniciar! \n*Digite o n�mero para selecionar a op��o*", nome);
printf("\n\n1) Teoria - vamos aprender sobre a mat�ria?\t2) Pr�tica - m�os na massa!\n");
num = getche();

switch (num) //Escolha da segunda p�gina // switch1
{
case '1': 
saidateoria = 0;
do
{
		  system("cls"); //teoria
	      printf("\n\t\tTeoria\n");
		  printf("========================================\n");
		  printf("\nBom, a geometria � dividida em tr�s grandes �reas: a anal�tica,\na plana e a espacial. Al�m disso, essas tr�s �reas s�o divididas\nem v�rias outras.");
		  printf("\nEntretanto, n�s iremos abordar somente a geometria plana. \nColocamos abaixo alguns assuntos que consideramos mais\nrelevantes para o seu aprendizado, pois tendo esses conceitos em mente,\nos restantes ser�o facilmente compreendidos");
		  printf("\n\nEscolha uma das op��es abaixo:");
		  printf("\n1) Circunferencias\n2) Quadrados\n3) Pentagonos\n4) Tri�gulos\n5) Paralelogramos//Losangos\n6) Trap�zios\n7) Pol�gonos\n\n8) Sair");
		  materia = getch();
		  switch (materia)
		  {
		  	case '1': system("cls");
			  		  printf("\n\tCircunferencias\n");
			  		  printf("========================================\n");
                      printf("\n� uma figura plana, constitu�da por um conjunto de pontos que est�o a uma mesma\n dist�ncia do centro. Possuindo os seguintes pontos:\n\n *Raio (r): � qualquer segmento de reta, partindo de um ponto no centro da\n circunfer�ncia at� a pr�pria circunfer�ncia. Tendo grande import�ncia da\n presen�a deste, que, por meio dele � poss�vel calcular tanto a �rea quanto o\n comprimento dela.\n\n *Centro: Sendo uma reta fundamental para a constru��o e elabora��o da\n circunfer�ncia, este, estar� a uma mesma dist�ncia da circunfer�ncia.\n\n *Corda: Possuindo duas extremidades da circunfer�ncia, pode ser qualquer tipo\n de segmento de reta.\n\n *Di�metro: � a maior corda presente na circunfer�ncia, a qual passa pelo centro\n da circunfer�ncia.");
		  			  printf("\n\nSua �rea pode ser calculada atrav�s da multiplica��o do quadrado do raio pelo valor de PI.");
					  printf("\n\nF�rmula: A = r�. PI	\n r = raio da circunferencia   PI = valor num�rico de PI");
					  printf("\n\n*Aperte qualquer tecla para sair*\n\n\n\n\n\n\n\n\n\n");
					  sair = getch();
					  break;
		  	case '2': system("cls");
			  		  printf("\n\tQuadrados\n");
		  			  printf("========================================\n");
		  			  printf("\n� uma figura que possui quatro lados e que possui:\n\n *Todos os lados t�m a mesma medida.\n *Todos os �ngulos s�o id�nticos: 90�.\n\n Eles tamb�m pertencem aos grupos dos Equil�teros e Paralelogramos.");
		  			  printf("\n\nSua �rea � equivalente a medida de seu lado ao quadrado");
					  printf("\n\nF�rmula: L�\n L = lado do quadrado");
					  printf("\n\n*Aperte qualquer tecla para sair*\n\n\n\n\n\n\n\n\n\n");
					  sair = getch();
					  break;
		  	case '3': system("cls");
			  		  printf("\n\tPentagonos\n");
		  	          printf("========================================\n");
		  	          printf("\nS�o figuras geom�tricas que possuem cinco lados e podem ser divididos em:\n\n *Pol�gonos Irregulares: onde ter� todos os lados e �ngulos diferentes.\n *Pol�gonos Regulares: ter� todos os lados e �ngulos de tamanho iguais, sendo\n assim, cada �ngulo ter� 180�.");
		  			  printf("\n\nSua �rea pode ser calculada multiplicando o semiper�metro (que a metade do per�metro) pela ap�tema \ne dividindo tudo por dois");
		  			  printf("\n\nF�rmula: A = p.a / 2\n p = semiper�metro   a = ap�tema");
		  			  printf("\n\n*A ap�tema pode ser calculada dividindo a metade do valor do lado do pentagono pela tangente de 36�.");
		  			  printf("\n\nF�rmula: a = l/tg36�\n l = metade do lado do pentagono");
					  printf("\n\n*Aperte qualquer tecla para sair*\n\n\n\n\n\n\n\n\n\n");
					  sair = getch();
					  break;
		  	case '4': system("cls");
			  		  printf("\n\t\tTri�ngulos\n");
		  			  printf("========================================\n");
		  			  printf("\nTri�ngulos s�o pol�gonos estruturados por tr�s lados. Pol�gonos, por sua vez, s�o figuras\n geom�tricas formadas por segmentos de reta que, dois a dois, tocam-se em seus pontos\n extremos, mas que n�o se cruzam em qualquer outro ponto. Entretanto, os tri�ngulos pegam\n dos pol�gonos algumas caracter�sticas e propriedades b�sicas.\n");
		  			  printf("\nPrincipais Caracter�sticas de todos os tri�ngulos:\n\n *Soma interna dos �ngulos: resultam sempre em 180�.\n *Soma externa dos �ngulos: resultam sempre em 360�.\n *V�rtices: ser�o constitu�dos por letras mai�sculas.\n *Lados: ser�o representados por letras min�sculas.\n *A medida de um �ngulo externo � igual a soma das somas de dois �ngulos\n internos n�o adjacentes a ele.\n *A soma das medidas de dois lados � sempre maior que a medida do terceiro lado.\n *O maior lado op�e-se ao seu maior �ngulo.\n *O menor lado op�e-se ao seu menor �ngulo.\n");
		  			  printf("\nPodemos classific�-los em duas formas diferentes: pelos lados ou pelos\n�ngulos internos:\n\n Tri�ngulo Escaleno: Possui todos os lados s�o diferentes.\n Tri�ngulo Ret�ngulo:  Possui um �ngulo igual a 90�.\n Tri�ngulo Is�sceles: Possui dois lados com medidas iguais.\n Tri�ngulo Equil�tero: Possui os tr�s lados com medidas iguais.");
					  printf("\n\nSua �rea pode ser calculada multiplicando sua base por sua altura e dividindo por dois");
					  printf("\n\nF�rmula: A = B.h / 2\n B = base do tri�ngulo    h = altura do tri�ngulo");
					  printf("\n\n*Aperte qualquer tecla para sair*\n\n\n\n\n\n\n\n\n\n");
					  sair = getch();
					  break;
		  	case '5': system("cls");
			   		  printf("\n\tParalelogramos//Losangos\n");
		  			  printf("========================================\n");
		  			  printf("\nS�o figuras que possuem os lados opostos e paralelos, suas caracteristicas s�o:\n\n *Lados opostos: Paralelos e Congruentes.\n *�ngulos opostos: Congruentes.\n *Diagonais: Sendo encontradas nos pontos m�dios.\n\n Lembrando que:\n\n *�ngulos Internos: s�o �ngulos no interior do pol�gono entre dois lados.\n *�ngulos Externos: s�o formados por um prolongamento de um lado e pelo\n lado adjacente a ele.\n *Diagonais: s�o segmentos de reta que ligam duas v�rtices do pol�gono,\n portanto, n�o s�o consideradas como lado.");
		  			  printf("\n\n Apesar de terem muitas propriedades iguais, suas �reas s�o calculadas de forma diferentes.");
					  printf("\n\nA �rea de um paralelogramo pode ser calculada multiplicando a sua base por sua altura");
		  			  printf("\n\nF�rmula: A = B.h\n B = base do paralelogramo    h = altura do paralelogramo");
		  			  printf("\n\n A �rea de um losango pode ser calculada multiplicando a medida da diagonal maior pela medida da diagonal menor e dividindo tudo por dois.");
		  			  printf("\n\nF�rmula: A = D.d / 2\n D = diagonal maior    d = diagonal menor");
					  printf("\n\n*Aperte qualquer tecla para sair*\n\n\n\n\n\n\n\n\n\n");
					  sair = getch();
					  break;
		  	case '6': system("cls");
			  		  printf("\n\tTrap�zios\n");
			  		  printf("========================================\n");
			  		  printf("\nFaz parte da geometria plana e tem quatro lados, onde, dois lados s�o\n paralelos e considerados como bases. Eles fazem parte do grupo dos quadril�teros.\n � valido dizer que:\n\n *� considerado um quadril�tero not�vel.\n *E a soma de seus �ngulos internos tem como resultado em 360�.\n\n Conforme sua forma, o Trap�zio pode ser classificado em tr�s formas:\n\n *Trap�zio Ret�ngulo: o qual t�m dois �ngulos de 90� (�ngulos retos).\n *Trap�zio Is�sceles/ Sim�trico: apresenta dois lados congruentes, ou seja,\n possuem medidas iguais e t�m dois lados diferentes.\n *Trap�zio Escaleno: todos os lados apresentam medidas diferentes.");
			  		  printf("\n\nSua �rea pode ser calculada multiplicando a soma da base maior e da base menor pela altura e dividindo tudo por dois");
			  		  printf("\n\nF�rmula: A = (B+b).h / 2\n B = base maior    b = base menor    h = altura");
			  		  printf("\n\n*Aperte qualquer tecla para sair*\n\n\n\n\n\n\n\n\n\n");
					  sair = getch();
		  			  break;
		  	case '7': system("cls");
			  		  printf("\n\tPol�gonos\n");
		  			  printf("========================================\n");
		  			  printf("\nPodem ser formados por segmentos de reta fechados, recebem seus\n respectivos nomes conforme a quantidade de lados de cada figura.\n\n *V�rtice: � o encontro de segmentos.\n *Arestas: � o pr�prio segmento de reta.\n");
		  	          printf("\n\n*Aperte qualquer tecla para sair*\n\n\n\n\n\n\n\n\n\n");
					  sair = getch();
					  break;
			case '8': saidateoria++;
		  			  break;
		  }
		  
}while (saidateoria != 1);
break;

case '2': 
pontos = 0;
perg1 = 0;
dowhile = 0;
triangulo =0;
quadrado = 0;
pentagono = 0;
trapezio = 0;
circunferencia = 0;
losango = 0;
while (pontos<40)
{
		  srand(time(NULL));    //Exerc�cios
		  aleatorio = rand() % 6;
		  
		  switch (aleatorio) //switch2
		  {
		  case (0)://exerc�cio 1.1
				  system("cls");
				  printf("\n\t\tExerc�cios\n");
				  printf("============================================\n");
				  printf("\n *Cada 'o' represente 1 unidade de medida*\n");
				  printf("\n Qual � o tipo do tri�ngulo abaixo?\n");
				  printf("\n      o\n     o o\n    o o o\n   o o o o\n  o o o o o\n o o o o o o \n");
				  printf("\n1) Is�celes\t2) Equil�tero\t3) Escaleno\n");
				  printf("\nResposta: ");
				  scanf("%i", &resp1);
				  fflush(stdin);
			
				  switch (resp1) //resposta da primeira pergunta //switch3
				  {
				  case  2: system("cls");
						   printf("==================================\n");
						   printf("\tcorreto!%c\n", rosto);
						   printf("==================================\n");
						   Sleep(1500);
						   pontos += 10;
						   break;
				  default: 
					  system("cls");
					  printf("==================================\n");
					  printf("\tresposta incorreta\n");
					  printf("==================================\n");
					  triangulo++;
					  Sleep(1500);
					  break;
				  }//switch3
		          break;
		    case (1)://exerc�cio 1.2
		    	  system("cls");
				  printf("\n\t\tExerc�cios\n");
				  printf("============================================\n");
				  printf("\nQuantos lados de mesmo tamanho o tri�ngulo is�ciles tem?\n");
				  printf("\n1) 2 lados \t2) 3 lados \t3) Nenhum\n");
				  printf("\nResposta: ");
				  scanf("%i", &resp2);
				  fflush(stdin);
			
				  switch (resp2) //resposta da primeira pergunta //switch3
				  {
				  case  1: system("cls");
						   printf("==================================\n");
						   printf("\tcorreto!%c\n", rosto);
						   printf("==================================\n");
						   pontos += 10;
						   Sleep(1500);
						   break;
				  default: 
					  system("cls");
					  printf("==================================\n");
					  printf("\tresposta incorreta\n");
					  printf("==================================\n");
					  triangulo++;
					  Sleep(1500);
					  break;
				  }//switch3
		    	break;
		    case (2)://exerc�cio 1.3
		    	system("cls");
				  printf("\n\t\tExerc�cios\n");
				  printf("============================================\n");
				  printf("\n      o o o o\n     o o o o o\n    o o o o o o\n   o o o o o o o\n\n");
				  printf("\nQuantos �ngulos internos um trap�zio tem?\n");
				  printf("\n1) 3 �ngulos \t2) 7 �ngulos \t3) 4 �ngulos\n");
				  printf("\nResposta: ");
				  scanf("%i", &resp3);
				  fflush(stdin);
			
				  switch (resp3) //resposta da primeira pergunta //switch3
				  {
				  case  3: system("cls");
						   printf("==================================\n");
						   printf("\tcorreto!%c\n", rosto);
						   printf("==================================\n");
						   pontos += 10;
						   Sleep(1500);
						   break;
				  default: 
					  system("cls");
					  printf("==================================\n");
					  printf("\tresposta incorreta\n");
					  printf("==================================\n");
					  trapezio++;
					  Sleep(1500);
					  break;
				  }//switch3
		    	break;
		    	case (3)://exerc�cio 1.4
		    	system("cls");
				  printf("\n\t\tExerc�cios\n");
				  printf("============================================\n");
				  printf("\nQual forma tem 5 �ngulos internos?\n");
				  printf("\n1) Pent�gono \t2) Trap�zio \t3) Hexagono\n");
				  printf("\nResposta: ");
				  scanf("%i", &resp4);
				  fflush(stdin);
			
				  switch (resp4) //resposta da primeira pergunta //switch3
				  {
				  case  1: system("cls");
						   printf("==================================\n");
						   printf("\tcorreto!%c\n", rosto);
						   printf("==================================\n");
						   pontos += 10;
						   Sleep(1500);
						   break;
				  default: 
					  system("cls");
					  printf("==================================\n");
					  printf("\tresposta incorreta\n");
					  printf("==================================\n");
					  pentagono++;
					  Sleep(1500);
					  break;
				  }//switch3
		    	break;
		    	case (4)://exerc�cio 1.5
		    	system("cls");
				  printf("\n\t\tExerc�cios\n");
				  printf("============================================\n");
				  printf("\n  o o o o o o\n  o o o o o o\n  o o o o o o\n  o o o o o o\n  o o o o o o\n  o o o o o o\n\n");
				  printf("\nQuantos �ngulos retos um quadrado tem?\n");
				  printf("\n1) 2 �ngulos \t2) 3 �ngulos \t3) 4 �ngulos\n");
				  printf("\nResposta: ");
				  scanf("%i", &resp5);
				  fflush(stdin);
			
				  switch (resp5) //resposta da primeira pergunta //switch3
				  {
				  case  3: system("cls");
						   printf("==================================\n");
						   printf("\tcorreto!%c\n", rosto);
						   printf("==================================\n");
						   pontos += 10;
						   Sleep(1500);
						   break;
				  default: 
					  system("cls");
					  printf("==================================\n");
					  printf("\tresposta incorreta\n");
					  printf("==================================\n");
					  quadrado++;
					  Sleep(1500);
					  break;
				  }//switch3
		    	break;
		    }//switch2
		    
			srand(time(NULL));    //Exerc�cios
		  aleatorio1 = rand() % 6;
		  
		  switch (aleatorio1) //switch2
		  {
		  case (0)://exerc�cio 1.1
				  system("cls");
				  printf("\n\t\tExerc�cios\n");
				  printf("============================================\n");
				  printf("\n Qual forma tem 3 lados?\n");
				  printf("\n1) Ret�ngulo\t2) Tri�ngulo\t3) Hex�gono\n");
				  printf("\nResposta: ");
				  scanf("%i", &resp6);
				  fflush(stdin);
			
				  switch (resp6) //resposta da primeira pergunta //switch3
				  {
				  case  2: system("cls");
						   printf("==================================\n");
						   printf("\tcorreto!%c\n", rosto);
						   printf("==================================\n");
						   Sleep(1500);
						   pontos += 10;
						   break;
				  default: 
					  system("cls");
					  printf("==================================\n");
					  printf("\tresposta incorreta\n");
					  printf("==================================\n");
					  triangulo++;
					  Sleep(1500);
					  break;
				  }//switch3
		          break;
		    case (1)://exerc�cio 1.2
		    	  system("cls");
				  printf("\n\t\tExerc�cios\n");
				  printf("============================================\n");
				  printf("\n       o o o\n     o o o o o\n    o o o o o o\n    o o o o o o\n     o o o o o\n       o o o\n\n");
				  printf("\nQuantas vezes o di�metro de uma circunfer�ncia e maior que o raio?\n");
				  printf("\n1) 4 vezes \t2) 3 vezes \t3) 2 vezes\n");
				  printf("\nResposta: ");
				  scanf("%i", &resp7);
				  fflush(stdin);
			
				  switch (resp7) //resposta da primeira pergunta //switch3
				  {
				  case  3: system("cls");
						   printf("==================================\n");
						   printf("\tcorreto!%c\n", rosto);
						   printf("==================================\n");
						   pontos += 10;
						   Sleep(1500);
						   break;
				  default: 
					  system("cls");
					  printf("==================================\n");
					  printf("\tresposta incorreta\n");
					  printf("==================================\n");
					  circunferencia++;
					  Sleep(1500);
					  break;
				  }//switch3
		    	break;
		    case (2)://exerc�cio 1.3
		    	system("cls");
				  printf("\n\t\tExerc�cios\n");
				  printf("============================================\n");
				  printf("\n  o o o \n  o o o \n  o o o \n");
				  printf("\nQual a �rea de um quadrado com 3cm de lado?\n");
				  printf("\n1) 6cm� \t2) 9cm� \t3) 3cm�\n");
				  printf("\nResposta: ");
				  scanf("%i", &resp8);
				  fflush(stdin);
			
				  switch (resp8) //resposta da primeira pergunta //switch3
				  {
				  case  2: system("cls");
						   printf("==================================\n");
						   printf("\tcorreto!%c\n", rosto);
						   printf("==================================\n");
						   pontos += 10;
						   Sleep(1500);
						   break;
				  default: 
					  system("cls");
					  printf("==================================\n");
					  printf("\tresposta incorreta\n");
					  printf("==================================\n");
					  quadrado++;
					  Sleep(1500);
					  break;
				  }//switch3
		    	break;
		    	case (3)://exerc�cio 1.4
		    	system("cls");
				  printf("\n\t\tExerc�cios\n");
				  printf("============================================\n");
				  printf("\nA soma dos �ngulos internos de um tri�ngulo �?\n");
				  printf("\n1) 90 graus \t2) 160 graus \t3) 180 graus\n");
				  printf("\nResposta: ");
				  scanf("%i", &resp9);
				  fflush(stdin);
			
				  switch (resp9) //resposta da primeira pergunta //switch3
				  {
				  case  3: system("cls");
						   printf("==================================\n");
						   printf("\tcorreto!%c\n", rosto);
						   printf("==================================\n");
						   pontos += 10;
						   Sleep(1500);
						   break;
				  default: 
					  system("cls");
					  printf("==================================\n");
					  printf("\tresposta incorreta\n");
					  printf("==================================\n");
					  triangulo++;
					  Sleep(1500);
					  break;
				  }//switch3
		    	break;
		    	case (4)://exerc�cio 1.5
		    	system("cls");
				  printf("\n\t\tExerc�cios\n");
				  printf("============================================\n");
				  printf("\nCalcule a �rea de um trap�zio que tem 20cm de altura e bases de 40 e 30 cent�metros\n");
				  printf("\n1) 45cm� \t2) 700cm� \t3) 500cm�\n");
				  printf("\nResposta: ");
				  scanf("%i", &resp10);
				  fflush(stdin);
			
				  switch (resp10) //resposta da primeira pergunta //switch3
				  {
				  case  2: system("cls");
						   printf("==================================\n");
						   printf("\tcorreto!%c\n", rosto);
						   printf("==================================\n");
						   pontos += 10;
						   Sleep(1500);
						   break;
				  default: 
					  system("cls");
					  printf("==================================\n");
					  printf("\tresposta incorreta\n");
					  printf("==================================\n");
					  trapezio++;
					  Sleep(1500);
					  break;
				  }//switch3
		    	break;
		    }//switch2
		  
		  srand(time(NULL));    //Exerc�cios
		  aleatorio1 = rand() % 6;
		  
		  switch (aleatorio1) //switch2
		  {
		  case (0)://exerc�cio 1.1
				  system("cls");
				  printf("\n\t\tExerc�cios\n");
				  printf("============================================\n");
				  printf("\n Qual a �rea de um tri�ngulo reto com 8cm de altura e 12cm de base?\n");
				  printf("\n1) 48cm�\t2) 10cm�\t3) 96cm�\n");
				  printf("\nResposta: ");
				  scanf("%i", &resp11);
				  fflush(stdin);
			
				  switch (resp11) //resposta da primeira pergunta //switch3
				  {
				  case  1: system("cls");
						   printf("==================================\n");
						   printf("\tcorreto!%c\n", rosto);
						   printf("==================================\n");
						   Sleep(1500);
						   pontos += 10;
						   break;
				  default: 
					  system("cls");
					  printf("==================================\n");
					  printf("\tresposta incorreta\n");
					  printf("==================================\n");
					  triangulo++;
					  Sleep(1500);
					  break;
				  }//switch3
		          break;
		    case (1)://exerc�cio 1.2
		    	  system("cls");
				  printf("\n\t\tExerc�cios\n");
				  printf("============================================\n");
				  printf("\nCalcule a �rea de um losango que tem diagonal maior igual a 12cm e diagonal menor igual a 9cm\n");
				  printf("\n1) 42cm�\t2) 10,5cm�\t3) 54cm�\n");
				  printf("\nResposta: ");
				  scanf("%i", &resp12);
				  fflush(stdin);
			
				  switch (resp12) //resposta da primeira pergunta //switch3
				  {
				  case  3: system("cls");
						   printf("==================================\n");
						   printf("\tcorreto!%c\n", rosto);
						   printf("==================================\n");
						   pontos += 10;
						   Sleep(1500);
						   break;
				  default: 
					  system("cls");
					  printf("==================================\n");
					  printf("\tresposta incorreta\n");
					  printf("==================================\n");
					  losango++;
					  Sleep(1500);
					  break;
				  }//switch3
		    	break;
		    case (2)://exerc�cio 1.3
		    	system("cls");
				  printf("\n\t\tExerc�cios\n");
				  printf("============================================\n");
				  printf("\nQuanto mede a diagonal de um quadrado de lado 6cm?\n");
				  printf("*considere raiz de 2 igual a 1,4*\n");
				  printf("\n1) 8,4cm\t2) 7,4cm\t3) 4,28cm\n");
				  printf("\nResposta: ");
				  scanf("%i", &resp13);
				  fflush(stdin);
			
				  switch (resp13) //resposta da primeira pergunta //switch3
				  {
				  case  1: system("cls");
				  	       printf("==================================\n");
						   printf("\tcorreto!%c\n", rosto);
						   printf("==================================\n");
						   pontos += 10;
						   Sleep(1500);
						   break;
				  default: 
					  system("cls");
					  printf("==================================\n");
					  printf("\tresposta incorreta\n");
					  printf("==================================\n");
					  quadrado++;
					  Sleep(1500);
					  break;
				  }//switch3
		    	break;
		    	case (3)://exerc�cio 1.4
		    	system("cls");
				  printf("\n\t\tExerc�cios\n");
				  printf("============================================\n");
				  printf("\nUm tri�ngulo reto tem hipotenusa igual a 20cm e base igual 12cm. Calcule sua �rea.\n");
				  printf("\n1) 192cm�\t2) 96cm�\t3) 48cm�\n");
				  printf("\nResposta: ");
				  scanf("%i", &resp14);
				  fflush(stdin);
			
				  switch (resp14) //resposta da primeira pergunta //switch3
				  {
				  case  2: system("cls");
				    	   printf("==================================\n");
						   printf("\tcorreto!%c\n", rosto);
						   printf("==================================\n");
						   pontos += 10;
						   Sleep(1500);
						   break;
				  default: 
					  system("cls");
					  printf("==================================\n");
					  printf("\tresposta incorreta\n");
					  printf("==================================\n");
					  triangulo++;
					  Sleep(1500);
					  break;
				  }//switch3
		    	break;
		    	case (4)://exerc�cio 1.5
		    	system("cls");
				  printf("\n\t\tExerc�cios\n");
				  printf("============================================\n");
				  printf("\nUm losango tem lados iguais a 5cm e diagonal menor igual a 3cm. Calcule sua �rea.\n");
				  printf("\n1) 6cm� \t2) 12cm� \t3) 15cm�\n");
				  printf("\nResposta: ");
				  scanf("%i", &resp15);
				  fflush(stdin);
			
				  switch (resp15) //resposta da primeira pergunta //switch3
				  {
				  case  1: system("cls");
				  		   printf("==================================\n");
						   printf("\tcorreto!%c\n", rosto);
						   printf("==================================\n");
						   pontos += 10;
						   Sleep(1500);
						   break;
				  default: 
					  system("cls");
					  printf("==================================\n");
					  printf("\tresposta incorreta\n");
					  printf("==================================\n");
					  losango++;
					  Sleep(1500);
					  break;
				  }//switch3
		    	break;
		    }//switch2
		    pontuacao++;
	  }//while exerc�cios
	
}//switch1
if (pontuacao >= 1)
{
	system("cls");
	printf("\nVoc� marcou %i pontos", pontos);
	printf("\nDeseja continuar?\n");
	printf("\n1) Sim\t2) N�o\n");
	scanf("%c", &perg1);
	fflush(stdin);
}
	if (perg1 == '2')
	{
		system("cls");
		printf("\nSegundo as quest�es que voc� errou,\nanalizamos que voc� deve dar uma olhada \nnos seguintes t�picos da teoria:\n");
		if (triangulo >= 1)
	 		printf("\nTri�ngulos\n");
		if (quadrado >= 1)
			printf("\nQuadrados\n");
		if (losango >= 1)
			printf("\nLosangulos\n");
		if (pentagono >= 1)
			printf("\nPentagonos\n");
		if (circunferencia >= 1)
			printf("\nCircunferencias\n");
		if (trapezio >= 1)
			printf("\nTrap�zios\n");
		printf("\n*Aperte 1 para sair*");
		dowhile = getch();
		num = 0;
}
}while (dowhile != '1');//do while
}//while infinito
getch();
return 0;
}//main
