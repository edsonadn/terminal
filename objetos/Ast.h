#ifndef _AST_H_
#define _AST_H_

class Ast
{
private:
    int x,y;
    int xi;
    bool condicion;
    int rango;
    int figura;
public:
    Ast(int _x,int _y,int _rango);
    ~Ast();
    void pintar();
    void borrar();
    void mover();
    void colision(class Nave &nave);
    void elegirFigura();
};

#include "../imple/Ast.cpp"
#endif