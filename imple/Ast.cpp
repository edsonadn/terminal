#include "../objetos/Ast.h"
#include "../objetos/Funcion.h"

Ast::Ast(int _x, int _y)
{
    x = (_x);
    y = (_y);
}
Ast::~Ast()
{
}
void Ast::pintar()
{
    dibujar(x, y);
    printf("%c", 97);
}
void Ast::borrar()
{
    dibujar(x, y);
    printf(" ");
}
void Ast::mover()
{
    borrar();
    y++;
    if (y > 29)
    {
        x = rand() % 83 + 6;
        y = 6;
    }
    pintar();
}
void Ast::colision( class Nave &nave)
{
    if ((x >= nave.dx()) && (x <= (nave.dx() + 5)) && (y>=nave.dy()))
        {
            nave.morir();
            borrar();
            x = rand() % 83 + 6;
            y = 6;
        }
}
