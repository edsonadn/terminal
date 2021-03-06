#include "objetos/Nave.h"
#include "objetos/Ast.h"

void initial(class Nave &a,class Ast &b){
    ocultarCursor();
    dibujarMargen();
    a.pintar();
    a.pintarCorazones();
    b.pintar();
}
void gameOverr(){
    dibujar(43,15);
    printf("GAME OVER");
    Sleep(4000);
}

int main()
{
    // creacion de objetos
    Nave principal(43,28,3,3); 
    Ast ast6(54,15,5),ast4(78,26,9),ast5(60,6,7);

    // variable para finalizar
    bool gameOver = false;

    // parametros iniciales
    initial(principal,ast6);

    // bucle principal
    while (!gameOver)
    {
        principal.mover();
        ast6.mover();
        ast6.colision(principal);
        ast5.mover();
        ast5.colision(principal);
        ast4.mover();
        ast4.colision(principal);
        Sleep(30);
        if(principal.cor() <= 0){
            gameOver = true;
            gameOverr();
        }
    }
    
    return 0;
}