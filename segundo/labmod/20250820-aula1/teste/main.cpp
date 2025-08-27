/*
@brief Projeto GLUT
@note Desenha linha horizontal
@author Felipe Gonçalves
*/

#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>

void desenha(void){
    glClear(GL_COLOR_BUFFER_BIT);

    //cores
    glColor3f(1.0f,1.0f,0.0f); // linha amarela

    // formas
    glBegin(GL_LINES);
        glVertex2f(-0.8f, -0.5f);
        glVertex2f(0.8f, 0.5f);
    glEnd();

    glFlush();
}

int main(int argc, char *argv[])
{
    printf("Localizado:\n");
    printf("%s\n", argv[0]);

    glutInit(&argc, argv);
    glutInitWindowSize(1080,720); // define o tamanho da janela
    glutInitWindowPosition(0,0); // posicao da janela
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // GLUT_DOUBLE = animaçao
    glutCreateWindow("Meus graficos");
    glutDisplayFunc(desenha);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    // UM ANO DEPOIS...
    glutMainLoop();

    return EXIT_SUCCESS;
}
