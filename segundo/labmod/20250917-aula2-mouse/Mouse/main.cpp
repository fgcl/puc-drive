/*
@brief Projeto GLUT
@note Desenha linha horizontal
@author Felipe Gonçalves
*/
//#ifdef __APPLE__
//#include <GLUT/glut.h>
//#else
#include <GL/glut.h> // necessario para funcionar no pc da puc
//#endif
#include <stdlib.h>
#include <stdio.h>

#include <stdlib.h>
#include <time.h>

float r,g,b,x,y;
bool check = true;

void mouse(int button, int state, int mousex, int mousey){
    if(button==GLUT_LEFT_BUTTON){
        check=true;
        x = mousex;
        y = 480-mousey; // porque a coordenada de desenho é diferente e espelhado
        r = (rand()%10)/10.0;
        g = (rand()%10)/10.0;
        b = (rand()%10)/10.0;
    }
    else if(button==GLUT_RIGHT_BUTTON && state=GLUT_DOWN){ // estado pressionado
        glClearColor(1, 1, 1, 0);
        glClear(GL_COLOR_BUFFER_BIT);
        check = false;
    }
    glutPostRedisplay();
}

void display(void)
{
    glColor3f();
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.0f, 1.0f);
        glVertex2f(-1.0f, -1.0f);
        glVertex2f(1.0f, -1.0f);
    glEnd();
    glFlush();
}

int main(int argc, char *argv[])
{
    srand(time(NULL));
    glutInit(&argc, argv);
    glutInitWindowSize(480,480);
    glutInitWindowPosition(0, 0);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutCreateWindow("Mouse");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);

    glutMainLoop();

    return 0;
}
