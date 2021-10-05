#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int game, number[4]; 
char palabra[11]; 

void nombreAplicacion (){
    printf("\t SalvaMaria\n Escoge el juego que desees jugar\n 1.Adivina lo que soy\n 2.Sabiendo \n 3.Pensemos\n 4.Salir \n");
    scanf("%d",&game);
} 
int siguiente(){
    int retorno;
    printf("\n Si desea volver al menu escriba 1, si desea salir escriba 2 \n");
    scanf("%d",&retorno);
    if (retorno == 1){
        main();
    }else{
      exit(0);  
    }
    
    return 0;
}
    
char AdivinaSoy(){
    printf("Tengo agujas y no se coser, tengo numeros y no se leer, Quien soy? ");
    scanf("%s",&palabra);
    if (strcmp(palabra, "reloj")== 0){
        number[0]=1;
        printf("correcto , tiene %d punto\n", number[0]);
    }else{
        printf("Vuelvelo a intentar, Tengo agujas y no se coser, tengo numeros y no se leer, Quien soy? ");
        scanf("%s",&palabra);
        if (strcmp(palabra, "reloj")== 0){
        printf("correcto , tiene %d punto\n", number[0]=1);
        }else{
        printf("La respuesta correcta es reloj,tiene %d puntos\n Sigamos adivinando\n",number[0]=0);
        }  
    }
    printf(" Tiene ojos y no ve,\n tiene agua y no la bebe,\n tiene carne y no la come\n tiene barba y no es hombre\n que es? el ");
    scanf("%s",&palabra);
    if (strcmp(palabra, "coco")== 0){
        printf("Correcto, tiene  %d punto\n ", number[1]=1);
    }else{
        printf("Vuelvelo a intentar,\nTiene ojos y no ve,\n tiene agua y no la bebe,\n tiene carne y no la come\n tiene barba y no es hombre\n que es? el ");
        scanf("%s",&palabra);
        if (strcmp(palabra, "coco")== 0){
        printf("correcto, tiene %d punto\n", number[1]=1);
        }else{
        printf("La respuesta correcta es coco, tiene %d puntos\n\t Sigamos adivinando\n", number[1]=0);
        }
    }
    printf("Tengo hojitas blancas, \n gruesa cabellera y conmigo \n llora toda cocinera\nQuien soy?\n la ");
    scanf("%s",&palabra);
    if (strcmp(palabra, "cebolla")== 0){
        printf("Correcto, tiene %d punto\n ", number[2]=1);
    }else{
        printf("Vuelvelo a intentar,\nTengo hojitas blancas, \n gruesa cabellera y conmigo \n llora toda cocinera\nQuien soy?\n la ");
        scanf("%s",&palabra);
        if (strcmp(palabra, "cebolla")== 0){
        printf("correcto, tiene %d punto\n", number[2]=1);
        }else{
        printf("La respuesta correcta es la cebolla,tiene %d puntos\n", number[2]=0);
        }    
    }
    number[3] = number[0] + number[1] + number[2];
    printf("Su puntaje es de %d",number[3]);
    siguiente();
}
char sabiendo(){
    char saber[11];
    printf("\n  Organiza el nombre del animal\n g i c o m u l a r e\n");
    scanf("%s",saber);
    if (strcmp(saber, "murcielago")== 0){
        printf("Correcto, su puntaje es %d", number[0]=3);
    }else{
        printf("La respuesta correcta es murcielago, su puntaje es %d", number[0]=0);
    }
    printf("\n El siguiente nombre de animal a organizar es: r i c o l o c o d\n");
    scanf("%s",saber);
    if (strcmp(saber, "cocodrilo")== 0){
        printf("Correcto, su puntaje es %d",number[1]=3);
    }else{
        printf(" La respuesta correcta es cocodrilo, su puntaje es %d", number[1]=0);
    }
    printf("\n El siguiente nombre de animal a organizar es: l l e n a b a\n");
    scanf("%s",saber);
    if (strcmp(saber, "ballena")== 0){
        printf("Correcto, su puntaje es %d ",number[2]=3);
    }else{
        printf("\nLa respuesta correcta es ballena, su puntaje es %d", number[2]=0);
    }
    printf("\nSu puntaje en este juego es de %d", number[3]= number[0] + number[1] + number[2]);
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
        printf("Correcto\n");
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
int main(){
    nombreAplicacion();
    if ( game == 1) {
      AdivinaSoy(); 
    }else if (game == 2){
      sabiendo();
    }else if ( game == 3){
      pensemos();
    }else{
       printf("Buena vida");
       exit(0);
    }
    return 0;
}
