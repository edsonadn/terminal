#ifndef _AST_H_
#define _AST_H_

class Ast
{
private:
    int x,y;
    int xi;
    bool condicion;
    int rango;
public:
    Ast(int _x,int _y,int _rango);
    ~Ast();
    void pintar();
    void borrar();
    void mover();
    void colision(class Nave &nave);
};

#include "../imple/Ast.cpp"
#endif