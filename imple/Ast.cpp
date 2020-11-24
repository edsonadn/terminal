#include "../objetos/Ast.h"
#include "../objetos/Funcion.h"

Ast::Ast(int _x, int _y, int _rango)
{
    rango = (_rango);
    x = (_x);
    y = (_y);
    condicion = true;
}
Ast::~Ast()
{
}
void Ast::pintar()
{
    dibujar(x, y);
    printf("%c", figura);
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
    if ((condicion == true) && x < (xi + rango))
    {
        x++;
        if (x == (xi + rango) || x > 89)
        {
            rango = (rand() % 10 + 4);
            condicion = false;
            elegirFigura();
        }
    }
    if ((condicion == false) && x > (xi - rango))
    {
        x--;
        if (x == (xi - rango) || x < 7)
        {
            rango = (rand() % 10 + 4);
            condicion = true;
            elegirFigura();
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
void Ast::colision(class Nave &nave)
{
    if ((x >= nave.dx()) && (x <= (nave.dx() + 5)) && (y >= nave.dy()))
    {
        nave.morir();
        borrar();
        x = rand() % 83 + 6;
        y = 6;
    }
}
void Ast::elegirFigura()
{
    if (rango == 4)
    {
        figura = 205;
    }
    if (rango == 5)
    {
        figura = 186;
    }
    if (rango == 6)
    {
        figura = 203;
    }
    if (rango == 7)
    {
        figura = 202;
    }
    if (rango == 8)
    {
        figura = 185;
    }
    if (rango == 9)
    {
        figura = 204;
    }
    if (rango == 10)
    {
        figura = 206;
    }
}
