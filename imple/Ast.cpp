#include "../objetos/Ast.h"
#include "../objetos/Funcion.h"

Ast::Ast(int _x, int _y,int _rango)
{
    rango=(_rango);
    x = (_x);
    y = (_y);
    condicion=true;
}
Ast::~Ast()
{
}
void Ast::pintar()
{
    dibujar(x, y);
    printf("%c", 184);
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
    if ((condicion==true) && x<(xi+rango)){
        x++;
        if(x==(xi+rango)||x>89)
        {
            rango = (rand() % 10 + 4);
            condicion=false;
        }
    }
    if ((condicion==false) && x>(xi-rango)){
        x--;
        if(x==(xi-rango)||x<7)
        {
            rango = (rand() % 10 + 4);
            condicion=true;
        }
    }
    if (y > 29)
    {
        x = (rand() % 80) + (6);
        y = 6;
        xi = x;
        rango = (rand() % 10 + 4);
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
