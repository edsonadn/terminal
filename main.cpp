#include "objetos/Nave.h"
#include "objetos/Ast.h"

int main()
{
    Nave principal(43,28,3); 
    Ast ast1(32,6);
    Ast ast2(65,6);
    Ast ast3(34,6);
    Ast ast4(12,6);
    Ast ast5(39,6);
    Ast ast6(60,6);
    bool gameOver = false;
    ocultarCursor();
    dibujarMargen();
    principal.pintar();
    principal.pintarCorazones();
    ast1.pintar();
    ast2.pintar();
    ast3.pintar();
    ast4.pintar();
    ast5.pintar();
    ast6.pintar();
    while (!gameOver)
    {
        principal.mover();
        ast1.mover();
        ast2.mover();
        ast3.mover();
        ast4.mover();
        ast5.mover();
        ast6.mover();
        Sleep(30);
    }
    return 0;
}
