#include <stdio.h>
#include <windows.h>
#include <conio.h>

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
    int x=10;
    int y=10;
    bool gameOver = false;
    while(!gameOver){
        if (kbhit()){
            char key = getch();
            if (key == 'd'){
                x++;
            }
            if (key == 'a'){
                x--;
            }
            if (key == 's'){
                y++;
            }
            if (key == 'w'){
                y--;
            }
            if(key == 'e'){
                gameOver=true;
            } 
            dibujo(x,y);
        }
    }
    return 0;
}

