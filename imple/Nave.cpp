#include "../objetos/Nave.h"
#include "../objetos/Funcion.h"

Nave::Nave(int _x, int _y,int _corazones)
{
    x = (_x);
    y = (_y);
    corazones = (_corazones);
}
Nave::~Nave()
{
    borrar();
}
void Nave::pintar()
{
    dibujar(x, y);
    printf("  %c", 94);
    dibujar(x, y + 1);
    printf("%c%c%c%c%c", 186,205, 219,205, 186);
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
        pintarCorazones();
        pintar();
    }
}
void Nave::pintarCorazones(){
    dibujar(60,3);
    printf("Vida");
    dibujar(65,3);
    printf("       ");
    for(int i=0;i<corazones;i++ ){
        dibujar(65+i,3);
        printf("%c",3);
    }
}