#include "../objetos/Funcion.h"
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void dibujar(int x, int y)
{
    HANDLE hCon;
    COORD dwPos;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hCon, dwPos);
}
void ocultarCursor()
{
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 3;
    cci.bVisible = FALSE;
    SetConsoleCursorInfo(hCon, &cci);
}
void dibujarMargen()
{
    for (int i = 5; i <= 30; i++)
    {
        dibujar(5, i);
        printf("%c", 186);
        dibujar(90, i);
        printf("%c", 186);
    }
    for (int i = 5; i <= 90; i++)
    {
        dibujar(i, 5);
        printf("%c", 205);
        dibujar(i, 30);
        printf("%c", 205);
    }
    dibujar(5, 5);
    printf("%c", 201);
    dibujar(5, 30);
    printf("%c", 200);
    dibujar(90, 5);
    printf("%c", 187);
    dibujar(90, 30);
    printf("%c", 188);
}