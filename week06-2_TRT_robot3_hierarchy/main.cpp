#include <GL/glut.h>
float angle = 0 ;
void myCube() ///��禡
{
    glPushMatrix();
        glScalef(1,0.3,0.3); ///�դj�p
        glutSolidCube(0.5); ///�����
    glPopMatrix();
}
void display()
{
    glClear ( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

    glutSolidSphere(0.01,30,30); ///�p�y�@�������I

    glPushMatrix();
        glTranslatef(0.25,0.0,0); ///�M�w�������
        glRotatef (angle,0,0,1) ; ///���
        glTranslatef(0.25,0,0); ///���k����0.25�����`�b������
        myCube(); ///��禡
        glPushMatrix();
            glTranslatef(0.25,0.0,0); ///�M�w�������
            glRotatef (angle,0,0,1) ; ///���
            glTranslatef(0.25,0,0); ///���k����0.25�����`�b������
            myCube(); ///��禡
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
