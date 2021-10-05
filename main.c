#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int game;
char* palabra;

void nombreAplicacion (){
    printf("\t SalvaMaria\n Escoge el juego que desees jugar\n 1.Adivina lo que soy\n 2.Sabiendo \n 3.Pensemos\n  4.Salir \n ");
    scanf("%d",&game);
}
int siguiente(){
    int retorno;
    printf("si quiere volver a comenzar escriba 1, si desea volver al menu escriba 2 \n");
    scanf("%d",&retorno);
    if (retorno == 1){
        main();
    }
    return 0;
}
    
char AdivinaSoy(){
   
    printf("Tengo agujas y no se coser, tengo numeros y no se leer, Quien soy?");
    scanf("%s",&palabra);
    if (strcmp(palabra, "modista")== 0){
        printf("ups, no es, intentalo otra vez");
        scanf("%s",&palabra);
    }else if (strcmp(palabra, "reloj")== 0){
        printf("Correcto\n ");
    }else{
        printf("La respuesta correcta es reloj\n Sigamos adivinando\n");
    }printf("Tiene ojos y no ve,\n tiene agua y no la bebe,\n tiene carne y no la come\n tiene barba y no ess hombre\n que es?");
    scanf("%s",&palabra);
     if (strcmp(palabra, "modista")== 0){
        printf("ups, no es, intentalo otr vez");
        scanf("%s",&palabra);
    }else if (strcmp(palabra, "coco")== 0){
        printf("Correcto\n ");
    }else{
        printf("La respuesta correcta es coco\n\t Sigamos adivinando\n");
    }
    printf("\n Tengo hojitas blancas, \n gruesa cabellera y conmigo \n llora toda cocinera\nQuien soy? ");
    scanf("la %s",&palabra);
     if (strcmp(palabra, "modista")== 0){
        printf("ups, no es, intentalo otr vez");
        scanf("%s",&palabra);
    }else if (strcmp(palabra, "cebolla")== 0){
        printf("Correcto\n ");
    }else{
        printf("La respuesta correcta es la cebolla\n\t Sigamos adivinando\n");
    }
    siguiente();
}
int Sabiendo(){
    char saber[11];
    printf("\n  Organiza el nombre del animal\n g i c o m u l a r e\n");
    scanf("%s",saber);
    if (strcmp(saber, "murcielago")== 0){
        printf("Correcto, su puntaje es 3");
    }else{
        printf("La respuesta correcta es murcielago, su puntaje es 0");
    }
    printf("\n El siguiente nombre de animal a organizar es: r i c o l o c o d\n");
    scanf("%s",saber);
    if (strcmp(saber, "cocodrilo")== 0){
        printf("Correcto, su puntaje es 3");
    }else{
        printf(" La respuesta correcta es cocodrilo");
    }
    printf("\n El siguiente nombre de animal a organizar es: l l e n a b a\n");
    scanf("%s",saber);
    if (strcmp(saber, "ballena")== 0){
        printf("Correcto, su puntaje es 3 ");
    }else{
        printf("\nLa respuesta correcta es ballena");
    }
    siguiente();
}
int pensemos(){
    printf("Sume las siguientes operaciones\n");
    srand(time(NULL));

    for (int i = 0; i < 3; i++){
    int  numerosVasriados= rand() % 21, seguandoNumero= rand() % 21, suma;
    printf("Suma: %d + %d\n", numerosVasriados,seguandoNumero);
    scanf("%d", &suma);

    if (suma == numerosVasriados + seguandoNumero){
        printf("Correcto, sigamos\n");
        }
    else{
        printf("Incorrecto\n ");
        suma = numerosVasriados + seguandoNumero;
        printf("La respuesta era %d\n",suma);
    }
    }
    siguiente();
    return 0;
}
int main(int argc, char const *argv[]){
    nombreAplicacion();
    if(game == 1){
      printf("correcto");
      AdivinaSoy();
    }else if (game == 2){
        printf("resolver");
        Sabiendo();
    }else if (game == 3){
        printf("color");
    }else{
       printf("Buena vida");
       exit(0);
    }
    return 0;
}
