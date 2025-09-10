/*
@brief Projeto GLUT
@note Desenha linha horizontal
@author Felipe Gonçalves
*/
//#ifdef __APPLE__
//#include <GLUT/glut.h>
//#else
#include <GL/glut.h>
//#endif
#include <stdlib.h>
#include <stdio.h>

GLfloat escala = 1;
GLfloat posx = 0, posy = 0, angle = 0;

void desenha(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    // gluOrtho(x,xf,y,yf) //começo

    // cores
    glColor3f(1.0f,1.0f,0.0f); // linha amarela

    glMatrixMode(GL_PROJECTION); // define a matrix da camera
    glLoadIdentity();
    gluOrtho2D(-10, 10, -10, 10); // escala inicial da matrix

    glTranslatef(posx, posy, 0);
    glScalef(escala, escala, 0);
    glRotatef(angle, 0, 0, 1);

    glMatrixMode(GL_MODELVIEW);// matrix dos objetos
    glLoadIdentity();

    // formas

    // F
    glBegin(GL_LINE_LOOP);
    glVertex2f(-9, -9); // ponto a
    glVertex2f(-9, 9); //ponto b
    glVertex2f(-5, 9); // ponto c
    glVertex2f(-5, 7); // ponto d
    glVertex2f(-7, 7); // ponto e
    glVertex2f(-7, 1); // ponto f
    glVertex2f(-5, 1); //ponto g
    glVertex2f(-5, -1); // ponto h
    glVertex2f(-7, -1); // ponto i
    glVertex2f(-7, -9); // ponto j
    glEnd();

    // E
    glBegin(GL_LINE_LOOP);
    glVertex2f(-3, -9); // a
    glVertex2f(-3, 9); // b
    glVertex2f(3, 9); // c
    glVertex2f(3, 7); // d
    glVertex2f(-1, 7); // e
    glVertex2f(-1, 1); // f
    glVertex2f(3, 1); // g
    glVertex2f(3, -1); // h
    glVertex2f(-1, -1); // i
    glVertex2f(-1, -7); // j
    glVertex2f(3, -7); // k
    glVertex2f(3, -9); // l
    glEnd();

    // L
    glBegin(GL_LINE_LOOP);
    glVertex2f(5, -9); // a
    glVertex2f(5, 9); // b
    glVertex2f(7, 9); // c
    glVertex2f(7, -7); // d
    glVertex2f(9, -7); // e
    glVertex2f(9, -9); //f
    glEnd();
    glFlush();
}

void listeningKey(unsigned char tecla, GLint x, GLint y)
{
    if(escala <= 1.0){
        escala = 1.0;
    }
    switch(tecla)
    {
    case 'm':
        escala++;
        break;
    case 'n':
        escala--;
        break;
    case 'a':
        posx++;
        break;
    case 'd':
        posx--;
        break;
    case 'w':
        posy++;
        break;
    case 's':
        posy--;
        break;
    case 'q':
        angle++;
        break;
    case 'e':
        angle--;
        break;
    }
    desenha();
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

    glutKeyboardFunc(listeningKey); // para ler o teclado

    glutDisplayFunc(desenha);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    // UM ANO DEPOIS...
    glutMainLoop();

    return EXIT_SUCCESS;
}
