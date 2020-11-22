#include <stdio.h>
#include "objetos/Nave.h"

int main()
{
    Nave principal(43, 28);
    bool gameOver = false;
    ocultarCursor();
    dibujarMargen();
    principal.pintar();
    while (!gameOver)
    {
        principal.mover();
        Sleep(30);
    }
    return 0;
}
