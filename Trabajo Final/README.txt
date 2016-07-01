*** TRABAJO FINAL ***

El juego consiste en completar los diferentes niveles
que se presentan, siendo un personaje el que tiene
que pasar esquivando y sobreviviendo los ataques de los
enemigos, el personaje posee tres vidas, si el personaje
muere mas de 2 veces entonces la aplicacion terminara,
los enemigos son estaticos en el mapa, disparan ataques
constantemente y no pueden ser eliminados, el personaje 
tiene que completar los 3 mapas que se presentan, al 
completar el primero nos lleva al segundo que contiene
una estructura diferente y tambien diferentes posiciones
de los enemigos, el juego concluye al llegar al punto 
final del tercer mapa o al morir tres veces.

***  GUIA PARA USAR ALLEGRO EN CODEBLOCKS  ***

En el programa utilizamos la version o edición 4 de
la libreria allegro, despues de descargarla nos dirigimos
a la carpeta donde encontraremos tres carpetas adicionales

-LIB
-INCLUDE
-BIN

LIB:
En la carpeta lib encontraremos varios archivos de los
cuales solo tenemeos que tener en cuenta aquellos que
terminen con "-static-mt", los demas pueden ser ignorados.

Despues abrimos el codeblocks y nos vamos a la pestaña
Settings y seleccionamos en Compiler en el menu que nos
aparezca seleccionaremos en la pestaña "Linker Settings"
despues presionamos en el boton "Add" y seleccionamos todos
los archivos con terminación "-static-mt" en la libreria lib
ademas de copiar estos mismos archivos en la parte superior
del boton "Add".

Despues en el mismo menu seleccionamos el boton "Search
Directories" despues seleccionamos "Compiler" y añadimos
la carpeta de allegro de la misma manera, el boton "Add"
y seleccionamos la carpeta, adicionalmente copiamos la 
carpeta en el espacio en blanco del menu

Tenemos que copiar un archivo llamada alld42.dll que se encuentra
en la carpeta de allegro en la carpeta de nuestro programa.

Finalmente incluimos en el codigo la libreria allegro. 