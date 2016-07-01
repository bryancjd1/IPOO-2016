#include<iostream>
#include "jugador.h"
#include "mapa.h"
#include "mapa1.h"
#include "mapa2.h"
#include "mapa3.h"
#include "enemigo.h"
int main()
{
    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,900, 600 , 0, 0);
    int x=0;
    enemigo a1(30*21,30*1);
    enemigo a2(30*19,30*1);
    enemigo a3(30*23,30*1);
    enemigo a4(30*1,30*9);
    enemigo a5(30*5,30*18);
    enemigo a6(30*23,30*18);
    enemigo a7(30*1,30*9);
    enemigo a8(30*14,30*9);
    enemigo a9(30*11,30*0);
    enemigo a10(30*17,30*0);
    enemigo a11(30*19,30*9);
    enemigo a12(30*23,30*1);
    enemigo a13(30*11,30*1);
    enemigo a14(30*17,30*1);
    enemigo a15(30*5,30*18);
    enemigo a16(30*23,30*18);
    enemigo a17(30*8,30*8);
    enemigo a18(30*27,30*4);
    enemigo a19(30*0,30*9);
    jugador jugador1;
    mapa1 mapauno;
    mapa2 mapados;
    mapa3 mapatres;
    while(x==0)
    {
        jugador1.mover_jugador(mapauno);
        mapauno.dibujar_mapa();
        jugador1.dibujar_jugador(mapauno);
        a1.dibujar_enemigo(mapauno,3);
        a1.ataque2(mapauno,3);
        a1.choque_personaje(mapauno, jugador1);
        a1.ataque_enemigo(mapauno);
        a2.dibujar_enemigo(mapauno,3);
        a2.ataque2(mapauno,3);
        a2.choque_personaje(mapauno, jugador1);
        a2.ataque_enemigo(mapauno);
        a3.dibujar_enemigo(mapauno,3);
        a3.ataque2(mapauno,3);
        a3.choque_personaje(mapauno, jugador1);
        a3.ataque_enemigo(mapauno);
        a4.dibujar_enemigo(mapauno,0);
        a4.ataque2(mapauno,0);
        a4.choque_personaje(mapauno, jugador1);
        a4.ataque_enemigo(mapauno);
        a5.dibujar_enemigo(mapauno,1);
        a5.ataque2(mapauno,1);
        a5.choque_personaje(mapauno, jugador1);
        a5.ataque_enemigo(mapauno);
        a6.dibujar_enemigo(mapauno,1);
        a6.ataque2(mapauno,1);
        a6.choque_personaje(mapauno, jugador1);
        a6.ataque_enemigo(mapauno);
        mapauno.pantalla();
        rest(80);
        mapauno.pantalla();
        rest(80);
        if(mapauno.px==870)
        {
            x=1;
        }
    }
    while(x==1)
    {
        jugador1.mover_jugador2(mapados);
        mapados.dibujar_mapa();
        jugador1.dibujar_jugador2(mapados);
        a13.dibujar_enemigo2(mapados,3);
        a13.ataque22(mapados,3);
        a13.choque_personaje2(mapados, jugador1);
        a13.ataque_enemigo2(mapados);
        a14.dibujar_enemigo2(mapados,3);
        a14.ataque22(mapados,3);
        a14.choque_personaje2(mapados, jugador1);
        a14.ataque_enemigo2(mapados);
        a15.dibujar_enemigo2(mapados,1);
        a15.ataque22(mapados,1);
        a15.choque_personaje2(mapados, jugador1);
        a15.ataque_enemigo2(mapados);
        a16.dibujar_enemigo2(mapados,1);
        a16.ataque22(mapados,1);
        a16.choque_personaje2(mapados, jugador1);
        a16.ataque_enemigo2(mapados);
        a17.dibujar_enemigo2(mapados,0);
        a17.ataque22(mapados,0);
        a17.choque_personaje2(mapados, jugador1);
        a17.ataque_enemigo2(mapados);
        a18.dibujar_enemigo2(mapados,2);
        a18.ataque22(mapados,2);
        a18.choque_personaje2(mapados, jugador1);
        a18.ataque_enemigo2(mapados);
        a19.dibujar_enemigo2(mapados,0);
        a19.ataque22(mapados,0);
        a19.choque_personaje2(mapados, jugador1);
        a19.ataque_enemigo2(mapados);
        mapados.pantalla();
        rest(80);
        mapados.pantalla();
        rest(80);
        if(mapados.px==870)
        {
            x=2;
        }
    }
    while ((!key[KEY_ESC])&&(mapatres.game_over()))
    {
        jugador1.mover_jugador3(mapatres);
        mapatres.dibujar_mapa();
        jugador1.dibujar_jugador3(mapatres);
        a7.dibujar_enemigo3(mapatres,0);
        a7.ataque32(mapatres,0);
        a7.choque_personaje3(mapatres, jugador1);
        a7.ataque_enemigo3(mapatres);
        a8.dibujar_enemigo3(mapatres,1);
        a8.ataque32(mapatres,1);
        a8.choque_personaje3(mapatres, jugador1);
        a8.ataque_enemigo3(mapatres);
        a9.dibujar_enemigo3(mapatres,3);
        a9.ataque32(mapatres,3);
        a9.choque_personaje3(mapatres, jugador1);
        a9.ataque_enemigo3(mapatres);
        a10.dibujar_enemigo3(mapatres,3);
        a10.ataque32(mapatres,3);
        a10.choque_personaje3(mapatres, jugador1);
        a10.ataque_enemigo3(mapatres);
        a11.dibujar_enemigo3(mapatres,0);
        a11.ataque32(mapatres,0);
        a11.choque_personaje3(mapatres, jugador1);
        a11.ataque_enemigo3(mapatres);
        a12.dibujar_enemigo3(mapatres,3);
        a12.ataque32(mapatres,3);
        a12.choque_personaje3(mapatres, jugador1);
        a12.ataque_enemigo3(mapatres);
        mapatres.pantalla();
        rest(80);
        mapatres.pantalla();
        rest(80);
        if(mapatres.px==870)
        {
            return false;
        }
        if(mapatres.vida==0)
        {
            return false;
        }
    }
    return 0;

}
END_OF_MAIN();
