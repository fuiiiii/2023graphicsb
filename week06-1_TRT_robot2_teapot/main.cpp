#include <GL/glut.h>
float angle = 0 ;
void display()
{
    glClear ( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

    glutSolidSphere(0.01,30,30); ///�p�y�@�������I

    glPushMatrix();
        glTranslatef(0.5,0.5,0); ///���������(0.5,0.5,0)
        glRotatef (angle,0,0,1) ; ///���
        glTranslatef(0.45,0,0); ///���k����0.45�����`�b������
        glutSolidTeapot(0.3); ///�e����
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