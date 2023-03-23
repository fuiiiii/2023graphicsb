#include <GL/glut.h>
float angle = 0 ;
void display()
{
    glClear ( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

    glutSolidSphere(0.01,30,30); ///小球作為中心點

    glPushMatrix();
        glTranslatef(0.5,0.5,0); ///把茶壺掛到(0.5,0.5,0)
        glRotatef (angle,0,0,1) ; ///轉動
        glTranslatef(0.45,0,0); ///往右移動0.45讓關節在正中心
        glutSolidTeapot(0.3); ///畫茶壺
    glPopMatrix();

    glutSwapBuffers();
    angle++ ;
}
int main(int argc,char*argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week06");
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
