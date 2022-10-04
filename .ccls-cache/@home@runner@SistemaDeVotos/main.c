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
       "4\n\tANULAR VOTO - 5\n\tVOTO EM BRANCO - 6\n\tPARA MOSTRAR OS "
       "RESULTADOS - 0\n");
}
int limitevotos() {
  int voto=0;
  int eleitores = 0;
  int totalVotos = 0;
  float c1 = 0, c2 = 0, c3 = 0, c4 = 0, nulo = 0, branco = 0;

  puts("Defina a quantidade de eleitores: \n");
  scanf("%d", &eleitores);

  while (voto < eleitores) {
    candidatos();
    scanf("%d", &voto);
    switch (voto) {
    case 1:
      c1 += 1;
      puts("Voto Registrado!");
      break;
    case 2:
      c2 += 1;
      puts("Voto Registrado!");
      break;
    case 3:
      c3 += 1;
      puts("Voto Registrado!");
      break;
    case 4:
      c4 += 1;
      puts("Voto Registrado!");
      break;
    case 5:
      nulo += 1;
      puts("Voto Registrado!");
      break;
    case 6:
      branco += 1;
      puts("Voto Registrado!");
      break;
    case 0:
      break;
    default:
      puts("Opção Inválida!\n");
      break;
    }
  voto = c1+c2+c3+c4+nulo+branco;
  }
  printf("\nTotal \t%d\n", voto);
  printf("\n c1: %.2f%% \t= %.0f", c1 / voto * 100, c1);
  printf("\n c2: %.2f%% \t= %.0f", c2 / voto * 100, c2);
  printf("\n c3: %.2f%% \t= %.0f", c3 / voto * 100, c3);
  printf("\n c4: %.2f%% \t= %.0f", c4 / voto * 100, c4);
  printf("\n nulo: %.2f%% \t= %.0f", nulo / voto * 100, nulo);
  printf("\n branco: %.2f%% \t= %.0f", branco / voto * 100, branco);
  menu();
}

int votacao() {
  int voto;
  float c1 = 0, c2 = 0, c3= 0 , c4= 0 , nulo = 0, branco= 0;
  

  while (voto != 0) {
    candidatos();
    scanf("%d", &voto);
    switch (voto) {
    case 1:
      c1 += 1;
      puts("Voto Registrado!");
      break;
    case 2:
      c2 += 1;
      puts("Voto Registrado!");
      break;
    case 3:
      c3 += 1;
      puts("Voto Registrado!");
      break;
    case 4:
      c4 += 1;
      puts("Voto Registrado!");
      break;
    case 5:
      nulo += 1;
      puts("Voto Registrado!");
      break;
    case 6:
      branco += 1;
      puts("Voto Registrado!");
      break;
    case 0:
      break;
    default:
      puts("Opção Inválida!\n");
      break;
    }
  }
  voto = c1+c2+c3+c4+nulo+branco;
  printf("\nTotal \t%d\n", voto);
  printf("\n c1: %.2f%% \t= %.0f", c1 / voto * 100, c1);
  printf("\n c2: %.2f%% \t= %.0f", c2 / voto * 100, c2);
  printf("\n c3: %.2f%% \t= %.0f", c3 / voto * 100, c3);
  printf("\n c4: %.2f%% \t= %.0f", c4 / voto * 100, c4);
  printf("\n nulo: %.2f%% \t= %.0f", nulo / voto * 100, nulo);
  printf("\n branco: %.2f%% \t= %.0f", branco / voto * 100, branco);
  menu();
}

int main(void) {
  int op = 1;
  menu();
  while (op != 0) {
    scanf("%d", &op);
    if (op == 1) {
      votacao();
    } else if (op == 2) {
      limitevotos();
    } else if (op == 0) {
      puts("Ok, Adeus!");
    } else {
      printf("Opção Inválida!\n");
    }
  }
}
