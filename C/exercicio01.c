//Escreva um programa que leia o horário (hora, minuto e segundo) de início e a duração, em segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora, 
//minuto e segundo) do término do experimento
//sem usar IF.

#include <stdio.h>
#include <locale.h>

int main(){
   
  setlocale( LC_ALL, "pt-br");

  int hora, minuto, segundo, duracao, horaConvertido, minutoConvertido, segundoConvertido, horaFinal, minutoFinal, segundoFinal;   
  printf("Digite a hora inicial: ");
  scanf("%d", &hora);
  printf("Digite o minuto inicial: ");
  scanf("%d", &minuto);
  printf("Digite o segundo inicial: ");
  scanf("%d", &segundo);
  printf("\nDigite agora a duracao da experiencia em segundos: ");
  scanf("%d", &duracao);

  
  horaConvertido = duracao / 3600;
  minutoConvertido = (duracao - (horaConvertido * 3600)) / 60;
  segundoConvertido = duracao - (horaConvertido * 3600) - (minutoConvertido * 60);
  

  horaFinal = horaConvertido + hora;
  minutoFinal = minutoConvertido + minuto;
  segundoFinal = segundoConvertido + segundo;
  
  printf("\nA experiencia sera finalizada as: %d:%d:%d", horaFinal, minutoFinal, segundoFinal);
  
  return 0;
  
}