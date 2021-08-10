#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <GL/gl.h>
#include<math.h>
# define PI           3.14159265358979323846
 GLfloat j=0.0f;

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}


void speed(void)
{
   j +=.085;
			glutPostRedisplay();
			glRotatef(j, 0.0, 0.0, 1.0);
}

void speed2(void)
{
   j +=.9;
			glutPostRedisplay();
			glRotatef(j, 0.0, 0.0, 1.0);
}

// press "s" key to change the speed from low to medium
//press "s" again to change the speed from medium to Higf
int a=0;
void keyPress(unsigned char key, int x, int y)
{

	switch (key) {

		case 's':
                {
                    if(a==0)
                {
		            glutIdleFunc(speed);
                    a=1;
                }

        else
        {
             glutIdleFunc(speed2);
             a=1;
        }
        }

	}
}





void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

glLoadIdentity();
glBegin(GL_POLYGON); //back
glColor3ub(80, 26, 44);
glVertex2f(-1, -0.85);
glVertex2f(-1, -1);
glVertex2f(1, -1);
glVertex2f(1, -0.4);
glVertex2f(0.28, -0.28);
glEnd();
glLoadIdentity();
glBegin(GL_QUADS); //back
glColor3ub(80, 26, 44);
glVertex2f(0.28, 1);
glVertex2f(-1, 1);
glVertex2f(-1, -0.85);
glVertex2f(0.28, -0.28);
glEnd();
glLoadIdentity();
glBegin(GL_QUADS); //back
glColor3ub(143, 138, 139);
glVertex2f(0.28, 1);
glVertex2f(-1, 1);
glVertex2f(-1, -0.85);
glVertex2f(0.28, -0.28);
glEnd();
glLoadIdentity();
glBegin(GL_QUADS); //back
glColor3ub(102, 97, 98);
glVertex2f(0.28, 1);
glVertex2f(0.28, -0.28);
glVertex2f(1, -0.4);
glVertex2f(1, 1);
glEnd();
glLoadIdentity();

glBegin(GL_QUADS); //back tv
glColor3ub(29, 29, 30);
glVertex2f(0.375, 0.53);
glVertex2f(0.85, 0.51);
glVertex2f(0.85, -0.02);
glVertex2f(0.375, 0.03);
glEnd();
glLoadIdentity();

glBegin(GL_QUADS); //back tv
glColor3ub(76, 73, 73);
glVertex2f(0.4, 0.5);
glVertex2f(0.82, 0.48);
glVertex2f(0.82, 0.02);
glVertex2f(0.4, 0.06);
glEnd();
glLoadIdentity();


glBegin(GL_QUADS); //back desk
glColor3ub(89, 29, 9);
glVertex2f(0.42, -0.07);
glVertex2f(0.86, -0.1);
glVertex2f(0.78, -0.15);
glVertex2f(0.31, -0.11);
glEnd();
glLoadIdentity();

glBegin(GL_QUADS); //back desk
glColor3ub(107, 35, 11);
glVertex2f(0.78, -0.15);
glVertex2f(0.86, -0.1);
glVertex2f(0.86, -0.4);
glVertex2f(0.78, -0.48);
glEnd();
glLoadIdentity();

glBegin(GL_QUADS); //back desk
glColor3ub(81, 19, 5);
glVertex2f(0.31, -0.11);
glVertex2f(0.78, -0.15);
glVertex2f(0.78, -0.48);
glVertex2f(0.31, -0.4);
glEnd();
glLoadIdentity();

glLineWidth(0.5);
glBegin(GL_LINES); //back desk
glColor3ub(56, 19, 11);
glVertex2f(0.31, -0.23);
glVertex2f(0.78, -0.3);
glVertex2f(0.55, -0.13);
glVertex2f(0.55, -0.44);
glEnd();
glLoadIdentity();


glBegin(GL_POLYGON); //fan stand
glColor3ub(40, 128, 137);
glVertex2f(-0.14, -0.92);
glVertex2f(-0.14, -0.9);
glVertex2f(-0.1, -0.88);
glVertex2f(-0.04, -0.86);
glVertex2f(-0.015, -0.855);
glVertex2f(0.015, -0.855);
glVertex2f(0.04, -0.86);
glVertex2f(0.1, -0.88);
glEnd();
glLoadIdentity();
glBegin(GL_QUADS); //fan stand
glColor3ub(40, 128, 137);
glVertex2f(-0.14, -0.92);
glVertex2f(0.1, -0.88);
glVertex2f(0.14, -0.9);
glVertex2f(0.14, -0.92);
glEnd();
glLoadIdentity();

glBegin(GL_QUADS); //fan stand stwitch
glColor3ub(255, 37, 75);
glVertex2f(-0.04, -0.88);
glVertex2f(-0.03, -0.88);
glVertex2f(-0.03, -0.9);
glVertex2f(-0.04, -0.9);
glEnd();
glTranslatef(0.03,0,0);
glBegin(GL_QUADS); //fan stand stwitch
glColor3ub(255, 242, 78);
glVertex2f(-0.04, -0.88);
glVertex2f(-0.03, -0.88);
glVertex2f(-0.03, -0.9);
glVertex2f(-0.04, -0.9);
glEnd();
glTranslatef(0.03,0,0);
glBegin(GL_QUADS); //fan stand stwitch
glColor3ub(255, 37, 75);
glVertex2f(-0.04, -0.88);
glVertex2f(-0.03, -0.88);
glVertex2f(-0.03, -0.9);
glVertex2f(-0.04, -0.9);
glEnd();
glLoadIdentity();

glBegin(GL_POLYGON); //fan stand
glColor3ub(40, 128, 137);
glVertex2f(-0.015, -0.855);
glVertex2f(0.015, -0.855);
glVertex2f(0.015, -0.41);
glVertex2f(0.01, -0.4);
glVertex2f(-0.01, -0.4);
glVertex2f(-0.015, -0.41);
glEnd();
glLoadIdentity();

glBegin(GL_QUADS); //fan stand
glColor3ub(160, 181, 186);
glVertex2f(-0.01, -0.06);
glVertex2f(0.01, -0.06);
glVertex2f(0.01, -0.4);
glVertex2f(-0.01, -0.4);
glEnd();

glLoadIdentity();

glLineWidth(2.5);
glBegin(GL_LINES); //fan circle
glColor3ub(40, 128, 137);
glVertex2f(-0.15, 0.3);
glVertex2f(0.15, 0.3);
glVertex2f(0.15, 0.3);
glVertex2f(0.3, 0.1);
glVertex2f(0.3, 0.1);
glVertex2f(0.3, -0.1);
glVertex2f(0.3, -0.1);
glVertex2f(0.15, -0.3);
glVertex2f(0.15, -0.3);
glVertex2f(-0.15, -0.3);
glVertex2f(-0.15, -0.3);
glVertex2f(-0.3, -0.1);
glVertex2f(-0.3, -0.1);
glVertex2f(-0.3, 0.1);
glVertex2f(-0.3, 0.1);
glVertex2f(-0.15, 0.3);
glEnd();

glLoadIdentity();



glPushMatrix();

glTranslatef( 0.0f, 0.0f, 0.0f);
speed();
//glRotatef(j,0.0,0.0,0.1);

glBegin(GL_POLYGON);
glColor3ub(160, 181, 186);
glVertex2f(0.0, 0.0);
glVertex2f(-0.14, 0.22);
glVertex2f(-0.184, 0.227);
glVertex2f(-0.209, 0.17);
glVertex2f(-0.189, 0.102);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(160, 181, 186);
glVertex2f(0.0, 0.0);
glVertex2f(0.112, 0.25);
glVertex2f(0.152, 0.266);
glVertex2f(0.184, 0.21);
glVertex2f(0.172, 0.146);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(160, 181, 186);
glVertex2f(0.0, 0.0);
glVertex2f(-0.04, -0.2);
glVertex2f(-0.024, -0.275);
glVertex2f(0.045, -0.27);
glVertex2f(0.055, -0.19);
glEnd();

glPopMatrix();
//speed();
glLoadIdentity();

glLineWidth(1.5);
glBegin(GL_LINES); //fan middle lines
glColor3ub(40, 128, 137);
glVertex2f(0, 0);
glVertex2f(-0.15, 0.3);
glVertex2f(0, 0);
glVertex2f(0.15, 0.3);
glVertex2f(0, 0);
glVertex2f(0.3, 0.0);
glVertex2f(0, 0);
glVertex2f(-0.3, 0.0);
glVertex2f(0, 0);
glVertex2f(-0.15, -0.3);
glVertex2f(0, 0);
glVertex2f(0.15, -0.3);
glEnd();
glLoadIdentity();

int i;
    GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =0.06f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(115, 174, 181); // sunnnn
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

   GLfloat x1=.0f; GLfloat y1=.0f; GLfloat radius1 =0.04f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(173, 203, 206); // sunnnn
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            x1 + (radius1* cos(i *  twicePi1 / triangleAmount1)),
			    y1+ (radius1 * sin(i * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


glFlush();
}




int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Test");
    glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyPress);
	glutIdleFunc(Idle);
	glutKeyboardFunc(keyPress);
        glutMainLoop();

    return 0;
}
