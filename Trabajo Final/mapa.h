#pragma once
#include <allegro.h>
class mapa
{
public:
    void pantalla();
    virtual void dibujar_mapa(){};
    bool game_over();

    BITMAP *buffer;
    BITMAP *roca;
    BITMAP *comida;
    BITMAP *vid;
    BITMAP *vidas;
    int vida;
    int px,py;
    int z;
};
