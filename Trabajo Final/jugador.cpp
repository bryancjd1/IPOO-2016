#include"jugador.h"
jugador::jugador()
{
    int a=0;
    int d=0;
    int dir=2;
    personaje = create_bitmap(33,33);
    perbmp =load_bitmap("images/tank2.bmp", NULL);
}

void jugador::dibujar_jugador(mapa1 mapauno)
{
    blit(perbmp,personaje,0,dir*33,0,0,33,33);
    draw_sprite(mapauno.buffer,personaje,mapauno.px,mapauno.py);
}

void jugador::mover_jugador(mapa1 &mapauno)
{

    anteriorpx = mapauno.px;
    anteriorpy = mapauno.py;

        if(key[KEY_RIGHT])dir = 1;
        else if(key[KEY_LEFT])dir = 3;        else if(key[KEY_UP])dir = 0;        else if(key[KEY_DOWN])dir = 2;

        if(dir == 3)
        {
            if (mapauno.m[mapauno.py/30][(mapauno.px-30)/30] != 'X')
                mapauno.px -= 30;
            else dir = 4;
        }
        if(dir == 1)
        {
            if (mapauno.m[mapauno.py/30][(mapauno.px+30)/30] != 'X')
                mapauno.px += 30;
            else dir = 4;
        }        if(dir == 0)
        {
            if (mapauno.m[(mapauno.py-30)/30][mapauno.px/30] != 'X')
                mapauno.py -= 30;
            else dir = 4;
        }        if(dir == 2)
        {
            if (mapauno.m[(mapauno.py+30)/30][mapauno.px/30] != 'X')
                mapauno.py += 30;
            else dir = 4;
        }
        if(dir == 4)
        {
            blit(perbmp,personaje,0,2*33,0,0,33,33);
        }
        clear(mapauno.buffer);
}
void jugador::dibujar_jugador2(mapa2 mapados)
{
    blit(perbmp,personaje,0,dir*33,0,0,33,33);
    draw_sprite(mapados.buffer,personaje,mapados.px,mapados.py);
}

void jugador::mover_jugador2(mapa2 &mapados)
{

    anteriorpx = mapados.px;
    anteriorpy = mapados.py;

        if(key[KEY_RIGHT])dir = 1;
        else if(key[KEY_LEFT])dir = 3;        else if(key[KEY_UP])dir = 0;        else if(key[KEY_DOWN])dir = 2;

        if(dir == 3)
        {
            if (mapados.m[mapados.py/30][(mapados.px-30)/30] != 'X')
                mapados.px -= 30;
            else dir = 4;
        }
        if(dir == 1)
        {
            if (mapados.m[mapados.py/30][(mapados.px+30)/30] != 'X')
                mapados.px += 30;
            else dir = 4;
        }        if(dir == 0)
        {
            if (mapados.m[(mapados.py-30)/30][mapados.px/30] != 'X')
                mapados.py -= 30;
            else dir = 4;
        }        if(dir == 2)
        {
            if (mapados.m[(mapados.py+30)/30][mapados.px/30] != 'X')
                mapados.py += 30;
            else dir = 4;
        }
        if(dir == 4)
        {
            blit(perbmp,personaje,0,2*33,0,0,33,33);
        }
        clear(mapados.buffer);
}
void jugador::dibujar_jugador3(mapa3 mapatres)
{
    blit(perbmp,personaje,0,dir*33,0,0,33,33);
    draw_sprite(mapatres.buffer,personaje,mapatres.px,mapatres.py);
}

void jugador::mover_jugador3(mapa3 &mapatres)
{

    anteriorpx = mapatres.px;
    anteriorpy = mapatres.py;

        if(key[KEY_RIGHT])dir = 1;
        else if(key[KEY_LEFT])dir = 3;        else if(key[KEY_UP])dir = 0;        else if(key[KEY_DOWN])dir = 2;

        if(dir == 3)
        {
            if (mapatres.m[mapatres.py/30][(mapatres.px-30)/30] != 'X')
                mapatres.px -= 30;
            else dir = 4;
        }
        if(dir == 1)
        {
            if (mapatres.m[mapatres.py/30][(mapatres.px+30)/30] != 'X')
                mapatres.px += 30;
            else dir = 4;
        }        if(dir == 0)
        {
            if (mapatres.m[(mapatres.py-30)/30][mapatres.px/30] != 'X')
                mapatres.py -= 30;
            else dir = 4;
        }        if(dir == 2)
        {
            if (mapatres.m[(mapatres.py+30)/30][mapatres.px/30] != 'X')
                mapatres.py += 30;
            else dir = 4;
        }
        if(dir == 4)
        {
            blit(perbmp,personaje,0,2*33,0,0,33,33);
        }        //rutina para atajo


        clear(mapatres.buffer);
}
