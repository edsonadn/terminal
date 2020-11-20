#include <stdio.h>
#include <windows.h>

void dibujo(int x,int y,HANDLE dv){
    COORD dwPos;
    dwPos.X=x;
    dwPos.Y=y;
    SetConsoleCursorPosition(dv,dwPos);
    printf("#");
}

int main(){
    HANDLE hCon;
    COORD dwPos;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    dibujo(4,2,hCon);
    dibujo(6,2,hCon);
    dibujo(3,4,hCon);
    dibujo(7,4,hCon);
    dibujo(4,4,hCon);
    dibujo(5,4,hCon);
    dibujo(6,4,hCon);
}

