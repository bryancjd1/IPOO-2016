#include"mapa3.h"
mapa3::mapa3()
{
    buffer = create_bitmap(900,600);
    vid =create_bitmap(33,33);
    roca = load_bitmap("images/5.bmp",NULL);
    comida = load_bitmap("images/Comida.bmp",NULL);
    vidas = load_bitmap("images/vidas.bmp",NULL);
    vida=3;
    px=30*1,py=30*1;
    z=0;
}

void mapa3::dibujar_mapa()
{
    int row,col;
    for(row = 0; row < MAXFILAS; row ++)
    {
        for(col = 0; col <MAXCOLS; col++)
        {
            if(m[row][col] == 'X')
            {

                draw_sprite(buffer, roca , col*30 , row*30); //escala de 30 a 1 por eso se multiplica por 30
            }
            else if(m[row][col] == 'O')
            {
                draw_sprite(buffer, comida , col*30 , row*30); //escala de 30 a 1 por eso se multiplica por 30                if(py/30 == row && px/30 == col)
                {
                    m[row][col] = ' ';
                    z++;
                }
            }
        }
    }

}

