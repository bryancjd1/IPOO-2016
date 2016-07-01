#include "enemigo.h"
enemigo::enemigo(int x, int y)
{
    _x = x;
    _y = y;
    _a=1;
    vidaenemigo=1;
    ataqueb = create_bitmap(33,33);
    muertebmp = load_bitmap("images/muerte1.bmp",NULL);
    atabmp = load_bitmap("images/ataque.bmp", NULL);
    enemigom = create_bitmap(30,30);
    enemigobmp = load_bitmap("images/enemigo2.bmp",NULL);
}
int enemigo::getvida()
{
    return vidaenemigo;
}
void enemigo::dibujar_enemigo(mapa1 mapauno, int fdir) const
{
    blit(enemigobmp,enemigom,0,fdir*33,0,0,30,30);
    draw_sprite(mapauno.buffer,enemigom,_x,_y);
}

void enemigo::choque_personaje(mapa1 &mapauno, jugador jugador1)
{
    if((mapauno.py == a_y && mapauno.px == a_x) || (a_y == jugador1.anteriorpy && a_x == jugador1.anteriorpx))
    {
            clear (jugador1.personaje);
            mapauno.dibujar_mapa();

            blit(muertebmp,jugador1.personaje,0,0,0,0,33,33);
            draw_sprite(mapauno.buffer,jugador1.personaje,mapauno.px,mapauno.py);
            blit(mapauno.buffer, screen ,0,0,0,0,1280,600);
            rest(80);

        mapauno.px = 30*1;
        mapauno.py = 30*1;
        jugador1.dir = 4;
        mapauno.vida --;

    }
}

void enemigo::ataque_enemigo(mapa1 &mapauno)
{

    if(fd == 2)
    {
        if (mapauno.m[a_y/30][(a_x-30)/30] != 'X')
        {
            a_x -= 30;
            blit(atabmp,ataqueb,0,0,0,0,33,33);
            draw_sprite(mapauno.buffer,ataqueb,a_x,a_y);
            _a=0;
        }
        if (mapauno.m[a_y/30][(a_x-30)/30] == 'X')
        {
            _a=1;
            a_y=0;
        }
    }
    if(fd == 0)
    {
        if (mapauno.m[a_y/30][(a_x+30)/30] != 'X')
        {
            a_x += 30;
            blit(atabmp,ataqueb,0,0,0,0,33,33);
            draw_sprite(mapauno.buffer,ataqueb,a_x,a_y);
            _a=0;
        }
        if (mapauno.m[a_y/30][(a_x+30)/30] == 'X')
        {
            _a=1;
            a_y=0;
        }
    }    if(fd == 1)
    {
        if (mapauno.m[(a_y-30)/30][a_x/30] != 'X')
        {
            a_y -= 30;
            blit(atabmp,ataqueb,0,0,0,0,33,33);
            draw_sprite(mapauno.buffer,ataqueb,a_x,a_y);
            _a=0;
        }
        if (mapauno.m[(a_y-30)/30][a_x/30] == 'X')
        {
            _a=1;
            a_x=0;
        }
    }    if(fd == 3)
    {
        if (mapauno.m[(a_y+30)/30][a_x/30] != 'X')
        {
            a_y += 30;
            blit(atabmp,ataqueb,0,0,0,0,33,33);
            draw_sprite(mapauno.buffer,ataqueb,a_x,a_y);
            _a=0;
        }
        if (mapauno.m[(a_y+30)/30][a_x/30] == 'X')
        {
            _a=1;
            a_x=0;
        }
    }
}
void enemigo::ataque2(mapa1 &mapauno, int fdir)
{
    if(_a==1)
    {
        a_x=_x;
        a_y=_y;
        fd=fdir;
    }
}
void enemigo::dibujar_enemigo2(mapa2 mapados, int fdir) const
{
    blit(enemigobmp,enemigom,0,fdir*33,0,0,30,30);
    draw_sprite(mapados.buffer,enemigom,_x,_y);
}

void enemigo::choque_personaje2(mapa2 &mapados, jugador jugador1)
{
    if((mapados.py == a_y && mapados.px == a_x) || (a_y == jugador1.anteriorpy && a_x == jugador1.anteriorpx))
    {
            clear (jugador1.personaje);
            mapados.dibujar_mapa();

            blit(muertebmp,jugador1.personaje,0,0,0,0,33,33);
            draw_sprite(mapados.buffer,jugador1.personaje,mapados.px,mapados.py);
            blit(mapados.buffer, screen ,0,0,0,0,1280,600);
            rest(80);

        mapados.px = 30*1;
        mapados.py = 30*1;
        jugador1.dir = 4;
        mapados.vida --;

    }
}

void enemigo::ataque_enemigo2(mapa2 &mapados)
{

    if(fd == 2)
    {
        if (mapados.m[a_y/30][(a_x-30)/30] != 'X')
        {
            a_x -= 30;
            blit(atabmp,ataqueb,0,0,0,0,33,33);
            draw_sprite(mapados.buffer,ataqueb,a_x,a_y);
            _a=0;
        }
        if (mapados.m[a_y/30][(a_x-30)/30] == 'X')
        {
            _a=1;
            a_y=0;
        }
    }
    if(fd == 0)
    {
        if (mapados.m[a_y/30][(a_x+30)/30] != 'X')
        {
            a_x += 30;
            blit(atabmp,ataqueb,0,0,0,0,33,33);
            draw_sprite(mapados.buffer,ataqueb,a_x,a_y);
            _a=0;
        }
        if (mapados.m[a_y/30][(a_x+30)/30] == 'X')
        {
            _a=1;
            a_y=0;
        }
    }    if(fd == 1)
    {
        if (mapados.m[(a_y-30)/30][a_x/30] != 'X')
        {
            a_y -= 30;
            blit(atabmp,ataqueb,0,0,0,0,33,33);
            draw_sprite(mapados.buffer,ataqueb,a_x,a_y);
            _a=0;
        }
        if (mapados.m[(a_y-30)/30][a_x/30] == 'X')
        {
            _a=1;
            a_x=0;
        }
    }    if(fd == 3)
    {
        if (mapados.m[(a_y+30)/30][a_x/30] != 'X')
        {
            a_y += 30;
            blit(atabmp,ataqueb,0,0,0,0,33,33);
            draw_sprite(mapados.buffer,ataqueb,a_x,a_y);
            _a=0;
        }
        if (mapados.m[(a_y+30)/30][a_x/30] == 'X')
        {
            _a=1;
            a_x=0;
        }
    }
}
void enemigo::ataque22(mapa2 &mapados, int fdir)
{
    if(_a==1)
    {
        a_x=_x;
        a_y=_y;
        fd=fdir;
    }
}
void enemigo::dibujar_enemigo3(mapa3 mapatres, int fdir) const
{
    blit(enemigobmp,enemigom,0,fdir*33,0,0,30,30);
    draw_sprite(mapatres.buffer,enemigom,_x,_y);
}

void enemigo::choque_personaje3(mapa3 &mapatres, jugador jugador1)
{
    if((mapatres.py == a_y && mapatres.px == a_x) || (a_y == jugador1.anteriorpy && a_x == jugador1.anteriorpx))
    {
            clear (jugador1.personaje);
            mapatres.dibujar_mapa();

            blit(muertebmp,jugador1.personaje,0,0,0,0,33,33);
            draw_sprite(mapatres.buffer,jugador1.personaje,mapatres.px,mapatres.py);
            blit(mapatres.buffer, screen ,0,0,0,0,1280,600);
            rest(80);

        mapatres.px = 30*1;
        mapatres.py = 30*1;
        jugador1.dir = 4;
        mapatres.vida --;

    }
}

void enemigo::ataque_enemigo3(mapa3 &mapatres)
{

    if(fd == 2)
    {
        if (mapatres.m[a_y/30][(a_x-30)/30] != 'X')
        {
            a_x -= 30;
            blit(atabmp,ataqueb,0,0,0,0,33,33);
            draw_sprite(mapatres.buffer,ataqueb,a_x,a_y);
            _a=0;
        }
        if (mapatres.m[a_y/30][(a_x-30)/30] == 'X')
        {
            _a=1;
            a_y=0;
        }
    }
    if(fd == 0)
    {
        if (mapatres.m[a_y/30][(a_x+30)/30] != 'X')
        {
            a_x += 30;
            blit(atabmp,ataqueb,0,0,0,0,33,33);
            draw_sprite(mapatres.buffer,ataqueb,a_x,a_y);
            _a=0;
        }
        if (mapatres.m[a_y/30][(a_x+30)/30] == 'X')
        {
            _a=1;
            a_y=0;
        }
    }    if(fd == 1)
    {
        if (mapatres.m[(a_y-30)/30][a_x/30] != 'X')
        {
            a_y -= 30;
            blit(atabmp,ataqueb,0,0,0,0,33,33);
            draw_sprite(mapatres.buffer,ataqueb,a_x,a_y);
            _a=0;
        }
        if (mapatres.m[(a_y-30)/30][a_x/30] == 'X')
        {
            _a=1;
            a_x=0;
        }
    }    if(fd == 3)
    {
        if (mapatres.m[(a_y+30)/30][a_x/30] != 'X')
        {
            a_y += 30;
            blit(atabmp,ataqueb,0,0,0,0,33,33);
            draw_sprite(mapatres.buffer,ataqueb,a_x,a_y);
            _a=0;
        }
        if (mapatres.m[(a_y+30)/30][a_x/30] == 'X')
        {
            _a=1;
            a_x=0;
        }
    }
}
void enemigo::ataque32(mapa3 &mapatres, int fdir)
{
    if(_a==1)
    {
        a_x=_x;
        a_y=_y;
        fd=fdir;
    }
}
