#pragma once
#include"mapa1.h"
#include"mapa2.h"
#include"mapa3.h"
#include<allegro.h>
class jugador
{
    public:
        void mover_jugador(mapa1 &mapauno);
        void dibujar_jugador(mapa1 mapauno);
        void mover_jugador2(mapa2 &mapados);
        void dibujar_jugador2(mapa2 mapados);
        void mover_jugador3(mapa3 &mapatres);
        void dibujar_jugador3(mapa3 mapatres);
        void ataque();
        void ataque1();
        jugador();
        int a;
        int d;
        int dir;
        int ax,ay;
        int anteriorpx,anteriorpy;
        BITMAP *personaje;
        BITMAP *perbmp;
        mapa1 mapauno;
        mapa2 mapados;
        mapa3 mapatres;
};


