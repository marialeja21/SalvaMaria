#include <stdio.h>

int game;
char* palabra;

void nombreAplicacion (){
    printf("\t SalvaMaria\n Escoge el juego que desees jugar\n 1.Adivina lo que soy\n 2.Sabiendo \n 3.Pensemos\n ");
    scanf("%d",&game);
}
 // char palabra[11]= "hola" ;
    
char AdivinaSoy(){
   
        printf("Tengo agujas y no se coser, tengo numeros y no se leer, Quien soy?");
        scanf("%s",&palabra);
        if(palabra == 1){
            printf("correcto");
        }
    /*}else if (game == 2){
        printf("resolver");
    }else if (game == 3){
        printf("color");
    }*/
    
}
int Sabiendo(){
    printf("escoge la opcion correcta");
}
int main(int argc, char const *argv[]){
    nombreAplicacion();
    AdivinaSoy(game = 1);
    Sabiendo(game = 2);

    return 0;
}
