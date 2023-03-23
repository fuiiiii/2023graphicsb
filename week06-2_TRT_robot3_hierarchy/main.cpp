#include <GL/glut.h>
float angle = 0 ;
void myCube() ///改函式
{
    glPushMatrix();
        glScalef(1,0.3,0.3); ///調大小
        glutSolidCube(0.5); ///正方塊
    glPopMatrix();
}
void display()
{
    glClear ( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

    glutSolidSphere(0.01,30,30); ///小球作為中心點

    glPushMatrix();
        glTranslatef(0.25,0.0,0); ///決定掛到哪裡
        glRotatef (angle,0,0,1) ; ///轉動
        glTranslatef(0.25,0,0); ///往右移動0.25讓關節在正中心
        myCube(); ///改函式
        glPushMatrix();
            glTranslatef(0.25,0.0,0); ///決定掛到哪裡
            glRotatef (angle,0,0,1) ; ///轉動
            glTranslatef(0.25,0,0); ///往右移動0.25讓關節在正中心
            myCube(); ///改函式
        glPopMatrix();
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
