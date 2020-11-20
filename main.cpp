#include <stdio.h>
#include <windows.h>

void dibujo(int x,int y){
    HANDLE hCon;
    COORD dwPos;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    dwPos.X=x;
    dwPos.Y=y;
    SetConsoleCursorPosition(hCon,dwPos);
    printf("*");
}

int main(){
    dibujo(4,2);
    return 0;
}

