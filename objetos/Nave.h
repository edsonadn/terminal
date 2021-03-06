#ifndef _NAVE_H_
#define _NAVE_H_

class Nave
{
private:
    int x, y, corazones, ve;

public:
    Nave(int _x, int _y, int _corazones,int _ve);
    ~Nave();
    void pintar();
    void borrar();
    void mover();
    void dibujarEstadisticas();
    void pintarCorazones();
    void morir();
    int dx();
    int dy();
    int cor();
};

#include "../imple/Nave.cpp"
#endif