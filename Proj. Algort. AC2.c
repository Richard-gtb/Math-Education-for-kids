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


printf("\n\t    Math Education For Kids\n"); //página inicial
printf("    ==========================================\n");
printf("\n Olá, seja bem vindo a nossa plataforma de ensino.");	
printf("\nIremos te ajudar a aprender mais sobre geometria \n       e ainda se apaixonar por ela :)");	
printf("\nMas antes de iniciarmos, nos diga seu nome:\n\n\t");
gets(nome);

while (1)
{


do
{
pontos = 0;
system("cls");
printf("\n\nBom %s, escolha uma das opções abaixo para iniciar! \n*Digite o número para selecionar a opção*", nome);
printf("\n\n1) Teoria - vamos aprender sobre a matéria?\t2) Prática - mãos na massa!\n");
num = getche();

switch (num) //Escolha da segunda página // switch1
{
case '1': 
saidateoria = 0;
do
{
		  system("cls"); //teoria
	      printf("\n\t\tTeoria\n");
		  printf("========================================\n");
		  printf("\nBom, a geometria é dividida em três grandes áreas: a analítica,\na plana e a espacial. Além disso, essas três áreas são divididas\nem várias outras.");
		  printf("\nEntretanto, nós iremos abordar somente a geometria plana. \nColocamos abaixo alguns assuntos que consideramos mais\nrelevantes para o seu aprendizado, pois tendo esses conceitos em mente,\nos restantes serão facilmente compreendidos");
		  printf("\n\nEscolha uma das opções abaixo:");
		  printf("\n1) Circunferencias\n2) Quadrados\n3) Pentagonos\n4) Triâgulos\n5) Paralelogramos//Losangos\n6) Trapézios\n7) Polígonos\n\n8) Sair");
		  materia = getch();
		  switch (materia)
		  {
		  	case '1': system("cls");
			  		  printf("\n\tCircunferencias\n");
			  		  printf("========================================\n");
                      printf("\nÉ uma figura plana, constituída por um conjunto de pontos que estão a uma mesma\n distância do centro. Possuindo os seguintes pontos:\n\n *Raio (r): É qualquer segmento de reta, partindo de um ponto no centro da\n circunferência até a própria circunferência. Tendo grande importância da\n presença deste, que, por meio dele é possível calcular tanto a área quanto o\n comprimento dela.\n\n *Centro: Sendo uma reta fundamental para a construção e elaboração da\n circunferência, este, estará a uma mesma distância da circunferência.\n\n *Corda: Possuindo duas extremidades da circunferência, pode ser qualquer tipo\n de segmento de reta.\n\n *Diâmetro: É a maior corda presente na circunferência, a qual passa pelo centro\n da circunferência.");
		  			  printf("\n\nSua área pode ser calculada através da multiplicação do quadrado do raio pelo valor de PI.");
					  printf("\n\nFórmula: A = r². PI	\n r = raio da circunferencia   PI = valor numérico de PI");
					  printf("\n\n*Aperte qualquer tecla para sair*\n\n\n\n\n\n\n\n\n\n");
					  sair = getch();
					  break;
		  	case '2': system("cls");
			  		  printf("\n\tQuadrados\n");
		  			  printf("========================================\n");
		  			  printf("\nÉ uma figura que possui quatro lados e que possui:\n\n *Todos os lados têm a mesma medida.\n *Todos os ângulos são idênticos: 90°.\n\n Eles também pertencem aos grupos dos Equiláteros e Paralelogramos.");
		  			  printf("\n\nSua área é equivalente a medida de seu lado ao quadrado");
					  printf("\n\nFórmula: L²\n L = lado do quadrado");
					  printf("\n\n*Aperte qualquer tecla para sair*\n\n\n\n\n\n\n\n\n\n");
					  sair = getch();
					  break;
		  	case '3': system("cls");
			  		  printf("\n\tPentagonos\n");
		  	          printf("========================================\n");
		  	          printf("\nSão figuras geométricas que possuem cinco lados e podem ser divididos em:\n\n *Polígonos Irregulares: onde terá todos os lados e ângulos diferentes.\n *Polígonos Regulares: terá todos os lados e ângulos de tamanho iguais, sendo\n assim, cada ângulo terá 180°.");
		  			  printf("\n\nSua área pode ser calculada multiplicando o semiperímetro (que a metade do perímetro) pela apótema \ne dividindo tudo por dois");
		  			  printf("\n\nFórmula: A = p.a / 2\n p = semiperímetro   a = apótema");
		  			  printf("\n\n*A apótema pode ser calculada dividindo a metade do valor do lado do pentagono pela tangente de 36°.");
		  			  printf("\n\nFórmula: a = l/tg36°\n l = metade do lado do pentagono");
					  printf("\n\n*Aperte qualquer tecla para sair*\n\n\n\n\n\n\n\n\n\n");
					  sair = getch();
					  break;
		  	case '4': system("cls");
			  		  printf("\n\t\tTriângulos\n");
		  			  printf("========================================\n");
		  			  printf("\nTriângulos são polígonos estruturados por três lados. Polígonos, por sua vez, são figuras\n geométricas formadas por segmentos de reta que, dois a dois, tocam-se em seus pontos\n extremos, mas que não se cruzam em qualquer outro ponto. Entretanto, os triângulos pegam\n dos polígonos algumas características e propriedades básicas.\n");
		  			  printf("\nPrincipais Características de todos os triângulos:\n\n *Soma interna dos Ângulos: resultam sempre em 180°.\n *Soma externa dos Ângulos: resultam sempre em 360°.\n *Vértices: serão constituídos por letras maiúsculas.\n *Lados: serão representados por letras minúsculas.\n *A medida de um ângulo externo é igual a soma das somas de dois ângulos\n internos não adjacentes a ele.\n *A soma das medidas de dois lados é sempre maior que a medida do terceiro lado.\n *O maior lado opõe-se ao seu maior ângulo.\n *O menor lado opõe-se ao seu menor ângulo.\n");
		  			  printf("\nPodemos classificá-los em duas formas diferentes: pelos lados ou pelos\nângulos internos:\n\n Triângulo Escaleno: Possui todos os lados são diferentes.\n Triângulo Retângulo:  Possui um ângulo igual a 90°.\n Triângulo Isósceles: Possui dois lados com medidas iguais.\n Triângulo Equilátero: Possui os três lados com medidas iguais.");
					  printf("\n\nSua área pode ser calculada multiplicando sua base por sua altura e dividindo por dois");
					  printf("\n\nFórmula: A = B.h / 2\n B = base do triângulo    h = altura do triângulo");
					  printf("\n\n*Aperte qualquer tecla para sair*\n\n\n\n\n\n\n\n\n\n");
					  sair = getch();
					  break;
		  	case '5': system("cls");
			   		  printf("\n\tParalelogramos//Losangos\n");
		  			  printf("========================================\n");
		  			  printf("\nSão figuras que possuem os lados opostos e paralelos, suas caracteristicas são:\n\n *Lados opostos: Paralelos e Congruentes.\n *Ângulos opostos: Congruentes.\n *Diagonais: Sendo encontradas nos pontos médios.\n\n Lembrando que:\n\n *Ângulos Internos: são ângulos no interior do polígono entre dois lados.\n *Ângulos Externos: são formados por um prolongamento de um lado e pelo\n lado adjacente a ele.\n *Diagonais: são segmentos de reta que ligam duas vértices do polígono,\n portanto, não são consideradas como lado.");
		  			  printf("\n\n Apesar de terem muitas propriedades iguais, suas áreas são calculadas de forma diferentes.");
					  printf("\n\nA área de um paralelogramo pode ser calculada multiplicando a sua base por sua altura");
		  			  printf("\n\nFórmula: A = B.h\n B = base do paralelogramo    h = altura do paralelogramo");
		  			  printf("\n\n A área de um losango pode ser calculada multiplicando a medida da diagonal maior pela medida da diagonal menor e dividindo tudo por dois.");
		  			  printf("\n\nFórmula: A = D.d / 2\n D = diagonal maior    d = diagonal menor");
					  printf("\n\n*Aperte qualquer tecla para sair*\n\n\n\n\n\n\n\n\n\n");
					  sair = getch();
					  break;
		  	case '6': system("cls");
			  		  printf("\n\tTrapézios\n");
			  		  printf("========================================\n");
			  		  printf("\nFaz parte da geometria plana e tem quatro lados, onde, dois lados são\n paralelos e considerados como bases. Eles fazem parte do grupo dos quadriláteros.\n É valido dizer que:\n\n *É considerado um quadrilátero notável.\n *E a soma de seus ângulos internos tem como resultado em 360°.\n\n Conforme sua forma, o Trapézio pode ser classificado em três formas:\n\n *Trapézio Retângulo: o qual têm dois ângulos de 90° (ângulos retos).\n *Trapézio Isósceles/ Simétrico: apresenta dois lados congruentes, ou seja,\n possuem medidas iguais e têm dois lados diferentes.\n *Trapézio Escaleno: todos os lados apresentam medidas diferentes.");
			  		  printf("\n\nSua área pode ser calculada multiplicando a soma da base maior e da base menor pela altura e dividindo tudo por dois");
			  		  printf("\n\nFórmula: A = (B+b).h / 2\n B = base maior    b = base menor    h = altura");
			  		  printf("\n\n*Aperte qualquer tecla para sair*\n\n\n\n\n\n\n\n\n\n");
					  sair = getch();
		  			  break;
		  	case '7': system("cls");
			  		  printf("\n\tPolígonos\n");
		  			  printf("========================================\n");
		  			  printf("\nPodem ser formados por segmentos de reta fechados, recebem seus\n respectivos nomes conforme a quantidade de lados de cada figura.\n\n *Vértice: é o encontro de segmentos.\n *Arestas: é o próprio segmento de reta.\n");
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
		  srand(time(NULL));    //Exercícios
		  aleatorio = rand() % 6;
		  
		  switch (aleatorio) //switch2
		  {
		  case (0)://exercício 1.1
				  system("cls");
				  printf("\n\t\tExercícios\n");
				  printf("============================================\n");
				  printf("\n *Cada 'o' represente 1 unidade de medida*\n");
				  printf("\n Qual é o tipo do triângulo abaixo?\n");
				  printf("\n      o\n     o o\n    o o o\n   o o o o\n  o o o o o\n o o o o o o \n");
				  printf("\n1) Isóceles\t2) Equilátero\t3) Escaleno\n");
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
		    case (1)://exercício 1.2
		    	  system("cls");
				  printf("\n\t\tExercícios\n");
				  printf("============================================\n");
				  printf("\nQuantos lados de mesmo tamanho o triângulo isóciles tem?\n");
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
		    case (2)://exercício 1.3
		    	system("cls");
				  printf("\n\t\tExercícios\n");
				  printf("============================================\n");
				  printf("\n      o o o o\n     o o o o o\n    o o o o o o\n   o o o o o o o\n\n");
				  printf("\nQuantos ângulos internos um trapézio tem?\n");
				  printf("\n1) 3 ângulos \t2) 7 ângulos \t3) 4 ângulos\n");
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
		    	case (3)://exercício 1.4
		    	system("cls");
				  printf("\n\t\tExercícios\n");
				  printf("============================================\n");
				  printf("\nQual forma tem 5 ângulos internos?\n");
				  printf("\n1) Pentágono \t2) Trapézio \t3) Hexagono\n");
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
		    	case (4)://exercício 1.5
		    	system("cls");
				  printf("\n\t\tExercícios\n");
				  printf("============================================\n");
				  printf("\n  o o o o o o\n  o o o o o o\n  o o o o o o\n  o o o o o o\n  o o o o o o\n  o o o o o o\n\n");
				  printf("\nQuantos ângulos retos um quadrado tem?\n");
				  printf("\n1) 2 ângulos \t2) 3 ângulos \t3) 4 ângulos\n");
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
		    
			srand(time(NULL));    //Exercícios
		  aleatorio1 = rand() % 6;
		  
		  switch (aleatorio1) //switch2
		  {
		  case (0)://exercício 1.1
				  system("cls");
				  printf("\n\t\tExercícios\n");
				  printf("============================================\n");
				  printf("\n Qual forma tem 3 lados?\n");
				  printf("\n1) Retângulo\t2) Triângulo\t3) Hexágono\n");
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
		    case (1)://exercício 1.2
		    	  system("cls");
				  printf("\n\t\tExercícios\n");
				  printf("============================================\n");
				  printf("\n       o o o\n     o o o o o\n    o o o o o o\n    o o o o o o\n     o o o o o\n       o o o\n\n");
				  printf("\nQuantas vezes o diâmetro de uma circunferência e maior que o raio?\n");
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
		    case (2)://exercício 1.3
		    	system("cls");
				  printf("\n\t\tExercícios\n");
				  printf("============================================\n");
				  printf("\n  o o o \n  o o o \n  o o o \n");
				  printf("\nQual a área de um quadrado com 3cm de lado?\n");
				  printf("\n1) 6cm² \t2) 9cm² \t3) 3cm²\n");
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
		    	case (3)://exercício 1.4
		    	system("cls");
				  printf("\n\t\tExercícios\n");
				  printf("============================================\n");
				  printf("\nA soma dos ângulos internos de um triângulo é?\n");
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
		    	case (4)://exercício 1.5
		    	system("cls");
				  printf("\n\t\tExercícios\n");
				  printf("============================================\n");
				  printf("\nCalcule a área de um trapézio que tem 20cm de altura e bases de 40 e 30 centímetros\n");
				  printf("\n1) 45cm² \t2) 700cm² \t3) 500cm²\n");
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
		  
		  srand(time(NULL));    //Exercícios
		  aleatorio1 = rand() % 6;
		  
		  switch (aleatorio1) //switch2
		  {
		  case (0)://exercício 1.1
				  system("cls");
				  printf("\n\t\tExercícios\n");
				  printf("============================================\n");
				  printf("\n Qual a área de um triângulo reto com 8cm de altura e 12cm de base?\n");
				  printf("\n1) 48cm²\t2) 10cm²\t3) 96cm²\n");
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
		    case (1)://exercício 1.2
		    	  system("cls");
				  printf("\n\t\tExercícios\n");
				  printf("============================================\n");
				  printf("\nCalcule a área de um losango que tem diagonal maior igual a 12cm e diagonal menor igual a 9cm\n");
				  printf("\n1) 42cm²\t2) 10,5cm²\t3) 54cm²\n");
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
		    case (2)://exercício 1.3
		    	system("cls");
				  printf("\n\t\tExercícios\n");
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
		    	case (3)://exercício 1.4
		    	system("cls");
				  printf("\n\t\tExercícios\n");
				  printf("============================================\n");
				  printf("\nUm triângulo reto tem hipotenusa igual a 20cm e base igual 12cm. Calcule sua área.\n");
				  printf("\n1) 192cm²\t2) 96cm²\t3) 48cm²\n");
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
		    	case (4)://exercício 1.5
		    	system("cls");
				  printf("\n\t\tExercícios\n");
				  printf("============================================\n");
				  printf("\nUm losango tem lados iguais a 5cm e diagonal menor igual a 3cm. Calcule sua área.\n");
				  printf("\n1) 6cm² \t2) 12cm² \t3) 15cm²\n");
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
	  }//while exercícios
	
}//switch1
if (pontuacao >= 1)
{
	system("cls");
	printf("\nVocê marcou %i pontos", pontos);
	printf("\nDeseja continuar?\n");
	printf("\n1) Sim\t2) Não\n");
	scanf("%c", &perg1);
	fflush(stdin);
}
	if (perg1 == '2')
	{
		system("cls");
		printf("\nSegundo as questões que você errou,\nanalizamos que você deve dar uma olhada \nnos seguintes tópicos da teoria:\n");
		if (triangulo >= 1)
	 		printf("\nTriângulos\n");
		if (quadrado >= 1)
			printf("\nQuadrados\n");
		if (losango >= 1)
			printf("\nLosangulos\n");
		if (pentagono >= 1)
			printf("\nPentagonos\n");
		if (circunferencia >= 1)
			printf("\nCircunferencias\n");
		if (trapezio >= 1)
			printf("\nTrapézios\n");
		printf("\n*Aperte 1 para sair*");
		dowhile = getch();
		num = 0;
}
}while (dowhile != '1');//do while
}//while infinito
getch();
return 0;
}//main
