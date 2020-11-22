#include <stdio.h>
#include "Funcion.h"

class Nave
{
private:
    int x, y;

public:
    Nave(int _x, int _y);
    ~Nave();
    void pintar();
    void borrar();
    void mover();
    void dibujarEstadisticas();
};
Nave::Nave(int _x, int _y)
{
    x = (_x);
    y = (_y);
}
Nave::~Nave()
{
}
void Nave::pintar()
{
    dibujar(x, y);
    printf("  %c", 94);
    dibujar(x, y + 1);
    printf("%c %c %C", 186, 219, 186);
}
void Nave::borrar()
{
    dibujar(x, y);
    printf("     ");
    dibujar(x, y + 1);
    printf("     ");
}
void Nave::dibujarEstadisticas()
{
    dibujar(10, 3);
    printf("valorX:%i", x);
}
void Nave::mover()
{
    if (kbhit())
    {
        borrar();
        char key = getch();
        if ((key == 'd') && (x < 85))
        {
            x++;
        }
        if ((key == 'a') && (x > 6))
        {
            x--;
        }
        dibujarEstadisticas();
        pintar();
    }
}
