#include <stdio.h>
#include <stdlib.h>
void menu() {
  puts("\n\nSistema de Votos\n");
  puts("Selecione uma opção: \n");
  puts("\t1 - VOTAR\n\t2 - DEFINIR QUANTIDADE DE ELEITORES\n\t0 - PARA SAIR\n");
}
void candidatos() {
  puts("\nCANDIDATOS: \n\n");
  puts("\tCANDIDATO1 - 1\n\tCANDIDATO2 - 2\n\tCANDIDATO3- 3\n\tCANDIDATO4 - "
       "4\n\tANULAR VOTO - 5\n\tVOTO EM BRANCO - 6\n\tPARA MOSTRAR OS RESULTADOS - 0\n");
}
int limitevotos() {
  int voto2;
  int eleitores = 0;
  int totalVotos = 0, totalGeral = 0;
  float c1 = 0, c2 = 0, c3 = 0, c4 = 0, nulo = 0, branco = 0;
  int c1_2 = 0, c2_2 = 0, c3_2 = 0, c4_2 = 0, nulo_2 = 0, branco_2 = 0;
  puts("Defina a quantidade de eleitores: \n");
  scanf("%d", &eleitores);
  eleitores = eleitores - 1;
  while(totalVotos <= eleitores){
    ++totalVotos;
    candidatos();
    scanf("%d", &voto2);
    switch (voto2) {
    case 1:
      c1 += 1;
      c1_2 +=1;
      puts("Voto Registrado!");
      break;
    case 2:
      c2 += 1;
      c2_2 +=1;
      puts("Voto Registrado!");
      break;
    case 3:
      c3 += 1;
      c3_2 +=1;
      puts("Voto Registrado!");
      break;
    case 4:
      c4 += 1;
      c4_2 += 1;
      puts("Voto Registrado!");
      break;
    case 5:
      nulo += 1;
      nulo_2 += 1;
      puts("Voto Registrado!");
      break;
    case 6:
      branco += 1;
      branco_2 += 1;
      puts("Voto Registrado!");
      break;
    case 0:

      break;
    default:
      puts("Opção Inválida!\n");
      break;
    }
  }
  totalGeral = c1+c2+c3+c4+nulo+branco;
  printf("\nTotal \t%d\n", totalGeral);
  printf("\n c1: %.2f%% \t\t= %d", c1 / totalGeral * 100, c1_2);
  printf("\n c2: %.2f%% \t\t= %d", c2 / totalGeral * 100, c2_2);
  printf("\n c3: %.2f%% \t\t= %d", c3 / totalGeral * 100, c3_2);
  printf("\n c4: %.2f%% \t\t= %d", c4 / totalGeral * 100, c4_2);
  printf("\n nulo: %.2f%% \t\t= %d", nulo / totalGeral * 100, nulo_2);
  printf("\n branco: %.2f%% \t= %d", branco / totalGeral * 100, branco_2);
  menu();
}


int votacao() {
  int voto;
  int total = 0;
  float c1 = 0, c2 = 0, c3 = 0, c4 = 0, nulo = 0, branco = 0;
  int c1_2 = 0, c2_2 = 0, c3_2 = 0, c4_2 = 0, nulo_2 = 0, branco_2 = 0;
  
  while (voto != 0) {
    candidatos();
    scanf("%d", &voto);
    switch (voto) {
    case 1:
      c1 += 1;
      c1_2 +=1;
      puts("Voto Registrado!");
      break;
    case 2:
      c2 += 1;
      c2_2 +=1;
      puts("Voto Registrado!");
      break;
    case 3:
      c3 += 1;
      c3_2 +=1;
      puts("Voto Registrado!");
      break;
    case 4:
      c4 += 1;
      c4_2 += 1;
      puts("Voto Registrado!");
      break;
    case 5:
      nulo += 1;
      nulo_2 += 1;
      puts("Voto Registrado!");
      break;
    case 6:
      branco += 1;
      branco_2 += 1;
      puts("Voto Registrado!");
      break;
    case 0:

      break;
    default:
      puts("Opção Inválida!\n");
      break;
    }
  }
  total = c1 + c2 + c3 + c4 + nulo + branco;
  printf("\nTotal \t%d\n", total);
  printf("\n c1: %.2f%% \t\t= %d", c1 / total * 100, c1_2);
  printf("\n c2: %.2f%% \t\t= %d", c2 / total * 100, c2_2);
  printf("\n c3: %.2f%% \t\t= %d", c3 / total * 100, c3_2);
  printf("\n c4: %.2f%% \t\t= %d", c4 / total * 100, c4_2);
  printf("\n nulo: %.2f%% \t\t= %d", nulo / total * 100, nulo_2);
  printf("\n branco: %.2f%% \t= %d", branco / total * 100, branco_2);
  menu();
}

int main() {
  int op;
  op = 1;
  menu();
  while (op != 0) {
    scanf("%d", &op);
    if (op == 1) {
      votacao();
    } 
    else if (op == 2) {
      limitevotos();
    } 
    else if(op == 0){
      puts("Ok, Adeus!");
    }
    else {
      printf("Opção Inválida!\n");
    }
  }

  return 0;
}
