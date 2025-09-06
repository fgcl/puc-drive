/*
@brief Projeto GLUT
@note Desenha linha horizontal
@author Felipe Gonçalves
*/
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <stdio.h>

void desenha(void){
    glClear(GL_COLOR_BUFFER_BIT);
    // gluOrtho(x,xf,y,yf) //começo

    // cores
    glColor3f(1.0f,1.0f,0.0f); // linha amarela

    // formas
    // F
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.9f, -0.9f);
        glVertex2f(-0.9f, 0.5f);
        glVertex2f(-0.6f, 0.5f);
        glVertex2f(-0.6f, 0.4f);
        glVertex2f(-0.8f, 0.4f);
        glVertex2f(-0.8f, 0.0f);
        glVertex2f(-0.6f, 0.0f);
        glVertex2f(-0.6f, -0.1f);
        glVertex2f(-0.8f, -0.1f);
        glVertex2f(-0.8f, -0.9f);
    glEnd();

    // E
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5f, -0.9f);
        glVertex2f(-0.5f, 0.5f);
        glVertex2f(-0.2f, 0.5f);
        glVertex2f(-0.2f, 0.4f);
        glVertex2f(-0.4f, 0.4f);
        glVertex2f(-0.4f, 0.0f);
        glVertex2f(-0.2f, 0.0f);
        glVertex2f(-0.2f, -0.1f);
        glVertex2f(-0.4f, -0.1f);
        glVertex2f(-0.4f, -0.8f);
        glVertex2f(-0.2f, -0.8f);
        glVertex2f(-0.2f, -0.9f);
    glEnd();

    // L
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.1f, -0.9f);
        glVertex2f(-0.1f, 0.5f);
        glVertex2f(0.0f, 0.5f);
        glVertex2f(0.0f, -0.8f);
        glVertex2f(0.2f, -0.8f);
        glVertex2f(0.2f, -0.9f);
    glEnd();
    glFlush();
}

int main(int argc, char *argv[])
{
    printf("Localizado:\n");
    printf("%s\n", argv[0]);

    glutInit(&argc, argv);
    glutInitWindowSize(720,720); // define o tamanho da janela
    glutInitWindowPosition(0,0); // posicao da janela
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // GLUT_DOUBLE = animaçao
    glutCreateWindow("Meus graficos");
    glutDisplayFunc(desenha);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    // UM ANO DEPOIS...
    glutMainLoop();

    return EXIT_SUCCESS;
}
