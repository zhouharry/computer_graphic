#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <GL/glut.h>

#define SIZEX 1600
#define SIZEY 1600

#define MENU_QUIT -1
#define MENU_CLEAR -2
#define MENU_SAVE -3
#define MENU_LOAD -4
#define MENU_BLEND -5

#define WHITE 1
#define BLACK 2
#define RED 3
#define BLUE 4
#define GREEN 5

int height = 1024, width = 1024;

void init_func()
{
}

/*top menu*/
void top_menu_func(int value)
{
}

/*main process*/
void main(int argc, char **argv)
{
	glutInit(&argc, argv);

	glutInitWindowPosition(0, 0);/*initial position*/
	glutInitWindowSize(width, height);/*initial size*/

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	init_func();

	/* Create parent window */
	glutCreateWindow("Menu");
 }