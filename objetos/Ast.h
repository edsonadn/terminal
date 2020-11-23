#ifndef _AST_H_
#define _AST_H_

class Ast
{
private:
    int x,y;
public:
    Ast(int _x,int _y);
    ~Ast();
    void pintar();
    void borrar();
    void mover();
};

#include "../imple/Ast.cpp"
#endif