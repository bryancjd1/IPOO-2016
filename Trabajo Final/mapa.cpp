#include "mapa.h"
void mapa::pantalla()
{
    blit(buffer, screen ,0,0,0,0,900,600);
};
bool mapa::game_over()
{
    if(vida!=0)
    {
        return true;
    }
    return false;
}



