#include <stdio.h>
#include <string.h>

int game;
char* palabra;

void nombreAplicacion (){
    printf("\t SalvaMaria\n Escoge el juego que desees jugar\n 1.Adivina lo que soy\n 2.Sabiendo \n 3.Pensemos\n ");
    scanf("%d",&game);
}
    
char AdivinaSoy(){
   
    printf("Tengo agujas y no se coser, tengo numeros y no se leer, Quien soy?");
    scanf("%s",&palabra);
    if (strcmp(palabra, "modista")== 0){
        printf("ups, no es, intentalo otr vez");
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
}
int Sabiendo(){
    printf("escoge la opcion correcta");
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
    }
    return 0;
}
