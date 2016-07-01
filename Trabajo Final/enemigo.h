#include<allegro.h>
#include "mapa1.h"
#include "jugador.h"
class enemigo
{
    private:
        BITMAP *enemigobmp;
        BITMAP *enemigom;
        BITMAP *muertes;
        BITMAP *muertebmp;
        BITMAP *atabmp;
        BITMAP *ataqueb;
        int vidaenemigo;
        int _x,_y;
        int _a,a_x,a_y,fd;
    public:
        enemigo(){};
        enemigo(int x,int y);
        void dibujar_enemigo(mapa1 mapauno, int fdir) const;
        void choque_personaje(mapa1 &mapauno, jugador jugador1);
        void ataque_enemigo(mapa1 &mapauno);
        void ataque2(mapa1 &mapauno, int fdir);
        void dibujar_enemigo2(mapa2 mapados, int fdir) const;
        void choque_personaje2(mapa2 &mapados, jugador jugador1);
        void ataque_enemigo2(mapa2 &mapados);
        void ataque22(mapa2 &mapados, int fdir);
        void dibujar_enemigo3(mapa3 mapatres, int fdir) const;
        void choque_personaje3(mapa3 &mapatres, jugador jugador1);
        void ataque_enemigo3(mapa3 &mapatres);
        void ataque32(mapa3 &mapatres, int fdir);
        int getvida();

};
