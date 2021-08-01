#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat j = 0.0f;
GLfloat k = 0.0f;
GLfloat l = 0.0f;
GLfloat m = 0.0f;
//plane
GLfloat position = 0.0f;
GLfloat speed = 0.02f;

//cloud1
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.001f;
//cloud2
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.001f;

//carriage car
GLfloat position3 = 0.0f;
GLfloat speed3 = 0.01f;

//carriage car 2
GLfloat position4 = 0.0f;
GLfloat speed4 = 0.01f;

//plane
void update(int value)
{

    if(position >1.0)
        position = -1.0f;

    position += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

//cloud 1
void update1(int value)
{

    if(position1 <-1.0)
        position1 = 1.0f;

    position1 -= speed1; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

//cloud 2
void update2(int value)
{

    if(position2 <-1.0)
        position2 = 1.0f;

    position2 -= speed2; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}

//carriage car
void update3(int value)
{

    if(position3 <-1.0)
        position3 = 1.0f;

    position3 -= speed3; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}

//carriage car 2
void update4(int value)
{
 if(position4 >1.0)
        position4 = -1.0f;

    position4 += speed4; //position=position-speed;1-.1=.9


	glutPostRedisplay();


	glutTimerFunc(100, update4, 0);
}


//plane
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'a':
    speed = 0.0f;
    break;
case 'd':
    speed = 0.02f;
    break;
glutPostRedisplay();
	}
}


//cloud
void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed2 += 0.003f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed2 -= 0.003f;
			}
	glutPostRedisplay();
	}

void Idle()
{
    glutPostRedisplay();
}


void night() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


glBegin(GL_QUADS); //road
glColor3ub(77,77,77);
glVertex2f( -1.0f, 0.1f );
glVertex2f( 1.0f, 0.1f );
glVertex2f( 1.0f, -0.9f );
glVertex2f( -1.0f, -0.9f );
glEnd();


glBegin(GL_QUADS); // road middle lane
glColor3ub(204, 163, 0);
glVertex2f( -1.0f, -0.34f );
glVertex2f( -1.0f, -0.36f );
glVertex2f( 1.0f, -0.36f );
glVertex2f( 1.0f, -0.34f );
glEnd();

glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( -1.0f, -0.3f );
glVertex2f( -1.0f, -0.32f );
glVertex2f( 1.0f, -0.32f );
glVertex2f( 1.0f, -0.3f );
glEnd();

glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( -0.047f, 0.1f );
glVertex2f( -0.04f, 0.1f );
glVertex2f( -0.114f, -0.085f );
glVertex2f( -0.12f, -0.074f );
glEnd();

glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( -0.114f, -0.085f );
glVertex2f( -0.12f, -0.074f );
glVertex2f( -1.0f, -0.074f );
glVertex2f( -1.0f, -0.085f );

glEnd();

glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( 0.35f, 0.1f );
glVertex2f( 0.357f, 0.1f );
glVertex2f( 0.4455f, -0.074f );
glVertex2f( 0.4395f, -0.085f );

glEnd();

glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( 0.25f, -0.6f );
glVertex2f( 0.45f, -0.6f );
glVertex2f( 0.44f, -0.64f );
glVertex2f( 0.24f, -0.64f );

glEnd();


glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( 0.4455f, -0.074f );
glVertex2f( 0.4395f, -0.085f );
glVertex2f( 1.0f, -0.085f );
glVertex2f( 1.0f, -0.074f );
glEnd();

//carriage 1 estart
glPushMatrix();
glTranslatef(position3,0,0);

glBegin(GL_QUADS); //carriage car
glColor3ub(233, 242, 247);
glVertex2f( 0.3f, -0.01f );
glVertex2f( 0.355f, -0.01f );
glVertex2f( 0.355f, -0.06f );
glVertex2f( 0.3f, -0.06f );
glEnd();


glBegin(GL_POLYGON); //carriage car
glColor3ub(233, 242, 247);
glVertex2f( 0.28f, 0.03f );
glVertex2f( 0.265f, -0.01f );
glVertex2f( 0.265f, -0.06f );
glVertex2f( 0.3f, -0.06f );
glVertex2f( 0.3f, 0.03f );
glEnd();

glBegin(GL_POLYGON); //carriage car
glColor3ub(69, 138, 179);
glVertex2f( 0.28f, 0.025f );
glVertex2f( 0.268f, -0.01f );
glVertex2f( 0.268f, -0.042f );
glVertex2f( 0.288f, -0.042f );
glVertex2f( 0.298f, -0.025f );
glVertex2f( 0.298f, 0.025f );
glEnd();

glBegin(GL_LINES); //carriage car
glColor3ub(89, 89, 89);
glVertex2f( 0.305f, -0.015f );
glVertex2f( 0.35f, -0.015f );
glVertex2f( 0.35f, -0.015f );
glVertex2f( 0.35f, -0.035f );
glVertex2f( 0.35f, -0.035f );
glVertex2f( 0.305f, -0.035f );
glVertex2f( 0.305f, -0.035f );
glVertex2f( 0.305f, -0.015f );
glEnd();


glBegin(GL_QUADS); //carriage car
glColor3ub(0, 0, 0);
glVertex2f( 0.355f, -0.045f );
glVertex2f( 0.39f, -0.045f );
glVertex2f( 0.39f, -0.05f );
glVertex2f( 0.355f, -0.05f );
glEnd();

glBegin(GL_QUADS); //carriage car
glColor3ub(204, 204, 204);
glVertex2f( 0.39f, -0.035f );
glVertex2f( 0.484f, -0.035f );
glVertex2f( 0.484f, -0.055f );
glVertex2f( 0.39f, -0.055f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(230, 115, 0);
glVertex2f( 0.286f, 0.04f );
glVertex2f( 0.292f, 0.04f );
glVertex2f( 0.292f, 0.03f );
glVertex2f( 0.286f, 0.03f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(153, 153, 102);
glVertex2f( 0.465f, 0.005f );
glVertex2f( 0.475f, 0.005f );
glVertex2f( 0.475f, -0.035f );
glVertex2f( 0.465f, -0.035f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(134, 89, 45);
glVertex2f( 0.445f, -0.02f );
glVertex2f( 0.465f, -0.02f );
glVertex2f( 0.465f, -0.035f );
glVertex2f( 0.445f, -0.035f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(204, 0, 0);
glVertex2f( 0.435f, 0.01f );
glVertex2f( 0.445f, 0.01f );
glVertex2f( 0.445f, -0.035f );
glVertex2f( 0.435f, -0.035f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(255, 153, 0);
glVertex2f( 0.425f, -0.005f );
glVertex2f( 0.435f, -0.005f );
glVertex2f( 0.435f, -0.035f );
glVertex2f( 0.425f, -0.035f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(51, 204, 204);
glVertex2f( 0.395f, -0.025f );
glVertex2f( 0.425f, -0.025f );
glVertex2f( 0.425f, -0.035f );
glVertex2f( 0.395f, -0.035f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(153, 102, 51);
glVertex2f( 0.395f, -0.025f );
glVertex2f( 0.42f, -0.025f );
glVertex2f( 0.42f, -0.015f );
glVertex2f( 0.395f, -0.015f );
glEnd();



int p;
GLfloat x19911111112=.285f; GLfloat y19911111112=-.062f; GLfloat radius19911111112 =0.011f;
	int triangleAmount19911111112= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19911111112 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // window
		glVertex2f(x19911111112, y19911111112); // center of circle
		for(p = 0; p<= triangleAmount19911111112;p++) {
			glVertex2f(
		            x19911111112 + (radius19911111112 * cos(p *  twicePi19911111112 / triangleAmount19911111112)),
			    y19911111112 + (radius19911111112 * sin(p * twicePi19911111112/ triangleAmount19911111112))
			);
		}
	glEnd();


	GLfloat x199111111123=.285f; GLfloat y199111111123=-.062f; GLfloat radius199111111123 =0.005f;
	int triangleAmount199111111123= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199111111123 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x199111111123, y199111111123); // center of circle
		for(p = 0; p<= triangleAmount199111111123;p++) {
			glVertex2f(
		            x199111111123 + (radius199111111123 * cos(p *  twicePi199111111123 / triangleAmount199111111123)),
			    y199111111123 + (radius199111111123 * sin(p * twicePi199111111123/ triangleAmount199111111123))
			);
		}
	glEnd();



	GLfloat x1992=.34f; GLfloat y1992=-.062f; GLfloat radius1992 =0.011f;
	int triangleAmount1992= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1992 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // window
		glVertex2f(x1992, y1992); // center of circle
		for(p = 0; p<= triangleAmount1992;p++) {
			glVertex2f(
		            x1992 + (radius1992 * cos(p *  twicePi1992 / triangleAmount1992)),
			    y1992 + (radius1992 * sin(p * twicePi1992/ triangleAmount1992))
			);
		}
	glEnd();


	GLfloat x19923=.34f; GLfloat y19923=-.062f; GLfloat radius19923 =0.005f;
	int triangleAmount19923= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19923 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x19923, y19923); // center of circle
		for(p = 0; p<= triangleAmount19923;p++) {
			glVertex2f(
		            x19923 + (radius19923 * cos(p *  twicePi19923 / triangleAmount19923)),
			    y19923 + (radius19923 * sin(p * twicePi19923/ triangleAmount19923))
			);
		}
	glEnd();


	GLfloat x199233=.47f; GLfloat y199233=-.062f; GLfloat radius199233 =0.011f;
	int triangleAmount199233= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199233 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // window
		glVertex2f(x199233, y199233); // center of circle
		for(p = 0; p<= triangleAmount199233;p++) {
			glVertex2f(
		            x199233 + (radius199233 * cos(p *  twicePi199233 / triangleAmount199233)),
			    y199233 + (radius199233 * sin(p * twicePi199233/ triangleAmount199233))
			);
		}
	glEnd();


	GLfloat x199232=.47f; GLfloat y199232=-.062f; GLfloat radius199232 =0.005f;
	int triangleAmount199232= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199232 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x199232, y199232); // center of circle
		for(p = 0; p<= triangleAmount199232;p++) {
			glVertex2f(
		            x199232 + (radius199232 * cos(p *  twicePi199232 / triangleAmount199232)),
			    y199232 + (radius199232 * sin(p * twicePi199232/ triangleAmount199232))
			);
		}
	glEnd();

glPopMatrix();
//carriage 1 end

//carriage 2 start
glPushMatrix();
glTranslatef(position4,0,0);

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(233, 242, 247);
glVertex2f( -0.53f, -0.03f );
glVertex2f( -0.35f, -0.03f );
glVertex2f( -0.35f, -0.06f );
glVertex2f( -0.53f, -0.06f );
glEnd();


glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(191, 191, 191);
glVertex2f( -0.49f, -0.04f );
glVertex2f( -0.37f, -0.04f );
glVertex2f( -0.37f, -0.05f );
glVertex2f( -0.49f, -0.05f );
glEnd();

glBegin(GL_LINES); //carriage car Stairs middle
glColor3ub(140, 140, 140);
glVertex2f( -0.49f, -0.04f );
glVertex2f( -0.37f, -0.04f );
glVertex2f( -0.37f, -0.04f );
glVertex2f( -0.37f, -0.05f );
glVertex2f( -0.37f, -0.05f );
glVertex2f( -0.49f, -0.05f );
glVertex2f( -0.49f, -0.04f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(255, 102, 0);
glVertex2f( -0.335f, 0.035f );
glVertex2f( -0.325f, 0.035f );
glVertex2f( -0.325f, 0.02f );
glVertex2f( -0.335f, 0.02f );
glEnd();

glBegin(GL_POLYGON); //carriage car Stairs front
glColor3ub(233, 242, 247);
glVertex2f( -0.35f, 0.02f );
glVertex2f( -0.32f, 0.02f );
glVertex2f( -0.3f, -0.02f );
glVertex2f( -0.3f, -0.06f );
glVertex2f( -0.35f, -0.06f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs top left
glColor3ub(230, 230, 230);
glVertex2f( -0.534f, 0.005f );
glVertex2f( -0.41f, 0.1f );
glVertex2f( -0.41f, 0.055f );

glVertex2f( -0.534f, -0.045f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs top right
glColor3ub(230, 230, 230);
glVertex2f( -0.41f, 0.1f );
glVertex2f( -0.41f, 0.055f );
glVertex2f( -0.36f, 0.055f );
glVertex2f( -0.36f, 0.1f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs top right
glColor3ub(26, 26, 26);
glVertex2f( -0.406f, 0.055f );
glVertex2f( -0.4f, 0.055f );
glVertex2f( -0.4f, -0.0298f );
glVertex2f( -0.406f, -0.0295f );
glEnd();

glBegin(GL_POLYGON); //carriage car glasses
glColor3ub(255, 224, 102);
glVertex2f( -0.345f, 0.01f );
glVertex2f( -0.32f, 0.01f );
glVertex2f( -0.305f, -0.02f );
glVertex2f( -0.305f, -0.04f );
glVertex2f( -0.335f, -0.04f );
glVertex2f( -0.345f, -0.03f );

glEnd();

glBegin(GL_LINES); //carriage car glasses
glColor3ub(255, 224, 102);
glVertex2f( -0.406f, 0.095f );
glVertex2f( -0.364f, 0.095f );

glVertex2f( -0.364f, 0.095f );
glVertex2f( -0.364f, 0.06f );

glVertex2f( -0.364f, 0.06f );
glVertex2f( -0.406f, 0.06f );

glVertex2f( -0.406f, 0.06f );
glVertex2f( -0.406f, 0.095f );


glEnd();



glBegin(GL_LINES); //carriage car glasses
glColor3ub(255, 224, 102);
glVertex2f( -0.42f, 0.08f );
glVertex2f( -0.52f, 0.0f );

glVertex2f( -0.42f, 0.06f );
glVertex2f( -0.52f, -0.02f );

glEnd();

	GLfloat x1992323=-.507f; GLfloat y1992323=-.062f; GLfloat radius1992323 =0.011f;
	int triangleAmount1992323= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1992323 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // window
		glVertex2f(x1992323, y1992323); // center of circle
		for(p = 0; p<= triangleAmount199232;p++) {
			glVertex2f(
		            x1992323 + (radius1992323 * cos(p *  twicePi1992323 / triangleAmount1992323)),
			    y1992323 + (radius1992323 * sin(p * twicePi1992323/ triangleAmount1992323))
			);
		}
	glEnd();




	GLfloat x1992321=-.507f; GLfloat y1992321=-.062f; GLfloat radius1992321 =0.005f;
	int triangleAmount1992321= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1992321 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x1992321, y1992321); // center of circle
		for(p = 0; p<= triangleAmount1992321;p++) {
			glVertex2f(
		            x1992321 + (radius1992321 * cos(p *  twicePi1992321 / triangleAmount1992321)),
			    y1992321 + (radius1992321 * sin(p * twicePi1992321/ triangleAmount1992321))
			);
		}
	glEnd();

	GLfloat x19923211=-.32f; GLfloat y19923211=-.062f; GLfloat radius19923211 =0.011f;
	int triangleAmount19923211= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19923211 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // window
		glVertex2f(x19923211, y19923211); // center of circle
		for(p = 0; p<= triangleAmount19923211;p++) {
			glVertex2f(
		            x19923211 + (radius19923211 * cos(p *  twicePi19923211 / triangleAmount19923211)),
			    y19923211 + (radius19923211 * sin(p * twicePi19923211/ triangleAmount19923211))
			);
		}
	glEnd();


	GLfloat x19923232=-.32f; GLfloat y19923232=-.062f; GLfloat radius19923232 =0.005f;
	int triangleAmount19923232= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19923232 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x19923232, y19923232); // center of circle
		for(p = 0; p<= triangleAmount199232;p++) {
			glVertex2f(
		            x19923232 + (radius19923232 * cos(p *  twicePi19923232 / triangleAmount19923232)),
			    y19923232 + (radius19923232 * sin(p * twicePi19923232/ triangleAmount19923232))
			);
		}
	glEnd();

	glPopMatrix();
	//carriage2 end

glBegin(GL_QUADS); //grass
glColor3ub(89, 192, 89);
glVertex2f( -1.0f, -0.9f );
glVertex2f( 1.0f, -0.9f );
glVertex2f( 1.0f, -1.0f );
glVertex2f( -1.0f, -1.0f );
glEnd();



glBegin(GL_QUADS); //sky
glColor3ub(0, 0, 102);
glVertex2f( -1.0f, 1.0f );
glVertex2f( 1.0f, 1.0f );
glVertex2f( 1.0f, 0.1f );
glVertex2f( -1.0f, 0.1f );
glEnd();

glBegin(GL_TRIANGLES); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( -1.0f, 0.4f );
glVertex2f( -0.5f, 0.1f );
glVertex2f( -1.0f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( -0.9f, 0.1f );
glVertex2f( -0.2f, 0.4f );
glVertex2f( 0.36f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( -0.325f, 0.1f );
glVertex2f( 0.1f, 0.45f );
glVertex2f( 0.4f, 0.16f );

glEnd();

glBegin(GL_TRIANGLES); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( 0.13f, 0.1f );
glVertex2f( 0.55f, 0.4f );
glVertex2f( 0.9f, 0.1f );

glEnd();

glBegin(GL_QUADS); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( 0.36f, 0.1f );
glVertex2f( 0.75f, 0.4f );
glVertex2f( 1.0f, 0.3f );
glVertex2f( 1.0f, 0.1f );
glEnd();

glBegin(GL_QUADS); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( 0.68f, 0.1f );
glVertex2f( 0.95f, 0.35f );
glVertex2f( 1.0f, 0.3f );
glVertex2f( 1.0f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( 0.9f, 0.1f );
glVertex2f( 1.0f, 0.4f );
glVertex2f( 1.0f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountains1
glColor3ub(126, 206, 126);
glVertex2f( -1.0f, 0.3f );
glVertex2f( -0.8f, 0.1f );
glVertex2f( -1.0f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountains1
glColor3ub(126, 206, 126);
glVertex2f( -0.8f, 0.1f );
glVertex2f( -0.54f, 0.3f );
glVertex2f( 0.68f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountains1
glColor3ub(126, 206, 126);
glVertex2f( 0.17f, 0.1f );
glVertex2f( 0.36f, 0.35f );
glVertex2f( 0.9f, 0.1f );

glEnd();


glBegin(GL_TRIANGLES); //mountains1
glColor3ub(126, 206, 126);
glVertex2f( 0.654f, 0.1f );
glVertex2f( 0.9f, 0.25f );
glVertex2f( 1.0f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountains1
glColor3ub(126, 206, 126);
glVertex2f( 0.9f, 0.1f );
glVertex2f( 1.0f, 0.25f );
glVertex2f( 1.0f, 0.1f );

glEnd();

glBegin(GL_QUADS); //road1
glColor3ub(204, 163, 0);
glVertex2f( -0.3f, -0.6f );
glVertex2f( -0.1f, -0.6f );
glVertex2f( -0.11f, -0.65f );
glVertex2f( -0.31f, -0.65f );

glEnd();

glBegin(GL_QUADS); //road2
glColor3ub(204, 163, 0);
glVertex2f( -0.7f, -0.6f );
glVertex2f( -0.5f, -0.6f );
glVertex2f( -0.51f, -0.65f );
glVertex2f( -0.71f, -0.65f );

glEnd();

glBegin(GL_QUADS); //road3
glColor3ub(204, 163, 0);
glVertex2f( 0.8f, -0.6f );
glVertex2f( 1.0f, -0.6f );
glVertex2f( 1.0f, -0.65f );
glVertex2f( 0.79f, -0.65f );
glEnd();

glBegin(GL_QUADS); //road4
glColor3ub(204, 163, 0);
glVertex2f( -1.0f, -0.6f );
glVertex2f( -0.9f, -0.6f );
glVertex2f( -0.91f, -0.65f );
glVertex2f( -1.0f, -0.65f );
glEnd();

//plane start
glPushMatrix();
glTranslatef(position,0,0);

glBegin(GL_QUADS); //plane
glColor3ub(233, 242, 247);
glVertex2f( 0.23f, -0.5f );
glVertex2f( 0.6f, -0.5f );
glVertex2f( 0.6f, -0.645f );
glVertex2f( 0.23f, -0.645f );
glEnd();

glBegin(GL_QUADS); //plane Back
glColor3ub(233, 242, 247);
glVertex2f( 0.13f, -0.5f );
glVertex2f( 0.23f, -0.5f );
glVertex2f( 0.23f, -0.645f );
glVertex2f( 0.14f, -0.552f );
glEnd();


glBegin(GL_QUADS); //plane  front
glColor3ub(233, 242, 247);
glVertex2f( 0.6f, -0.5f );
glVertex2f( 0.66f, -0.585f );
glVertex2f( 0.65f, -0.61f );
glVertex2f( 0.6f, -0.645f );

glEnd();

glBegin(GL_QUADS); //plane  wings
glColor3ub(69, 138, 179);
glVertex2f( 0.44f, -0.62f );
glVertex2f( 0.55f, -0.62f );
glVertex2f( 0.37f, -0.85f );
glVertex2f( 0.34f, -0.85f );

glEnd();

glBegin(GL_QUADS); //plane  wings2
glColor3ub(69, 138, 179);
glVertex2f( 0.42f, -0.5f );
glVertex2f( 0.52f, -0.5f );
glVertex2f( 0.315f, -0.38f );
glVertex2f( 0.285f, -0.38f );

glEnd();

glBegin(GL_QUADS); //plane  wings3
glColor3ub(69, 138, 179);
glVertex2f( 0.104f, -0.615f );
glVertex2f( 0.124f, -0.615f );
glVertex2f( 0.21f, -0.545f );
glVertex2f( 0.158f, -0.545f );

glEnd();

glBegin(GL_QUADS); //plane backup wings5
glColor3ub(69, 138, 179);
glVertex2f( 0.12f, -0.41f );
glVertex2f( 0.16f, -0.41f );
glVertex2f( 0.23f, -0.5f );
glVertex2f( 0.13f, -0.5f );

glEnd();

glBegin(GL_QUADS); //plane front glass
glColor3ub(255, 224, 102);
glVertex2f( 0.54f, -0.51f );
glVertex2f( 0.607f, -0.51f );
glVertex2f( 0.6496f, -0.57f );
glVertex2f( 0.57f, -0.57f );

glEnd();

glBegin(GL_QUADS); //plane window right to left 1
glColor3ub(255, 224, 102);
glVertex2f( 0.485f, -0.52f );
glVertex2f( 0.515f, -0.52f );
glVertex2f( 0.515f, -0.56f );
glVertex2f( 0.485f, -0.56f );
glEnd();


glBegin(GL_QUADS); //plane window right to left 2
glColor3ub(255, 224, 102);
glVertex2f( 0.44f, -0.52f );
glVertex2f( 0.47f, -0.52f );
glVertex2f( 0.47f, -0.56f );
glVertex2f( 0.44f, -0.56f );
glEnd();


glBegin(GL_QUADS); //plane window right to left 3
glColor3ub(255, 224, 102);
glVertex2f( 0.395f, -0.52f );
glVertex2f( 0.425f, -0.52f );
glVertex2f( 0.425f, -0.56f );
glVertex2f( 0.395f, -0.56f );
glEnd();

glBegin(GL_QUADS); //plane window right to left 4
glColor3ub(255, 224, 102);
glVertex2f( 0.35f, -0.52f );
glVertex2f( 0.38f, -0.52f );
glVertex2f( 0.38f, -0.56f );
glVertex2f( 0.35f, -0.56f );
glEnd();

glBegin(GL_QUADS); //plane window right to left 5
glColor3ub(255, 224, 102);
glVertex2f( 0.305f, -0.52f );
glVertex2f( 0.335f, -0.52f );
glVertex2f( 0.335f, -0.56f );
glVertex2f( 0.305f, -0.56f );
glEnd();

glBegin(GL_QUADS); //plane window right to left 4
glColor3ub(255, 224, 102);
glVertex2f( 0.26f, -0.52f );
glVertex2f( 0.29f, -0.52f );
glVertex2f( 0.29f, -0.56f );
glVertex2f( 0.26f, -0.56f );
glEnd();


glBegin(GL_QUADS); //wheels
glColor3ub(153, 153, 153);
glVertex2f( 0.5865f, -0.645f );
glVertex2f( 0.596f, -0.645f );
glVertex2f( 0.596f, -0.661f );
glVertex2f( 0.5865f, -.661f );
glEnd();

glBegin(GL_QUADS); //wheels
glColor3ub(153, 153, 153);
glVertex2f( 0.238f, -0.645f );
glVertex2f( 0.2465f, -0.645f );
glVertex2f( 0.2465f, -0.661f );
glVertex2f( 0.238f, -.661f );
glEnd();


  int i;
	GLfloat x4=.2415f; GLfloat y4=-.6755f; GLfloat radius4 =0.015f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // wheels plane
		glVertex2f(x4, y4); // center of circle
		for(i = 0; i <= triangleAmount4;i++) {
			glVertex2f(
		            x4 + (radius4 * cos(i *  twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(i * twicePi4 / triangleAmount4))
			);
		}
	glEnd();


	GLfloat x44=.2415f; GLfloat y44=-.6755f; GLfloat radius44 =0.006f;
	int triangleAmount44 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi44 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // wheels plane
		glVertex2f(x44, y44); // center of circle
		for(i = 0; i <= triangleAmount44;i++) {
			glVertex2f(
		            x44 + (radius44 * cos(i *  twicePi44 / triangleAmount44)),
			    y44 + (radius44 * sin(i * twicePi44 / triangleAmount44))
			);
		}
	glEnd();

		GLfloat x5=.5915f; GLfloat y5=-.6752f; GLfloat radius5 =0.015f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // wheels plane
		glVertex2f(x5, y5); // center of circle
		for(i = 0; i <= triangleAmount5;i++) {
			glVertex2f(
		            x5+ (radius5 * cos(i *  twicePi5 / triangleAmount5)),
			    y5+ (radius5 * sin(i * twicePi5 / triangleAmount5))
			);
		}
	glEnd();


		GLfloat x55=.5915f; GLfloat y55=-.6752f; GLfloat radius55 =0.006f;
	int triangleAmount55 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi55 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // wheels plane
		glVertex2f(x55, y55); // center of circle
		for(i = 0; i <= triangleAmount55;i++) {
			glVertex2f(
		            x55+ (radius55 * cos(i *  twicePi55 / triangleAmount55)),
			    y5+ (radius55 * sin(i * twicePi55 / triangleAmount55))
			);
		}
	glEnd();

glPopMatrix();
//plane end

	//cloud 2 start
glPushMatrix();
glTranslatef(position2,0,0);
	GLfloat x9=0.11f; GLfloat y9=0.74f; GLfloat radius9 =0.035f;
	int triangleAmount9 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x9, y9); // center of circle
		for(i = 0; i <= triangleAmount9;i++) {
			glVertex2f(
		            x9 + (radius9 * cos(i *  twicePi9 / triangleAmount9)),
			    y9 + (radius9 * sin(i * twicePi9 / triangleAmount9))
			);
		}
	glEnd();


		GLfloat x10=0.07f; GLfloat y10=0.72f; GLfloat radius10 =0.035f;
	int triangleAmount10 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // windmill
		glVertex2f(x10, y10); // center of circle
		for(i = 0; i <= triangleAmount10;i++) {
			glVertex2f(
		            x10 + (radius10 * cos(i *  twicePi10 / triangleAmount10)),
			    y10 + (radius10 * sin(i * twicePi10 / triangleAmount10))
			);
		}
	glEnd();


	GLfloat x11=0.13f; GLfloat y11=0.72f; GLfloat radius11 =0.035f;
	int triangleAmount11 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // windmill
		glVertex2f(x11, y11); // center of circle
		for(i = 0; i <= triangleAmount11;i++) {
			glVertex2f(
		            x11 + (radius11 * cos(i *  twicePi11 / triangleAmount11)),
			    y11 + (radius11 * sin(i * twicePi11 / triangleAmount11))
			);
		}
	glEnd();


	GLfloat x12=0.15f; GLfloat y12=0.76f; GLfloat radius12 =0.035f;
	int triangleAmount12 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x12, y12); // center of circle
		for(i = 0; i <= triangleAmount12;i++) {
			glVertex2f(
		            x12 + (radius12* cos(i *  twicePi12 / triangleAmount12)),
			    y12 + (radius12 * sin(i * twicePi12 / triangleAmount12))
			);
		}
	glEnd();


	GLfloat x13=0.18f; GLfloat y13=0.72f; GLfloat radius13 =0.035f;
	int triangleAmount13 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // windmill
		glVertex2f(x13, y13); // center of circle
		for(i = 0; i <= triangleAmount13;i++) {
			glVertex2f(
		            x13 + (radius13* cos(i *  twicePi13 / triangleAmount13)),
			    y13 + (radius13 * sin(i * twicePi13 / triangleAmount13))
			);
		}
	glEnd();

	GLfloat x14=0.2f; GLfloat y14=0.72f; GLfloat radius14=0.035f;
	int triangleAmount14 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi14 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x14, y14); // center of circle
		for(i = 0; i <= triangleAmount14;i++) {
			glVertex2f(
		            x14 + (radius14* cos(i *  twicePi14 / triangleAmount14)),
			    y14 + (radius14 * sin(i * twicePi14 / triangleAmount14))
			);
		}
	glEnd();

		GLfloat x15=0.075f; GLfloat y15=0.735f; GLfloat radius15=0.035f;
	int triangleAmount15 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi15 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x15, y15); // center of circle
		for(i = 0; i <= triangleAmount15;i++) {
			glVertex2f(
		            x15 + (radius15* cos(i *  twicePi15 / triangleAmount15)),
			    y15 + (radius15 * sin(i * twicePi15 / triangleAmount15))
			);
		}
	glEnd();

	GLfloat x16=0.075f; GLfloat y16=0.735f; GLfloat radius16=0.035f;
	int triangleAmount16 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi16 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x16, y16); // center of circle
		for(i = 0; i <= triangleAmount16;i++) {
			glVertex2f(
		            x16 + (radius16* cos(i *  twicePi16 / triangleAmount16)),
			    y16 + (radius16 * sin(i * twicePi16 / triangleAmount16))
			);
		}
	glEnd();
glPopMatrix();


	//cloud 2 end



glBegin(GL_QUADS); // middle road
glColor3ub(51, 51, 51);
glVertex2f( -1.0f, 0.1f );
glVertex2f( -1.0f, 0.085f );
glVertex2f( 1.0f, 0.085f );
glVertex2f( 1.0f, 0.1f );

glEnd();

glBegin(GL_QUADS); // middle building
glColor3ub(255, 224, 102);
glVertex2f( -0.05f, 0.1f );
glVertex2f( 0.0f, 0.34f );
glVertex2f( 0.3f, 0.34f );
glVertex2f( 0.36f, 0.1f );
glEnd();

glBegin(GL_LINES);// line mioddle builidng;
glColor3ub(255, 255, 255);
glVertex2f( 0.05f, 0.32f );
glVertex2f( 0.05f, 0.1f );
glVertex2f( 0.09f, 0.32f );
glVertex2f( 0.09f, 0.1f );
glVertex2f( 0.13f, 0.32f );
glVertex2f( 0.13f, 0.1f );
glVertex2f( 0.17f, 0.32f );
glVertex2f( 0.17f, 0.1f );
glVertex2f( 0.21f, 0.32f );
glVertex2f( 0.21f, 0.1f );
glVertex2f( 0.25f, 0.32f );
glVertex2f( 0.25f, 0.1f );
glVertex2f( 0.005f, 0.32f );
glVertex2f( 0.005f, 0.1f );
glVertex2f( 0.295f, 0.32f );
glVertex2f( 0.295f, 0.1f );
glEnd();

glBegin(GL_TRIANGLES); // middle building side
glColor3ub(255, 187, 51);
glVertex2f( 0.005f, 0.32f );
glVertex2f( 0.005f, 0.1f );
glVertex2f( -0.04f, 0.1f );
glEnd();

glBegin(GL_TRIANGLES); // middle building side
glColor3ub(255, 187, 51);
glVertex2f( 0.295f, 0.32f );
glVertex2f( 0.35f, 0.1f );
glVertex2f( 0.295f, 0.1f );
glEnd();

glBegin(GL_QUADS); // right building
glColor3ub(255, 255, 255);
glVertex2f( 0.33f, 0.22f );
glVertex2f( 0.36f, 0.1f );
glVertex2f( 0.654f, 0.1f );
glVertex2f( 0.654f, 0.22f );
glEnd();

glBegin(GL_QUADS); // right building glass 1
glColor3ub(255, 224, 102);
glVertex2f( 0.33f, 0.21f );
glVertex2f( 0.34f, 0.15f );
glVertex2f( 0.65f, 0.15f );
glVertex2f( 0.65f, 0.21f );
glEnd();

glBegin(GL_QUADS); // right building glass 2
glColor3ub(255, 224, 102);
glVertex2f( 0.34f, 0.145f );
glVertex2f( 0.351f, 0.105f );
glVertex2f( 0.65f, 0.105f );
glVertex2f( 0.65f, 0.145f );
glEnd();


glBegin(GL_QUADS); // left building
glColor3ub(255, 255, 255);
glVertex2f( -0.325f, 0.22f );
glVertex2f( -0.025f, 0.22f );
glVertex2f( -0.05f, 0.1f );
glVertex2f( -0.325f, 0.1f );

glEnd();

glBegin(GL_QUADS); // left building glass 1
glColor3ub(255, 224, 102);
glVertex2f( -0.027f, 0.21f );
glVertex2f( -0.04f, 0.15f );
glVertex2f( -0.32f, 0.15f );
glVertex2f( -0.32f, 0.21f );

glEnd();

glBegin(GL_QUADS); // left building glass 1
glColor3ub(255, 224, 102);
glVertex2f( -0.32f, 0.145f );
glVertex2f( -0.32f, 0.105f );
glVertex2f( -0.05f, 0.105f );
glVertex2f( -0.04f, 0.145f );

glEnd();


glBegin(GL_QUADS); // tower
glColor3ub(255, 255, 255);
glVertex2f( 0.34f, 0.22f );
glVertex2f( 0.4f, 0.22f );
glVertex2f( 0.39f, 0.51f );
glVertex2f( 0.35f, 0.51f );
glEnd();

glBegin(GL_QUADS); // tower2
glColor3ub(233, 242, 247);
glVertex2f( 0.33f, 0.595f );
glVertex2f( 0.41f, 0.595f );
glVertex2f( 0.39f, 0.51f );
glVertex2f( 0.35f, 0.51f );
glEnd();

glBegin(GL_QUADS); // tower3
glColor3ub(255, 255, 255);
glVertex2f( 0.33f, 0.74f );
glVertex2f( 0.41f, 0.74f );
glVertex2f( 0.41f, 0.595f );
glVertex2f( 0.33f, 0.595f );
glEnd();

glBegin(GL_QUADS); // tower3 glass 1
glColor3ub(255, 224, 102);
glVertex2f( 0.332f, 0.73f );
glVertex2f( 0.332f, 0.7f );
glVertex2f( 0.408f, 0.7f );
glVertex2f( 0.408f, 0.73f );
glEnd();

glBegin(GL_QUADS); // tower3 glass 2
glColor3ub(255, 224, 102);
glVertex2f( 0.332f, 0.676f );
glVertex2f( 0.332f, 0.64f );
glVertex2f( 0.408f, 0.64f );
glVertex2f( 0.408f, 0.676f );
glEnd();

glBegin(GL_QUADS); // tower3 glass 3
glColor3ub(255, 224, 102);
glVertex2f( 0.332f, 0.636f );
glVertex2f( 0.332f, 0.602f );
glVertex2f( 0.408f, 0.602f );
glVertex2f( 0.408f, 0.636f );
glEnd();


glBegin(GL_QUADS); // tower4
glColor3ub(233, 242, 247);
glVertex2f( 0.325f, 0.75f );
glVertex2f( 0.415f, 0.75f );
glVertex2f( 0.415f, 0.74f );
glVertex2f( 0.325f, 0.74f );
glEnd();


glBegin(GL_TRIANGLES); // topwer point
glColor3ub(255, 255, 255);
glVertex2f( 0.365f, 0.75f );
glVertex2f( 0.375f, 0.75f );
glVertex2f( 0.37f, 0.88f );

glEnd();

glBegin(GL_QUADS); // tower
glColor3ub(255, 255, 255);
glVertex2f( 0.0f, 0.34f );
glVertex2f( 0.3f, 0.34f );
glVertex2f( 0.295f, 0.32f );
glVertex2f( 0.005f, 0.32f );
glEnd();

glBegin(GL_QUADS); // tower
glColor3ub(233, 242, 247);
glVertex2f( 0.0f, 0.34f );
glVertex2f( 0.005f, 0.32f );
glVertex2f( -0.04f, 0.1f );
glVertex2f( -0.05f, 0.1f );
glEnd();

glBegin(GL_QUADS); // tower
glColor3ub(233, 242, 247);
glVertex2f( 0.295f, 0.32f );
glVertex2f( 0.35f, 0.1f );
glVertex2f( 0.36f, 0.1f );
glVertex2f( 0.3f, 0.34f );
glEnd();




glBegin(GL_QUADS); // clock building
glColor3ub(240, 251, 255);
glVertex2f( 0.67f, 0.22f );
glVertex2f( 0.93f, 0.22f );
glVertex2f( 0.93f, 0.1f );
glVertex2f( 0.67f, 0.1f );
glEnd();

glBegin(GL_LINES); // clock building
glColor3ub(204, 204, 204);
glVertex2f( 0.67f, 0.22f );
glVertex2f( 0.93f, 0.22f );
glVertex2f( 0.93f, 0.22f );
glVertex2f( 0.93f, 0.1f );
glVertex2f( 0.67f, 0.1f );
glVertex2f( 0.67f, 0.22f );
glEnd();

glBegin(GL_LINES); // clock building LINEESSSS
glColor3ub(255, 255, 255);
glVertex2f( 0.76f, 0.255f );
glVertex2f( 0.76f, 0.102f );
glVertex2f( 0.78f, 0.255f );
glVertex2f( 0.78f, 0.102f );
glVertex2f( 0.8f, 0.255f );
glVertex2f( 0.8f, 0.102f );
glVertex2f( 0.82f, 0.255f );
glVertex2f( 0.82f, 0.102f );
glVertex2f( 0.84f, 0.255f );
glVertex2f( 0.84f, 0.102f );
glEnd();



glBegin(GL_POLYGON); // clock tower 1
glColor3ub(240, 251, 255);
glVertex2f( 0.76f, 0.69f );
glVertex2f( 0.76f, 0.54f );
glVertex2f( 0.765f, 0.53f );
glVertex2f( 0.835f, 0.53f );
glVertex2f( 0.84f, 0.54f );
glVertex2f( 0.84f, 0.69f );
glEnd();

glBegin(GL_QUADS); // clock tower 2
glColor3ub(240, 251, 255);
glVertex2f( 0.765f, 0.53f );
glVertex2f( 0.765f, 0.22f );
glVertex2f( 0.835f, 0.22f );
glVertex2f( 0.835f, 0.53f );
glEnd();

glBegin(GL_QUADS); // clock tpwer top up
glColor3ub(240, 251, 255);
glVertex2f( 0.76f, 0.705f );
glVertex2f( 0.76f, 0.74f );
glVertex2f( 0.84f, 0.74f );
glVertex2f( 0.84f, 0.705f );
glEnd();

glBegin(GL_TRIANGLES); // clock tpwer top up 2
glColor3ub(236, 242, 243);
glVertex2f( 0.772f, 0.705f );
glVertex2f( 0.828f, 0.705f );
glVertex2f( 0.8f, 0.88f );
glEnd();

glBegin(GL_LINES); // clock tpwer top up 2 LINEEEE
glColor3ub(217, 217, 217);
glVertex2f( 0.772f, 0.705f );
glVertex2f( 0.8f, 0.88f );
glVertex2f( 0.8f, 0.88f );
glVertex2f( 0.828f, 0.705f );
glEnd();

glBegin(GL_POLYGON); // clock tpwer top up hole
glColor3ub(97, 185, 231);
glVertex2f( 0.792f, 0.76f );
glVertex2f( 0.808f, 0.76f );
glVertex2f( 0.808f, 0.795f );
glVertex2f( 0.8f, 0.815f );
glVertex2f( 0.792f, 0.795f );

glEnd();


glBegin(GL_TRIANGLES); // clock tpwer top up 3
glColor3ub(236, 242, 243);
glVertex2f( 0.77f, 0.705f );
glVertex2f( 0.83f, 0.705f );
glVertex2f( 0.8f, 0.77f );
glEnd();

glBegin(GL_LINES); // clock tpwer top up 3 LINE
glColor3ub(204, 204, 204);
glVertex2f( 0.77f, 0.705f );
glVertex2f( 0.8f, 0.77f );
glVertex2f( 0.8f, 0.77f );
glVertex2f( 0.83f, 0.705f );
glEnd();


glBegin(GL_QUADS); // clock tower top1
glColor3ub(233, 242, 247);
glVertex2f( 0.755f, 0.695f );
glVertex2f( 0.755f, 0.69f );
glVertex2f( 0.845f, 0.69f );
glVertex2f( 0.845f, 0.695f );
glEnd();

glBegin(GL_LINES); // clock tower top1 LINEEEE
glColor3ub(204, 204, 204);
glVertex2f( 0.755f, 0.695f );
glVertex2f( 0.845f, 0.695f );
glVertex2f( 0.755f, 0.69f );
glVertex2f( 0.845f, 0.69f );

glEnd();



glBegin(GL_QUADS); // clock tower top2
glColor3ub(233, 242, 247);
glVertex2f( 0.745f, 0.705f );
glVertex2f( 0.745f, 0.695f );
glVertex2f( 0.855f, 0.695f );
glVertex2f( 0.855f, 0.705f );
glEnd();

glBegin(GL_LINES); // clock tower top2 LINEEEE
glColor3ub(204, 204, 204);
glVertex2f( 0.745f, 0.705f );
glVertex2f( 0.855f, 0.705f );
glVertex2f( 0.745f, 0.695f );
glVertex2f( 0.855f, 0.695f );

glEnd();



glBegin(GL_QUADS); // clock
glColor3ub(223, 232, 236);
glVertex2f( 0.765f, 0.68f );
glVertex2f( 0.765f, 0.56f );
glVertex2f( 0.835f, 0.56f );
glVertex2f( 0.835f, 0.68f );
glEnd();

glBegin(GL_LINES); // clock LINESSSS
glColor3ub(204, 204, 204);
glVertex2f( 0.765f, 0.68f );
glVertex2f( 0.765f, 0.56f );
glVertex2f( 0.765f, 0.56f );
glVertex2f( 0.835f, 0.56f );
glVertex2f( 0.835f, 0.56f );
glVertex2f( 0.835f, 0.68f );
glEnd();

glBegin(GL_LINES); // clock ticks
glColor3ub(115, 115, 115);
glVertex2f( 0.792f, 0.675f );
glVertex2f( 0.798f, 0.66f );

glVertex2f( 0.798f, 0.675f );
glVertex2f( 0.792f, 0.66f );

glVertex2f( 0.802f, 0.675f );
glVertex2f( 0.802f, 0.66f );

glVertex2f( 0.806f, 0.675f );
glVertex2f( 0.806f, 0.66f );

glVertex2f( 0.832f, 0.625f );
glVertex2f( 0.826f, 0.625f );

glVertex2f( 0.832f, 0.62f );
glVertex2f( 0.826f, 0.62f );

glVertex2f( 0.832f, 0.615f );
glVertex2f( 0.826f, 0.615f );

glVertex2f( 0.802f, 0.565f );
glVertex2f( 0.805f, 0.58f );
glVertex2f( 0.805f, 0.58f );
glVertex2f( 0.808f, 0.565f );

glVertex2f( 0.798f, 0.565f );
glVertex2f( 0.798f, 0.58f );

glVertex2f( 0.768f, 0.615f );
glVertex2f( 0.7745f, 0.615f );


glVertex2f( 0.768f, 0.638f );
glVertex2f( 0.7745f, 0.625f );

glVertex2f( 0.768f, 0.625f );
glVertex2f( 0.7745f, 0.638f );

glVertex2f( 0.77f, 0.67f );
glVertex2f( 0.778f, 0.655f );

glVertex2f( 0.83f, 0.67f );
glVertex2f( 0.822f, 0.655f );

glVertex2f( 0.83f, 0.57f );
glVertex2f( 0.822f, 0.585f );

glVertex2f( 0.77f, 0.57f );
glVertex2f( 0.778f, 0.585f );

glEnd();

glPushMatrix();

glTranslatef( 0.8f, 0.62f, 0.0f);

glRotatef(k,0.0,0.0,-0.1);

glBegin(GL_LINES); // clock ticks
glColor3ub(115, 115, 115);
glVertex2f( 0.0f, 0.0f );
glVertex2f( 0.0f, 0.03f );
glEnd();

glPopMatrix();
k+=0.010f;
glLoadIdentity();


glPushMatrix();
glTranslatef( 0.8f, 0.62f, 0.0f);
glRotatef(l,0.0,0.0,-0.1);

glBegin(GL_POLYGON); // clock ticks
glColor3ub(115, 115, 115);
glVertex2f( 0.0f, 0.0f );
glVertex2f( 0.001f, 0.0015f );
glVertex2f( 0.001f, 0.0015f );
glVertex2f( 0.014f, 0.0015f );
glVertex2f( 0.0175f, 0.0f );
glVertex2f( 0.014f, -0.0015f );
glVertex2f( 0.001f, -0.0015f );
glEnd();

glPopMatrix();
l+=0.0030f;
glLoadIdentity();


glPushMatrix();
glTranslatef( 0.8f, 0.62f, 0.0f);

glRotatef(m,0.0,0.0,-0.1);
glBegin(GL_POLYGON); // clock ticks
glColor3ub(115, 115, 115);
glVertex2f( 0.0f, 0.0f );
glVertex2f( -0.001f, 0.0015f );
glVertex2f( -0.001f, -0.0015f );
glVertex2f( -0.0165f, -0.0015f );
glVertex2f( -0.0223f, 0.0f );
glVertex2f( -0.0165f, 0.0015f );
glVertex2f( -0.001f, 0.0015f );
glEnd();

glPopMatrix();
m+=0.0050f;
glLoadIdentity();



glBegin(GL_QUADS); // tower door 1
glColor3ub(223, 232, 236);
glVertex2f( 0.745f, 0.102f );
glVertex2f( 0.745f, 0.26f );
glVertex2f( 0.855f, 0.26f );
glVertex2f( 0.855f, 0.102f );
glEnd();

glBegin(GL_LINES); // tower door 1 LINEEEEEE
glColor3ub(191, 191, 191);
glVertex2f( 0.745f, 0.102f );
glVertex2f( 0.745f, 0.26f );
glVertex2f( 0.745f, 0.26f );
glVertex2f( 0.855f, 0.26f );
glVertex2f( 0.855f, 0.26f );
glVertex2f( 0.855f, 0.102f );
glEnd();




glBegin(GL_QUADS); // tower door 2
glColor3ub(255, 204, 102);
glVertex2f( 0.75f, 0.102f );
glVertex2f( 0.75f, 0.25f );
glVertex2f( 0.85f, 0.25f );
glVertex2f( 0.85f, 0.102f );
glEnd();

glBegin(GL_QUADS); // Window clock Tower
glColor3ub(255, 204, 102);
glVertex2f( 0.675f, 0.21f );
glVertex2f( 0.675f, 0.11f );
glVertex2f( 0.7, 0.11f );
glVertex2f( 0.7f, 0.21f );
glEnd();

glBegin(GL_LINES); // clock building LINEESSSS
glColor3ub(223, 232, 236);
glVertex2f( 0.76f, 0.255f );
glVertex2f( 0.76f, 0.102f );
glVertex2f( 0.78f, 0.255f );
glVertex2f( 0.78f, 0.102f );
glVertex2f( 0.8f, 0.255f );
glVertex2f( 0.8f, 0.102f );
glVertex2f( 0.82f, 0.255f );
glVertex2f( 0.82f, 0.102f );
glVertex2f( 0.84f, 0.255f );
glVertex2f( 0.84f, 0.102f );
glEnd();


glBegin(GL_QUADS); // Window clock Tower 2
glColor3ub(255, 204, 102);
glVertex2f( 0.71f, 0.21f );
glVertex2f( 0.735f, 0.21f );
glVertex2f( 0.735f, 0.11f );
glVertex2f( 0.71f, 0.11f );
glEnd();

glBegin(GL_QUADS); // Window clock Tower 2
glColor3ub(255, 204, 102);
glVertex2f( 0.71f, 0.21f );
glVertex2f( 0.735f, 0.21f );
glVertex2f( 0.735f, 0.11f );
glVertex2f( 0.71f, 0.11f );
glEnd();

glBegin(GL_QUADS); // Window clock Tower 3
glColor3ub(255, 204, 102);
glVertex2f( 0.865f, 0.21f );
glVertex2f( 0.865f, 0.11f );
glVertex2f( 0.89f, 0.11f );
glVertex2f( 0.89f, 0.21f );
glEnd();


glBegin(GL_QUADS); // Window clock Tower 4
glColor3ub(255, 204, 102);
glVertex2f( 0.9f, 0.21f );
glVertex2f( 0.925f, 0.21f );
glVertex2f( 0.925f, 0.11f );
glVertex2f( 0.9f, 0.11f );
glEnd();


glBegin(GL_QUADS); // tower slope
glColor3ub(233, 242, 247);
glVertex2f( 0.76f, 0.54f );
glVertex2f( 0.765f, 0.53f );
glVertex2f( 0.835f, 0.53f );
glVertex2f( 0.84f, 0.54f );
glEnd();







//Cloudeeeeee
glPushMatrix();
glTranslatef(position1,0,0);

GLfloat x17=-.9f; GLfloat y17=.72f; GLfloat radius17 =0.030f;
	int triangleAmount17 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi17 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x17, y17); // center of circle
		for(p = 0; p<= triangleAmount17;p++) {
			glVertex2f(
		            x17 + (radius17 * cos(p *  twicePi17 / triangleAmount17)),
			    y17 + (radius17 * sin(p * twicePi17 / triangleAmount17))
			);
		}
	glEnd();

	GLfloat x18=-.894f; GLfloat y18=.725f; GLfloat radius18 =0.030f;
	int triangleAmount18 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi18 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // window
		glVertex2f(x18, y18); // center of circle
		for(p = 0; p<= triangleAmount18;p++) {
			glVertex2f(
		            x18 + (radius18 * cos(p *  twicePi18 / triangleAmount18)),
			    y18 + (radius18 * sin(p * twicePi18/ triangleAmount18))
			);
		}
	glEnd();


	GLfloat x19=-.885f; GLfloat y19=.75f; GLfloat radius19 =0.030f;
	int triangleAmount19 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x19, y19); // center of circle
		for(p = 0; p<= triangleAmount19;p++) {
			glVertex2f(
		            x19 + (radius19 * cos(p *  twicePi19 / triangleAmount19)),
			    y19 + (radius19 * sin(p * twicePi19/ triangleAmount19))
			);
		}
	glEnd();


	GLfloat x199=-.88f; GLfloat y199=.76f; GLfloat radius199 =0.030f;
	int triangleAmount199= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // window
		glVertex2f(x199, y199); // center of circle
		for(p = 0; p<= triangleAmount199;p++) {
			glVertex2f(
		            x199 + (radius199 * cos(p *  twicePi199 / triangleAmount199)),
			    y199 + (radius199 * sin(p * twicePi199/ triangleAmount199))
			);
		}
	glEnd();

	GLfloat x1991=-.87f; GLfloat y1991=.72f; GLfloat radius1991 =0.030f;
	int triangleAmount1991= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1991 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x1991, y1991); // center of circle
		for(p = 0; p<= triangleAmount1991;p++) {
			glVertex2f(
		            x1991 + (radius1991 * cos(p *  twicePi1991 / triangleAmount1991)),
			    y1991 + (radius1991 * sin(p * twicePi1991/ triangleAmount1991))
			);
		}
	glEnd();

GLfloat x19911=-.85f; GLfloat y19911=.72f; GLfloat radius19911 =0.030f;
	int triangleAmount19911= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19911 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // window
		glVertex2f(x19911, y19911); // center of circle
		for(p = 0; p<= triangleAmount19911;p++) {
			glVertex2f(
		            x19911 + (radius19911 * cos(p *  twicePi19911 / triangleAmount19911)),
			    y19911 + (radius19911 * sin(p * twicePi19911/ triangleAmount19911))
			);
		}
	glEnd();


GLfloat x199111=-.85f; GLfloat y199111=.74f; GLfloat radius199111 =0.030f;
	int triangleAmount199111= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x199111, y199111); // center of circle
		for(p = 0; p<= triangleAmount199111;p++) {
			glVertex2f(
		            x199111 + (radius199111 * cos(p *  twicePi199111 / triangleAmount199111)),
			    y199111 + (radius199111 * sin(p * twicePi199111/ triangleAmount199111))
			);
		}
	glEnd();



GLfloat x1991111=-.83f; GLfloat y1991111=.72f; GLfloat radius1991111 =0.030f;
	int triangleAmount1991111= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1991111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x1991111, y1991111); // center of circle
		for(p = 0; p<= triangleAmount1991111;p++) {
			glVertex2f(
		            x1991111 + (radius1991111 * cos(p *  twicePi1991111 / triangleAmount1991111)),
			    y1991111 + (radius1991111 * sin(p * twicePi1991111/ triangleAmount1991111))
			);
		}
	glEnd();


GLfloat x19911111=-.84f; GLfloat y19911111=.76f; GLfloat radius19911111 =0.030f;
	int triangleAmount19911111= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19911111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // window
		glVertex2f(x19911111, y19911111); // center of circle
		for(p = 0; p<= triangleAmount19911111;p++) {
			glVertex2f(
		            x19911111 + (radius19911111 * cos(p *  twicePi19911111 / triangleAmount19911111)),
			    y19911111 + (radius19911111 * sin(p * twicePi19911111/ triangleAmount19911111))
			);
		}
	glEnd();


	GLfloat x199111111=-.83f; GLfloat y199111111=.72f; GLfloat radius199111111 =0.030f;
	int triangleAmount199111111= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199111111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x199111111, y199111111); // center of circle
		for(p = 0; p<= triangleAmount199111111;p++) {
			glVertex2f(
		            x199111111 + (radius199111111 * cos(p *  twicePi199111111 / triangleAmount199111111)),
			    y199111111 + (radius199111111 * sin(p * twicePi199111111/ triangleAmount199111111))
			);
		}
	glEnd();

		GLfloat x1991111111=-.815f; GLfloat y1991111111=.72f; GLfloat radius1991111111 =0.030f;
	int triangleAmount1991111111= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1991111111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // window
		glVertex2f(x1991111111, y1991111111); // center of circle
		for(p = 0; p<= triangleAmount1991111111;p++) {
			glVertex2f(
		            x1991111111 + (radius1991111111 * cos(p *  twicePi1991111111 / triangleAmount1991111111)),
			    y1991111111 + (radius1991111111 * sin(p * twicePi1991111111/ triangleAmount1991111111))
			);
		}
	glEnd();

	glPopMatrix();

	//cloud 1 end

//sunnnn
    GLfloat x=-.3f; GLfloat y=.8f; GLfloat radius =0.07f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 230, 230); // sunnnn
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();





glBegin(GL_QUADS); // WindTower
glColor3ub(240, 251, 255);
glVertex2f( -0.695f, 0.495f );
glVertex2f( -0.675f, 0.495f );
glVertex2f( -0.675, 0.1f );
glVertex2f( -0.695f, 0.1f );
glEnd();

glBegin(GL_LINES); // WindTower
glColor3ub(191, 191, 191);
glVertex2f( -0.675f, 0.495f );
glVertex2f( -0.675, 0.1f );
glVertex2f( -0.695f, 0.1f );
glVertex2f( -0.695f, 0.495f );

glEnd();

glLoadIdentity();

glPushMatrix();

glTranslatef( -0.684f, 0.5144f, 0.0f);

glRotatef(j,0.0,0.0,0.1);

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f( 0.0f, 0.0f );
glVertex2f(-0.026f, 0.008f);
glVertex2f( -0.142f, -0.03f );
glVertex2f( -0.155f, -0.0466f );
glVertex2f( -0.138f, -0.05f );
glVertex2f( -0.0245f, -0.026f );
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f( 0.0f, 0.0f );
glVertex2f(-0.014f, 0.06f);
glVertex2f( -0.01f, 0.15f );
glVertex2f( 0.0f, 0.17f );
glVertex2f( 0.01f, 0.15f );
glVertex2f(0.014f, 0.06f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f( 0.0f, 0.0f );
glVertex2f(0.026f, 0.008f);
glVertex2f( 0.142f, -0.03f );
glVertex2f( 0.155f, -0.0466f );
glVertex2f( 0.138f, -0.05f );
glVertex2f( 0.0245f, -0.026f );
glEnd();


glPopMatrix();
j+=0.060f;
glLoadIdentity();









	GLfloat x6=-.685f; GLfloat y6=.515f; GLfloat radius6 =0.022f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 179, 179); // windmill
		glVertex2f(x6, y6); // center of circle
		for(i = 0; i <= triangleAmount6;i++) {
			glVertex2f(
		            x6 + (radius6 * cos(i *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(i * twicePi6 / triangleAmount6))
			);
		}
	glEnd();

	GLfloat x7=-.685f; GLfloat y7=.515f; GLfloat radius7 =0.018f;
	int triangleAmount7 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x7, y7); // center of circle
		for(i = 0; i <= triangleAmount7;i++) {
			glVertex2f(
		            x7 + (radius7 * cos(i *  twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(i * twicePi7 / triangleAmount7))
			);
		}
	glEnd();

	GLfloat x8=0.8f; GLfloat y8=0.62f; GLfloat radius8 =0.0035f;
	int triangleAmount8 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 102, 102); // windmill
		glVertex2f(x8, y8); // center of circle
		for(i = 0; i <= triangleAmount8;i++) {
			glVertex2f(
		            x8 + (radius8 * cos(i *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(i * twicePi8 / triangleAmount8))
			);
		}
	glEnd();

glFlush();
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////


void demo_night(int val) {

glutDisplayFunc(night);


}

void evening() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


glBegin(GL_QUADS); //road
glColor3ub(77,77,77);
glVertex2f( -1.0f, 0.1f );
glVertex2f( 1.0f, 0.1f );
glVertex2f( 1.0f, -0.9f );
glVertex2f( -1.0f, -0.9f );
glEnd();


glBegin(GL_QUADS); // road middle lane
glColor3ub(204, 163, 0);
glVertex2f( -1.0f, -0.34f );
glVertex2f( -1.0f, -0.36f );
glVertex2f( 1.0f, -0.36f );
glVertex2f( 1.0f, -0.34f );
glEnd();

glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( -1.0f, -0.3f );
glVertex2f( -1.0f, -0.32f );
glVertex2f( 1.0f, -0.32f );
glVertex2f( 1.0f, -0.3f );
glEnd();

glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( -0.047f, 0.1f );
glVertex2f( -0.04f, 0.1f );
glVertex2f( -0.114f, -0.085f );
glVertex2f( -0.12f, -0.074f );
glEnd();

glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( -0.114f, -0.085f );
glVertex2f( -0.12f, -0.074f );
glVertex2f( -1.0f, -0.074f );
glVertex2f( -1.0f, -0.085f );

glEnd();

glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( 0.35f, 0.1f );
glVertex2f( 0.357f, 0.1f );
glVertex2f( 0.4455f, -0.074f );
glVertex2f( 0.4395f, -0.085f );

glEnd();

glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( 0.25f, -0.6f );
glVertex2f( 0.45f, -0.6f );
glVertex2f( 0.44f, -0.64f );
glVertex2f( 0.24f, -0.64f );

glEnd();


glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( 0.4455f, -0.074f );
glVertex2f( 0.4395f, -0.085f );
glVertex2f( 1.0f, -0.085f );
glVertex2f( 1.0f, -0.074f );
glEnd();

//carriage 1 estart
glPushMatrix();
glTranslatef(position3,0,0);

glBegin(GL_QUADS); //carriage car
glColor3ub(233, 242, 247);
glVertex2f( 0.3f, -0.01f );
glVertex2f( 0.355f, -0.01f );
glVertex2f( 0.355f, -0.06f );
glVertex2f( 0.3f, -0.06f );
glEnd();


glBegin(GL_POLYGON); //carriage car
glColor3ub(233, 242, 247);
glVertex2f( 0.28f, 0.03f );
glVertex2f( 0.265f, -0.01f );
glVertex2f( 0.265f, -0.06f );
glVertex2f( 0.3f, -0.06f );
glVertex2f( 0.3f, 0.03f );
glEnd();

glBegin(GL_POLYGON); //carriage car
glColor3ub(69, 138, 179);
glVertex2f( 0.28f, 0.025f );
glVertex2f( 0.268f, -0.01f );
glVertex2f( 0.268f, -0.042f );
glVertex2f( 0.288f, -0.042f );
glVertex2f( 0.298f, -0.025f );
glVertex2f( 0.298f, 0.025f );
glEnd();

glBegin(GL_LINES); //carriage car
glColor3ub(89, 89, 89);
glVertex2f( 0.305f, -0.015f );
glVertex2f( 0.35f, -0.015f );
glVertex2f( 0.35f, -0.015f );
glVertex2f( 0.35f, -0.035f );
glVertex2f( 0.35f, -0.035f );
glVertex2f( 0.305f, -0.035f );
glVertex2f( 0.305f, -0.035f );
glVertex2f( 0.305f, -0.015f );
glEnd();


glBegin(GL_QUADS); //carriage car
glColor3ub(0, 0, 0);
glVertex2f( 0.355f, -0.045f );
glVertex2f( 0.39f, -0.045f );
glVertex2f( 0.39f, -0.05f );
glVertex2f( 0.355f, -0.05f );
glEnd();

glBegin(GL_QUADS); //carriage car
glColor3ub(204, 204, 204);
glVertex2f( 0.39f, -0.035f );
glVertex2f( 0.484f, -0.035f );
glVertex2f( 0.484f, -0.055f );
glVertex2f( 0.39f, -0.055f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(230, 115, 0);
glVertex2f( 0.286f, 0.04f );
glVertex2f( 0.292f, 0.04f );
glVertex2f( 0.292f, 0.03f );
glVertex2f( 0.286f, 0.03f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(153, 153, 102);
glVertex2f( 0.465f, 0.005f );
glVertex2f( 0.475f, 0.005f );
glVertex2f( 0.475f, -0.035f );
glVertex2f( 0.465f, -0.035f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(134, 89, 45);
glVertex2f( 0.445f, -0.02f );
glVertex2f( 0.465f, -0.02f );
glVertex2f( 0.465f, -0.035f );
glVertex2f( 0.445f, -0.035f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(204, 0, 0);
glVertex2f( 0.435f, 0.01f );
glVertex2f( 0.445f, 0.01f );
glVertex2f( 0.445f, -0.035f );
glVertex2f( 0.435f, -0.035f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(255, 153, 0);
glVertex2f( 0.425f, -0.005f );
glVertex2f( 0.435f, -0.005f );
glVertex2f( 0.435f, -0.035f );
glVertex2f( 0.425f, -0.035f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(51, 204, 204);
glVertex2f( 0.395f, -0.025f );
glVertex2f( 0.425f, -0.025f );
glVertex2f( 0.425f, -0.035f );
glVertex2f( 0.395f, -0.035f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(153, 102, 51);
glVertex2f( 0.395f, -0.025f );
glVertex2f( 0.42f, -0.025f );
glVertex2f( 0.42f, -0.015f );
glVertex2f( 0.395f, -0.015f );
glEnd();



int p;
GLfloat x19911111112=.285f; GLfloat y19911111112=-.062f; GLfloat radius19911111112 =0.011f;
	int triangleAmount19911111112= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19911111112 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // window
		glVertex2f(x19911111112, y19911111112); // center of circle
		for(p = 0; p<= triangleAmount19911111112;p++) {
			glVertex2f(
		            x19911111112 + (radius19911111112 * cos(p *  twicePi19911111112 / triangleAmount19911111112)),
			    y19911111112 + (radius19911111112 * sin(p * twicePi19911111112/ triangleAmount19911111112))
			);
		}
	glEnd();


	GLfloat x199111111123=.285f; GLfloat y199111111123=-.062f; GLfloat radius199111111123 =0.005f;
	int triangleAmount199111111123= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199111111123 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x199111111123, y199111111123); // center of circle
		for(p = 0; p<= triangleAmount199111111123;p++) {
			glVertex2f(
		            x199111111123 + (radius199111111123 * cos(p *  twicePi199111111123 / triangleAmount199111111123)),
			    y199111111123 + (radius199111111123 * sin(p * twicePi199111111123/ triangleAmount199111111123))
			);
		}
	glEnd();



	GLfloat x1992=.34f; GLfloat y1992=-.062f; GLfloat radius1992 =0.011f;
	int triangleAmount1992= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1992 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // window
		glVertex2f(x1992, y1992); // center of circle
		for(p = 0; p<= triangleAmount1992;p++) {
			glVertex2f(
		            x1992 + (radius1992 * cos(p *  twicePi1992 / triangleAmount1992)),
			    y1992 + (radius1992 * sin(p * twicePi1992/ triangleAmount1992))
			);
		}
	glEnd();


	GLfloat x19923=.34f; GLfloat y19923=-.062f; GLfloat radius19923 =0.005f;
	int triangleAmount19923= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19923 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x19923, y19923); // center of circle
		for(p = 0; p<= triangleAmount19923;p++) {
			glVertex2f(
		            x19923 + (radius19923 * cos(p *  twicePi19923 / triangleAmount19923)),
			    y19923 + (radius19923 * sin(p * twicePi19923/ triangleAmount19923))
			);
		}
	glEnd();


	GLfloat x199233=.47f; GLfloat y199233=-.062f; GLfloat radius199233 =0.011f;
	int triangleAmount199233= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199233 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // window
		glVertex2f(x199233, y199233); // center of circle
		for(p = 0; p<= triangleAmount199233;p++) {
			glVertex2f(
		            x199233 + (radius199233 * cos(p *  twicePi199233 / triangleAmount199233)),
			    y199233 + (radius199233 * sin(p * twicePi199233/ triangleAmount199233))
			);
		}
	glEnd();


	GLfloat x199232=.47f; GLfloat y199232=-.062f; GLfloat radius199232 =0.005f;
	int triangleAmount199232= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199232 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x199232, y199232); // center of circle
		for(p = 0; p<= triangleAmount199232;p++) {
			glVertex2f(
		            x199232 + (radius199232 * cos(p *  twicePi199232 / triangleAmount199232)),
			    y199232 + (radius199232 * sin(p * twicePi199232/ triangleAmount199232))
			);
		}
	glEnd();

glPopMatrix();
//carriage 1 end

//carriage 2 start
glPushMatrix();
glTranslatef(position4,0,0);

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(233, 242, 247);
glVertex2f( -0.53f, -0.03f );
glVertex2f( -0.35f, -0.03f );
glVertex2f( -0.35f, -0.06f );
glVertex2f( -0.53f, -0.06f );
glEnd();


glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(191, 191, 191);
glVertex2f( -0.49f, -0.04f );
glVertex2f( -0.37f, -0.04f );
glVertex2f( -0.37f, -0.05f );
glVertex2f( -0.49f, -0.05f );
glEnd();

glBegin(GL_LINES); //carriage car Stairs middle
glColor3ub(140, 140, 140);
glVertex2f( -0.49f, -0.04f );
glVertex2f( -0.37f, -0.04f );
glVertex2f( -0.37f, -0.04f );
glVertex2f( -0.37f, -0.05f );
glVertex2f( -0.37f, -0.05f );
glVertex2f( -0.49f, -0.05f );
glVertex2f( -0.49f, -0.04f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(255, 102, 0);
glVertex2f( -0.335f, 0.035f );
glVertex2f( -0.325f, 0.035f );
glVertex2f( -0.325f, 0.02f );
glVertex2f( -0.335f, 0.02f );
glEnd();

glBegin(GL_POLYGON); //carriage car Stairs front
glColor3ub(233, 242, 247);
glVertex2f( -0.35f, 0.02f );
glVertex2f( -0.32f, 0.02f );
glVertex2f( -0.3f, -0.02f );
glVertex2f( -0.3f, -0.06f );
glVertex2f( -0.35f, -0.06f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs top left
glColor3ub(230, 230, 230);
glVertex2f( -0.534f, 0.005f );
glVertex2f( -0.41f, 0.1f );
glVertex2f( -0.41f, 0.055f );

glVertex2f( -0.534f, -0.045f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs top right
glColor3ub(230, 230, 230);
glVertex2f( -0.41f, 0.1f );
glVertex2f( -0.41f, 0.055f );
glVertex2f( -0.36f, 0.055f );
glVertex2f( -0.36f, 0.1f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs top right
glColor3ub(26, 26, 26);
glVertex2f( -0.406f, 0.055f );
glVertex2f( -0.4f, 0.055f );
glVertex2f( -0.4f, -0.0298f );
glVertex2f( -0.406f, -0.0295f );
glEnd();

glBegin(GL_POLYGON); //carriage car glasses
glColor3ub(35, 105, 154);
glVertex2f( -0.345f, 0.01f );
glVertex2f( -0.32f, 0.01f );
glVertex2f( -0.305f, -0.02f );
glVertex2f( -0.305f, -0.04f );
glVertex2f( -0.335f, -0.04f );
glVertex2f( -0.345f, -0.03f );

glEnd();

glBegin(GL_LINES); //carriage car glasses
glColor3ub(128, 128, 128);
glVertex2f( -0.406f, 0.095f );
glVertex2f( -0.364f, 0.095f );

glVertex2f( -0.364f, 0.095f );
glVertex2f( -0.364f, 0.06f );

glVertex2f( -0.364f, 0.06f );
glVertex2f( -0.406f, 0.06f );

glVertex2f( -0.406f, 0.06f );
glVertex2f( -0.406f, 0.095f );


glEnd();



glBegin(GL_LINES); //carriage car glasses
glColor3ub(128, 128, 128);
glVertex2f( -0.42f, 0.08f );
glVertex2f( -0.52f, 0.0f );

glVertex2f( -0.42f, 0.06f );
glVertex2f( -0.52f, -0.02f );

glEnd();

	GLfloat x1992323=-.507f; GLfloat y1992323=-.062f; GLfloat radius1992323 =0.011f;
	int triangleAmount1992323= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1992323 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // window
		glVertex2f(x1992323, y1992323); // center of circle
		for(p = 0; p<= triangleAmount199232;p++) {
			glVertex2f(
		            x1992323 + (radius1992323 * cos(p *  twicePi1992323 / triangleAmount1992323)),
			    y1992323 + (radius1992323 * sin(p * twicePi1992323/ triangleAmount1992323))
			);
		}
	glEnd();




	GLfloat x1992321=-.507f; GLfloat y1992321=-.062f; GLfloat radius1992321 =0.005f;
	int triangleAmount1992321= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1992321 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x1992321, y1992321); // center of circle
		for(p = 0; p<= triangleAmount1992321;p++) {
			glVertex2f(
		            x1992321 + (radius1992321 * cos(p *  twicePi1992321 / triangleAmount1992321)),
			    y1992321 + (radius1992321 * sin(p * twicePi1992321/ triangleAmount1992321))
			);
		}
	glEnd();

	GLfloat x19923211=-.32f; GLfloat y19923211=-.062f; GLfloat radius19923211 =0.011f;
	int triangleAmount19923211= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19923211 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // window
		glVertex2f(x19923211, y19923211); // center of circle
		for(p = 0; p<= triangleAmount19923211;p++) {
			glVertex2f(
		            x19923211 + (radius19923211 * cos(p *  twicePi19923211 / triangleAmount19923211)),
			    y19923211 + (radius19923211 * sin(p * twicePi19923211/ triangleAmount19923211))
			);
		}
	glEnd();


	GLfloat x19923232=-.32f; GLfloat y19923232=-.062f; GLfloat radius19923232 =0.005f;
	int triangleAmount19923232= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19923232 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x19923232, y19923232); // center of circle
		for(p = 0; p<= triangleAmount199232;p++) {
			glVertex2f(
		            x19923232 + (radius19923232 * cos(p *  twicePi19923232 / triangleAmount19923232)),
			    y19923232 + (radius19923232 * sin(p * twicePi19923232/ triangleAmount19923232))
			);
		}
	glEnd();

	glPopMatrix();
	//carriage2 end

glBegin(GL_QUADS); //grass
glColor3ub(89, 192, 89);
glVertex2f( -1.0f, -0.9f );
glVertex2f( 1.0f, -0.9f );
glVertex2f( 1.0f, -1.0f );
glVertex2f( -1.0f, -1.0f );
glEnd();



glBegin(GL_QUADS); //sky
glColor3ub(255, 191, 128);
glVertex2f( -1.0f, 1.0f );
glVertex2f( 1.0f, 1.0f );
glVertex2f( 1.0f, 0.1f );
glVertex2f( -1.0f, 0.1f );
glEnd();

glBegin(GL_TRIANGLES); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( -1.0f, 0.4f );
glVertex2f( -0.5f, 0.1f );
glVertex2f( -1.0f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( -0.9f, 0.1f );
glVertex2f( -0.2f, 0.4f );
glVertex2f( 0.36f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( -0.325f, 0.1f );
glVertex2f( 0.1f, 0.45f );
glVertex2f( 0.4f, 0.16f );

glEnd();

glBegin(GL_TRIANGLES); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( 0.13f, 0.1f );
glVertex2f( 0.55f, 0.4f );
glVertex2f( 0.9f, 0.1f );

glEnd();

glBegin(GL_QUADS); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( 0.36f, 0.1f );
glVertex2f( 0.75f, 0.4f );
glVertex2f( 1.0f, 0.3f );
glVertex2f( 1.0f, 0.1f );
glEnd();

glBegin(GL_QUADS); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( 0.68f, 0.1f );
glVertex2f( 0.95f, 0.35f );
glVertex2f( 1.0f, 0.3f );
glVertex2f( 1.0f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( 0.9f, 0.1f );
glVertex2f( 1.0f, 0.4f );
glVertex2f( 1.0f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountains1
glColor3ub(126, 206, 126);
glVertex2f( -1.0f, 0.3f );
glVertex2f( -0.8f, 0.1f );
glVertex2f( -1.0f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountains1
glColor3ub(126, 206, 126);
glVertex2f( -0.8f, 0.1f );
glVertex2f( -0.54f, 0.3f );
glVertex2f( 0.68f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountains1
glColor3ub(126, 206, 126);
glVertex2f( 0.17f, 0.1f );
glVertex2f( 0.36f, 0.35f );
glVertex2f( 0.9f, 0.1f );

glEnd();


glBegin(GL_TRIANGLES); //mountains1
glColor3ub(126, 206, 126);
glVertex2f( 0.654f, 0.1f );
glVertex2f( 0.9f, 0.25f );
glVertex2f( 1.0f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountains1
glColor3ub(126, 206, 126);
glVertex2f( 0.9f, 0.1f );
glVertex2f( 1.0f, 0.25f );
glVertex2f( 1.0f, 0.1f );

glEnd();

glBegin(GL_QUADS); //road1
glColor3ub(204, 163, 0);
glVertex2f( -0.3f, -0.6f );
glVertex2f( -0.1f, -0.6f );
glVertex2f( -0.11f, -0.65f );
glVertex2f( -0.31f, -0.65f );

glEnd();

glBegin(GL_QUADS); //road2
glColor3ub(204, 163, 0);
glVertex2f( -0.7f, -0.6f );
glVertex2f( -0.5f, -0.6f );
glVertex2f( -0.51f, -0.65f );
glVertex2f( -0.71f, -0.65f );

glEnd();

glBegin(GL_QUADS); //road3
glColor3ub(204, 163, 0);
glVertex2f( 0.8f, -0.6f );
glVertex2f( 1.0f, -0.6f );
glVertex2f( 1.0f, -0.65f );
glVertex2f( 0.79f, -0.65f );
glEnd();

glBegin(GL_QUADS); //road4
glColor3ub(204, 163, 0);
glVertex2f( -1.0f, -0.6f );
glVertex2f( -0.9f, -0.6f );
glVertex2f( -0.91f, -0.65f );
glVertex2f( -1.0f, -0.65f );
glEnd();

//plane start
glPushMatrix();
glTranslatef(position,0,0);

glBegin(GL_QUADS); //plane
glColor3ub(233, 242, 247);
glVertex2f( 0.23f, -0.5f );
glVertex2f( 0.6f, -0.5f );
glVertex2f( 0.6f, -0.645f );
glVertex2f( 0.23f, -0.645f );
glEnd();

glBegin(GL_QUADS); //plane Back
glColor3ub(233, 242, 247);
glVertex2f( 0.13f, -0.5f );
glVertex2f( 0.23f, -0.5f );
glVertex2f( 0.23f, -0.645f );
glVertex2f( 0.14f, -0.552f );
glEnd();


glBegin(GL_QUADS); //plane  front
glColor3ub(233, 242, 247);
glVertex2f( 0.6f, -0.5f );
glVertex2f( 0.66f, -0.585f );
glVertex2f( 0.65f, -0.61f );
glVertex2f( 0.6f, -0.645f );

glEnd();

glBegin(GL_QUADS); //plane  wings
glColor3ub(69, 138, 179);
glVertex2f( 0.44f, -0.62f );
glVertex2f( 0.55f, -0.62f );
glVertex2f( 0.37f, -0.85f );
glVertex2f( 0.34f, -0.85f );

glEnd();

glBegin(GL_QUADS); //plane  wings2
glColor3ub(69, 138, 179);
glVertex2f( 0.42f, -0.5f );
glVertex2f( 0.52f, -0.5f );
glVertex2f( 0.315f, -0.38f );
glVertex2f( 0.285f, -0.38f );

glEnd();

glBegin(GL_QUADS); //plane  wings3
glColor3ub(69, 138, 179);
glVertex2f( 0.104f, -0.615f );
glVertex2f( 0.124f, -0.615f );
glVertex2f( 0.21f, -0.545f );
glVertex2f( 0.158f, -0.545f );

glEnd();

glBegin(GL_QUADS); //plane backup wings5
glColor3ub(69, 138, 179);
glVertex2f( 0.12f, -0.41f );
glVertex2f( 0.16f, -0.41f );
glVertex2f( 0.23f, -0.5f );
glVertex2f( 0.13f, -0.5f );

glEnd();

glBegin(GL_QUADS); //plane front glass
glColor3ub(35, 105, 154);
glVertex2f( 0.54f, -0.51f );
glVertex2f( 0.607f, -0.51f );
glVertex2f( 0.6496f, -0.57f );
glVertex2f( 0.57f, -0.57f );

glEnd();

glBegin(GL_QUADS); //plane window right to left 1
glColor3ub(35, 105, 154);
glVertex2f( 0.485f, -0.52f );
glVertex2f( 0.515f, -0.52f );
glVertex2f( 0.515f, -0.56f );
glVertex2f( 0.485f, -0.56f );
glEnd();


glBegin(GL_QUADS); //plane window right to left 2
glColor3ub(35, 105, 154);
glVertex2f( 0.44f, -0.52f );
glVertex2f( 0.47f, -0.52f );
glVertex2f( 0.47f, -0.56f );
glVertex2f( 0.44f, -0.56f );
glEnd();


glBegin(GL_QUADS); //plane window right to left 3
glColor3ub(35, 105, 154);
glVertex2f( 0.395f, -0.52f );
glVertex2f( 0.425f, -0.52f );
glVertex2f( 0.425f, -0.56f );
glVertex2f( 0.395f, -0.56f );
glEnd();

glBegin(GL_QUADS); //plane window right to left 4
glColor3ub(35, 105, 154);
glVertex2f( 0.35f, -0.52f );
glVertex2f( 0.38f, -0.52f );
glVertex2f( 0.38f, -0.56f );
glVertex2f( 0.35f, -0.56f );
glEnd();

glBegin(GL_QUADS); //plane window right to left 5
glColor3ub(35, 105, 154);
glVertex2f( 0.305f, -0.52f );
glVertex2f( 0.335f, -0.52f );
glVertex2f( 0.335f, -0.56f );
glVertex2f( 0.305f, -0.56f );
glEnd();

glBegin(GL_QUADS); //plane window right to left 4
glColor3ub(35, 105, 154);
glVertex2f( 0.26f, -0.52f );
glVertex2f( 0.29f, -0.52f );
glVertex2f( 0.29f, -0.56f );
glVertex2f( 0.26f, -0.56f );
glEnd();


glBegin(GL_QUADS); //wheels
glColor3ub(153, 153, 153);
glVertex2f( 0.5865f, -0.645f );
glVertex2f( 0.596f, -0.645f );
glVertex2f( 0.596f, -0.661f );
glVertex2f( 0.5865f, -.661f );
glEnd();

glBegin(GL_QUADS); //wheels
glColor3ub(153, 153, 153);
glVertex2f( 0.238f, -0.645f );
glVertex2f( 0.2465f, -0.645f );
glVertex2f( 0.2465f, -0.661f );
glVertex2f( 0.238f, -.661f );
glEnd();


  int i;
	GLfloat x4=.2415f; GLfloat y4=-.6755f; GLfloat radius4 =0.015f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // wheels plane
		glVertex2f(x4, y4); // center of circle
		for(i = 0; i <= triangleAmount4;i++) {
			glVertex2f(
		            x4 + (radius4 * cos(i *  twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(i * twicePi4 / triangleAmount4))
			);
		}
	glEnd();


	GLfloat x44=.2415f; GLfloat y44=-.6755f; GLfloat radius44 =0.006f;
	int triangleAmount44 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi44 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // wheels plane
		glVertex2f(x44, y44); // center of circle
		for(i = 0; i <= triangleAmount44;i++) {
			glVertex2f(
		            x44 + (radius44 * cos(i *  twicePi44 / triangleAmount44)),
			    y44 + (radius44 * sin(i * twicePi44 / triangleAmount44))
			);
		}
	glEnd();

		GLfloat x5=.5915f; GLfloat y5=-.6752f; GLfloat radius5 =0.015f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // wheels plane
		glVertex2f(x5, y5); // center of circle
		for(i = 0; i <= triangleAmount5;i++) {
			glVertex2f(
		            x5+ (radius5 * cos(i *  twicePi5 / triangleAmount5)),
			    y5+ (radius5 * sin(i * twicePi5 / triangleAmount5))
			);
		}
	glEnd();


		GLfloat x55=.5915f; GLfloat y55=-.6752f; GLfloat radius55 =0.006f;
	int triangleAmount55 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi55 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // wheels plane
		glVertex2f(x55, y55); // center of circle
		for(i = 0; i <= triangleAmount55;i++) {
			glVertex2f(
		            x55+ (radius55 * cos(i *  twicePi55 / triangleAmount55)),
			    y5+ (radius55 * sin(i * twicePi55 / triangleAmount55))
			);
		}
	glEnd();

glPopMatrix();
//plane end

	//cloud 2 start
glPushMatrix();
glTranslatef(position2,0,0);
	GLfloat x9=0.11f; GLfloat y9=0.74f; GLfloat radius9 =0.035f;
	int triangleAmount9 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x9, y9); // center of circle
		for(i = 0; i <= triangleAmount9;i++) {
			glVertex2f(
		            x9 + (radius9 * cos(i *  twicePi9 / triangleAmount9)),
			    y9 + (radius9 * sin(i * twicePi9 / triangleAmount9))
			);
		}
	glEnd();


		GLfloat x10=0.07f; GLfloat y10=0.72f; GLfloat radius10 =0.035f;
	int triangleAmount10 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // windmill
		glVertex2f(x10, y10); // center of circle
		for(i = 0; i <= triangleAmount10;i++) {
			glVertex2f(
		            x10 + (radius10 * cos(i *  twicePi10 / triangleAmount10)),
			    y10 + (radius10 * sin(i * twicePi10 / triangleAmount10))
			);
		}
	glEnd();


	GLfloat x11=0.13f; GLfloat y11=0.72f; GLfloat radius11 =0.035f;
	int triangleAmount11 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // windmill
		glVertex2f(x11, y11); // center of circle
		for(i = 0; i <= triangleAmount11;i++) {
			glVertex2f(
		            x11 + (radius11 * cos(i *  twicePi11 / triangleAmount11)),
			    y11 + (radius11 * sin(i * twicePi11 / triangleAmount11))
			);
		}
	glEnd();


	GLfloat x12=0.15f; GLfloat y12=0.76f; GLfloat radius12 =0.035f;
	int triangleAmount12 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x12, y12); // center of circle
		for(i = 0; i <= triangleAmount12;i++) {
			glVertex2f(
		            x12 + (radius12* cos(i *  twicePi12 / triangleAmount12)),
			    y12 + (radius12 * sin(i * twicePi12 / triangleAmount12))
			);
		}
	glEnd();


	GLfloat x13=0.18f; GLfloat y13=0.72f; GLfloat radius13 =0.035f;
	int triangleAmount13 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // windmill
		glVertex2f(x13, y13); // center of circle
		for(i = 0; i <= triangleAmount13;i++) {
			glVertex2f(
		            x13 + (radius13* cos(i *  twicePi13 / triangleAmount13)),
			    y13 + (radius13 * sin(i * twicePi13 / triangleAmount13))
			);
		}
	glEnd();

	GLfloat x14=0.2f; GLfloat y14=0.72f; GLfloat radius14=0.035f;
	int triangleAmount14 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi14 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x14, y14); // center of circle
		for(i = 0; i <= triangleAmount14;i++) {
			glVertex2f(
		            x14 + (radius14* cos(i *  twicePi14 / triangleAmount14)),
			    y14 + (radius14 * sin(i * twicePi14 / triangleAmount14))
			);
		}
	glEnd();

		GLfloat x15=0.075f; GLfloat y15=0.735f; GLfloat radius15=0.035f;
	int triangleAmount15 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi15 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x15, y15); // center of circle
		for(i = 0; i <= triangleAmount15;i++) {
			glVertex2f(
		            x15 + (radius15* cos(i *  twicePi15 / triangleAmount15)),
			    y15 + (radius15 * sin(i * twicePi15 / triangleAmount15))
			);
		}
	glEnd();

	GLfloat x16=0.075f; GLfloat y16=0.735f; GLfloat radius16=0.035f;
	int triangleAmount16 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi16 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x16, y16); // center of circle
		for(i = 0; i <= triangleAmount16;i++) {
			glVertex2f(
		            x16 + (radius16* cos(i *  twicePi16 / triangleAmount16)),
			    y16 + (radius16 * sin(i * twicePi16 / triangleAmount16))
			);
		}
	glEnd();
glPopMatrix();


	//cloud 2 end



glBegin(GL_QUADS); // middle road
glColor3ub(51, 51, 51);
glVertex2f( -1.0f, 0.1f );
glVertex2f( -1.0f, 0.085f );
glVertex2f( 1.0f, 0.085f );
glVertex2f( 1.0f, 0.1f );

glEnd();

glBegin(GL_QUADS); // middle building
glColor3ub(69, 138, 179);
glVertex2f( -0.05f, 0.1f );
glVertex2f( 0.0f, 0.34f );
glVertex2f( 0.3f, 0.34f );
glVertex2f( 0.36f, 0.1f );
glEnd();

glBegin(GL_LINES);// line mioddle builidng;
glColor3ub(255, 255, 255);
glVertex2f( 0.05f, 0.32f );
glVertex2f( 0.05f, 0.1f );
glVertex2f( 0.09f, 0.32f );
glVertex2f( 0.09f, 0.1f );
glVertex2f( 0.13f, 0.32f );
glVertex2f( 0.13f, 0.1f );
glVertex2f( 0.17f, 0.32f );
glVertex2f( 0.17f, 0.1f );
glVertex2f( 0.21f, 0.32f );
glVertex2f( 0.21f, 0.1f );
glVertex2f( 0.25f, 0.32f );
glVertex2f( 0.25f, 0.1f );
glVertex2f( 0.005f, 0.32f );
glVertex2f( 0.005f, 0.1f );
glVertex2f( 0.295f, 0.32f );
glVertex2f( 0.295f, 0.1f );
glEnd();

glBegin(GL_TRIANGLES); // middle building side
glColor3ub(64, 128, 165);
glVertex2f( 0.005f, 0.32f );
glVertex2f( 0.005f, 0.1f );
glVertex2f( -0.04f, 0.1f );
glEnd();

glBegin(GL_TRIANGLES); // middle building side
glColor3ub(64, 128, 165);
glVertex2f( 0.295f, 0.32f );
glVertex2f( 0.35f, 0.1f );
glVertex2f( 0.295f, 0.1f );
glEnd();

glBegin(GL_QUADS); // right building
glColor3ub(255, 255, 255);
glVertex2f( 0.33f, 0.22f );
glVertex2f( 0.36f, 0.1f );
glVertex2f( 0.654f, 0.1f );
glVertex2f( 0.654f, 0.22f );
glEnd();

glBegin(GL_QUADS); // right building glass 1
glColor3ub(69, 138, 179);
glVertex2f( 0.33f, 0.21f );
glVertex2f( 0.34f, 0.15f );
glVertex2f( 0.65f, 0.15f );
glVertex2f( 0.65f, 0.21f );
glEnd();

glBegin(GL_QUADS); // right building glass 2
glColor3ub(69, 138, 179);
glVertex2f( 0.34f, 0.145f );
glVertex2f( 0.351f, 0.105f );
glVertex2f( 0.65f, 0.105f );
glVertex2f( 0.65f, 0.145f );
glEnd();


glBegin(GL_QUADS); // left building
glColor3ub(255, 255, 255);
glVertex2f( -0.325f, 0.22f );
glVertex2f( -0.025f, 0.22f );
glVertex2f( -0.05f, 0.1f );
glVertex2f( -0.325f, 0.1f );

glEnd();

glBegin(GL_QUADS); // left building glass 1
glColor3ub(69, 138, 179);
glVertex2f( -0.027f, 0.21f );
glVertex2f( -0.04f, 0.15f );
glVertex2f( -0.32f, 0.15f );
glVertex2f( -0.32f, 0.21f );

glEnd();

glBegin(GL_QUADS); // left building glass 1
glColor3ub(69, 138, 179);
glVertex2f( -0.32f, 0.145f );
glVertex2f( -0.32f, 0.105f );
glVertex2f( -0.05f, 0.105f );
glVertex2f( -0.04f, 0.145f );

glEnd();


glBegin(GL_QUADS); // tower
glColor3ub(255, 255, 255);
glVertex2f( 0.34f, 0.22f );
glVertex2f( 0.4f, 0.22f );
glVertex2f( 0.39f, 0.51f );
glVertex2f( 0.35f, 0.51f );
glEnd();

glBegin(GL_QUADS); // tower2
glColor3ub(233, 242, 247);
glVertex2f( 0.33f, 0.595f );
glVertex2f( 0.41f, 0.595f );
glVertex2f( 0.39f, 0.51f );
glVertex2f( 0.35f, 0.51f );
glEnd();

glBegin(GL_QUADS); // tower3
glColor3ub(255, 255, 255);
glVertex2f( 0.33f, 0.74f );
glVertex2f( 0.41f, 0.74f );
glVertex2f( 0.41f, 0.595f );
glVertex2f( 0.33f, 0.595f );
glEnd();

glBegin(GL_QUADS); // tower3 glass 1
glColor3ub(69, 138, 179);
glVertex2f( 0.332f, 0.73f );
glVertex2f( 0.332f, 0.7f );
glVertex2f( 0.408f, 0.7f );
glVertex2f( 0.408f, 0.73f );
glEnd();

glBegin(GL_QUADS); // tower3 glass 2
glColor3ub(69, 138, 179);
glVertex2f( 0.332f, 0.676f );
glVertex2f( 0.332f, 0.64f );
glVertex2f( 0.408f, 0.64f );
glVertex2f( 0.408f, 0.676f );
glEnd();

glBegin(GL_QUADS); // tower3 glass 3
glColor3ub(69, 138, 179);
glVertex2f( 0.332f, 0.636f );
glVertex2f( 0.332f, 0.602f );
glVertex2f( 0.408f, 0.602f );
glVertex2f( 0.408f, 0.636f );
glEnd();


glBegin(GL_QUADS); // tower4
glColor3ub(233, 242, 247);
glVertex2f( 0.325f, 0.75f );
glVertex2f( 0.415f, 0.75f );
glVertex2f( 0.415f, 0.74f );
glVertex2f( 0.325f, 0.74f );
glEnd();


glBegin(GL_TRIANGLES); // topwer point
glColor3ub(255, 255, 255);
glVertex2f( 0.365f, 0.75f );
glVertex2f( 0.375f, 0.75f );
glVertex2f( 0.37f, 0.88f );

glEnd();

glBegin(GL_QUADS); // tower
glColor3ub(255, 255, 255);
glVertex2f( 0.0f, 0.34f );
glVertex2f( 0.3f, 0.34f );
glVertex2f( 0.295f, 0.32f );
glVertex2f( 0.005f, 0.32f );
glEnd();

glBegin(GL_QUADS); // tower
glColor3ub(233, 242, 247);
glVertex2f( 0.0f, 0.34f );
glVertex2f( 0.005f, 0.32f );
glVertex2f( -0.04f, 0.1f );
glVertex2f( -0.05f, 0.1f );
glEnd();

glBegin(GL_QUADS); // tower
glColor3ub(233, 242, 247);
glVertex2f( 0.295f, 0.32f );
glVertex2f( 0.35f, 0.1f );
glVertex2f( 0.36f, 0.1f );
glVertex2f( 0.3f, 0.34f );
glEnd();




glBegin(GL_QUADS); // clock building
glColor3ub(240, 251, 255);
glVertex2f( 0.67f, 0.22f );
glVertex2f( 0.93f, 0.22f );
glVertex2f( 0.93f, 0.1f );
glVertex2f( 0.67f, 0.1f );
glEnd();

glBegin(GL_LINES); // clock building
glColor3ub(204, 204, 204);
glVertex2f( 0.67f, 0.22f );
glVertex2f( 0.93f, 0.22f );
glVertex2f( 0.93f, 0.22f );
glVertex2f( 0.93f, 0.1f );
glVertex2f( 0.67f, 0.1f );
glVertex2f( 0.67f, 0.22f );
glEnd();

glBegin(GL_LINES); // clock building LINEESSSS
glColor3ub(255, 255, 255);
glVertex2f( 0.76f, 0.255f );
glVertex2f( 0.76f, 0.102f );
glVertex2f( 0.78f, 0.255f );
glVertex2f( 0.78f, 0.102f );
glVertex2f( 0.8f, 0.255f );
glVertex2f( 0.8f, 0.102f );
glVertex2f( 0.82f, 0.255f );
glVertex2f( 0.82f, 0.102f );
glVertex2f( 0.84f, 0.255f );
glVertex2f( 0.84f, 0.102f );
glEnd();



glBegin(GL_POLYGON); // clock tower 1
glColor3ub(240, 251, 255);
glVertex2f( 0.76f, 0.69f );
glVertex2f( 0.76f, 0.54f );
glVertex2f( 0.765f, 0.53f );
glVertex2f( 0.835f, 0.53f );
glVertex2f( 0.84f, 0.54f );
glVertex2f( 0.84f, 0.69f );
glEnd();

glBegin(GL_QUADS); // clock tower 2
glColor3ub(240, 251, 255);
glVertex2f( 0.765f, 0.53f );
glVertex2f( 0.765f, 0.22f );
glVertex2f( 0.835f, 0.22f );
glVertex2f( 0.835f, 0.53f );
glEnd();

glBegin(GL_QUADS); // clock tpwer top up
glColor3ub(240, 251, 255);
glVertex2f( 0.76f, 0.705f );
glVertex2f( 0.76f, 0.74f );
glVertex2f( 0.84f, 0.74f );
glVertex2f( 0.84f, 0.705f );
glEnd();

glBegin(GL_TRIANGLES); // clock tpwer top up 2
glColor3ub(236, 242, 243);
glVertex2f( 0.772f, 0.705f );
glVertex2f( 0.828f, 0.705f );
glVertex2f( 0.8f, 0.88f );
glEnd();

glBegin(GL_LINES); // clock tpwer top up 2 LINEEEE
glColor3ub(217, 217, 217);
glVertex2f( 0.772f, 0.705f );
glVertex2f( 0.8f, 0.88f );
glVertex2f( 0.8f, 0.88f );
glVertex2f( 0.828f, 0.705f );
glEnd();

glBegin(GL_POLYGON); // clock tpwer top up hole
glColor3ub(97, 185, 231);
glVertex2f( 0.792f, 0.76f );
glVertex2f( 0.808f, 0.76f );
glVertex2f( 0.808f, 0.795f );
glVertex2f( 0.8f, 0.815f );
glVertex2f( 0.792f, 0.795f );

glEnd();


glBegin(GL_TRIANGLES); // clock tpwer top up 3
glColor3ub(236, 242, 243);
glVertex2f( 0.77f, 0.705f );
glVertex2f( 0.83f, 0.705f );
glVertex2f( 0.8f, 0.77f );
glEnd();

glBegin(GL_LINES); // clock tpwer top up 3 LINE
glColor3ub(204, 204, 204);
glVertex2f( 0.77f, 0.705f );
glVertex2f( 0.8f, 0.77f );
glVertex2f( 0.8f, 0.77f );
glVertex2f( 0.83f, 0.705f );
glEnd();


glBegin(GL_QUADS); // clock tower top1
glColor3ub(233, 242, 247);
glVertex2f( 0.755f, 0.695f );
glVertex2f( 0.755f, 0.69f );
glVertex2f( 0.845f, 0.69f );
glVertex2f( 0.845f, 0.695f );
glEnd();

glBegin(GL_LINES); // clock tower top1 LINEEEE
glColor3ub(204, 204, 204);
glVertex2f( 0.755f, 0.695f );
glVertex2f( 0.845f, 0.695f );
glVertex2f( 0.755f, 0.69f );
glVertex2f( 0.845f, 0.69f );

glEnd();



glBegin(GL_QUADS); // clock tower top2
glColor3ub(233, 242, 247);
glVertex2f( 0.745f, 0.705f );
glVertex2f( 0.745f, 0.695f );
glVertex2f( 0.855f, 0.695f );
glVertex2f( 0.855f, 0.705f );
glEnd();

glBegin(GL_LINES); // clock tower top2 LINEEEE
glColor3ub(204, 204, 204);
glVertex2f( 0.745f, 0.705f );
glVertex2f( 0.855f, 0.705f );
glVertex2f( 0.745f, 0.695f );
glVertex2f( 0.855f, 0.695f );

glEnd();



glBegin(GL_QUADS); // clock
glColor3ub(223, 232, 236);
glVertex2f( 0.765f, 0.68f );
glVertex2f( 0.765f, 0.56f );
glVertex2f( 0.835f, 0.56f );
glVertex2f( 0.835f, 0.68f );
glEnd();

glBegin(GL_LINES); // clock LINESSSS
glColor3ub(204, 204, 204);
glVertex2f( 0.765f, 0.68f );
glVertex2f( 0.765f, 0.56f );
glVertex2f( 0.765f, 0.56f );
glVertex2f( 0.835f, 0.56f );
glVertex2f( 0.835f, 0.56f );
glVertex2f( 0.835f, 0.68f );
glEnd();

glBegin(GL_LINES); // clock ticks
glColor3ub(115, 115, 115);
glVertex2f( 0.792f, 0.675f );
glVertex2f( 0.798f, 0.66f );

glVertex2f( 0.798f, 0.675f );
glVertex2f( 0.792f, 0.66f );

glVertex2f( 0.802f, 0.675f );
glVertex2f( 0.802f, 0.66f );

glVertex2f( 0.806f, 0.675f );
glVertex2f( 0.806f, 0.66f );

glVertex2f( 0.832f, 0.625f );
glVertex2f( 0.826f, 0.625f );

glVertex2f( 0.832f, 0.62f );
glVertex2f( 0.826f, 0.62f );

glVertex2f( 0.832f, 0.615f );
glVertex2f( 0.826f, 0.615f );

glVertex2f( 0.802f, 0.565f );
glVertex2f( 0.805f, 0.58f );
glVertex2f( 0.805f, 0.58f );
glVertex2f( 0.808f, 0.565f );

glVertex2f( 0.798f, 0.565f );
glVertex2f( 0.798f, 0.58f );

glVertex2f( 0.768f, 0.615f );
glVertex2f( 0.7745f, 0.615f );


glVertex2f( 0.768f, 0.638f );
glVertex2f( 0.7745f, 0.625f );

glVertex2f( 0.768f, 0.625f );
glVertex2f( 0.7745f, 0.638f );

glVertex2f( 0.77f, 0.67f );
glVertex2f( 0.778f, 0.655f );

glVertex2f( 0.83f, 0.67f );
glVertex2f( 0.822f, 0.655f );

glVertex2f( 0.83f, 0.57f );
glVertex2f( 0.822f, 0.585f );

glVertex2f( 0.77f, 0.57f );
glVertex2f( 0.778f, 0.585f );

glEnd();

glPushMatrix();

glTranslatef( 0.8f, 0.62f, 0.0f);

glRotatef(k,0.0,0.0,-0.1);

glBegin(GL_LINES); // clock ticks
glColor3ub(115, 115, 115);
glVertex2f( 0.0f, 0.0f );
glVertex2f( 0.0f, 0.03f );
glEnd();

glPopMatrix();
k+=0.010f;
glLoadIdentity();


glPushMatrix();
glTranslatef( 0.8f, 0.62f, 0.0f);
glRotatef(l,0.0,0.0,-0.1);

glBegin(GL_POLYGON); // clock ticks
glColor3ub(115, 115, 115);
glVertex2f( 0.0f, 0.0f );
glVertex2f( 0.001f, 0.0015f );
glVertex2f( 0.001f, 0.0015f );
glVertex2f( 0.014f, 0.0015f );
glVertex2f( 0.0175f, 0.0f );
glVertex2f( 0.014f, -0.0015f );
glVertex2f( 0.001f, -0.0015f );
glEnd();

glPopMatrix();
l+=0.0030f;
glLoadIdentity();


glPushMatrix();
glTranslatef( 0.8f, 0.62f, 0.0f);

glRotatef(m,0.0,0.0,-0.1);
glBegin(GL_POLYGON); // clock ticks
glColor3ub(115, 115, 115);
glVertex2f( 0.0f, 0.0f );
glVertex2f( -0.001f, 0.0015f );
glVertex2f( -0.001f, -0.0015f );
glVertex2f( -0.0165f, -0.0015f );
glVertex2f( -0.0223f, 0.0f );
glVertex2f( -0.0165f, 0.0015f );
glVertex2f( -0.001f, 0.0015f );
glEnd();

glPopMatrix();
m+=0.0050f;
glLoadIdentity();



glBegin(GL_QUADS); // tower door 1
glColor3ub(223, 232, 236);
glVertex2f( 0.745f, 0.102f );
glVertex2f( 0.745f, 0.26f );
glVertex2f( 0.855f, 0.26f );
glVertex2f( 0.855f, 0.102f );
glEnd();

glBegin(GL_LINES); // tower door 1 LINEEEEEE
glColor3ub(191, 191, 191);
glVertex2f( 0.745f, 0.102f );
glVertex2f( 0.745f, 0.26f );
glVertex2f( 0.745f, 0.26f );
glVertex2f( 0.855f, 0.26f );
glVertex2f( 0.855f, 0.26f );
glVertex2f( 0.855f, 0.102f );
glEnd();




glBegin(GL_QUADS); // tower door 2
glColor3ub(69, 138, 179);
glVertex2f( 0.75f, 0.102f );
glVertex2f( 0.75f, 0.25f );
glVertex2f( 0.85f, 0.25f );
glVertex2f( 0.85f, 0.102f );
glEnd();

glBegin(GL_QUADS); // Window clock Tower
glColor3ub(69, 138, 179);
glVertex2f( 0.675f, 0.21f );
glVertex2f( 0.675f, 0.11f );
glVertex2f( 0.7, 0.11f );
glVertex2f( 0.7f, 0.21f );
glEnd();

glBegin(GL_LINES); // clock building LINEESSSS
glColor3ub(223, 232, 236);
glVertex2f( 0.76f, 0.255f );
glVertex2f( 0.76f, 0.102f );
glVertex2f( 0.78f, 0.255f );
glVertex2f( 0.78f, 0.102f );
glVertex2f( 0.8f, 0.255f );
glVertex2f( 0.8f, 0.102f );
glVertex2f( 0.82f, 0.255f );
glVertex2f( 0.82f, 0.102f );
glVertex2f( 0.84f, 0.255f );
glVertex2f( 0.84f, 0.102f );
glEnd();


glBegin(GL_QUADS); // Window clock Tower 2
glColor3ub(69, 138, 179);
glVertex2f( 0.71f, 0.21f );
glVertex2f( 0.735f, 0.21f );
glVertex2f( 0.735f, 0.11f );
glVertex2f( 0.71f, 0.11f );
glEnd();

glBegin(GL_QUADS); // Window clock Tower 2
glColor3ub(69, 138, 179);
glVertex2f( 0.71f, 0.21f );
glVertex2f( 0.735f, 0.21f );
glVertex2f( 0.735f, 0.11f );
glVertex2f( 0.71f, 0.11f );
glEnd();

glBegin(GL_QUADS); // Window clock Tower 3
glColor3ub(69, 138, 179);
glVertex2f( 0.865f, 0.21f );
glVertex2f( 0.865f, 0.11f );
glVertex2f( 0.89f, 0.11f );
glVertex2f( 0.89f, 0.21f );
glEnd();


glBegin(GL_QUADS); // Window clock Tower 4
glColor3ub(69, 138, 179);
glVertex2f( 0.9f, 0.21f );
glVertex2f( 0.925f, 0.21f );
glVertex2f( 0.925f, 0.11f );
glVertex2f( 0.9f, 0.11f );
glEnd();


glBegin(GL_QUADS); // tower slope
glColor3ub(233, 242, 247);
glVertex2f( 0.76f, 0.54f );
glVertex2f( 0.765f, 0.53f );
glVertex2f( 0.835f, 0.53f );
glVertex2f( 0.84f, 0.54f );
glEnd();







//Cloudeeeeee
glPushMatrix();
glTranslatef(position1,0,0);

GLfloat x17=-.9f; GLfloat y17=.72f; GLfloat radius17 =0.030f;
	int triangleAmount17 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi17 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x17, y17); // center of circle
		for(p = 0; p<= triangleAmount17;p++) {
			glVertex2f(
		            x17 + (radius17 * cos(p *  twicePi17 / triangleAmount17)),
			    y17 + (radius17 * sin(p * twicePi17 / triangleAmount17))
			);
		}
	glEnd();

	GLfloat x18=-.894f; GLfloat y18=.725f; GLfloat radius18 =0.030f;
	int triangleAmount18 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi18 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // window
		glVertex2f(x18, y18); // center of circle
		for(p = 0; p<= triangleAmount18;p++) {
			glVertex2f(
		            x18 + (radius18 * cos(p *  twicePi18 / triangleAmount18)),
			    y18 + (radius18 * sin(p * twicePi18/ triangleAmount18))
			);
		}
	glEnd();


	GLfloat x19=-.885f; GLfloat y19=.75f; GLfloat radius19 =0.030f;
	int triangleAmount19 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x19, y19); // center of circle
		for(p = 0; p<= triangleAmount19;p++) {
			glVertex2f(
		            x19 + (radius19 * cos(p *  twicePi19 / triangleAmount19)),
			    y19 + (radius19 * sin(p * twicePi19/ triangleAmount19))
			);
		}
	glEnd();


	GLfloat x199=-.88f; GLfloat y199=.76f; GLfloat radius199 =0.030f;
	int triangleAmount199= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // window
		glVertex2f(x199, y199); // center of circle
		for(p = 0; p<= triangleAmount199;p++) {
			glVertex2f(
		            x199 + (radius199 * cos(p *  twicePi199 / triangleAmount199)),
			    y199 + (radius199 * sin(p * twicePi199/ triangleAmount199))
			);
		}
	glEnd();

	GLfloat x1991=-.87f; GLfloat y1991=.72f; GLfloat radius1991 =0.030f;
	int triangleAmount1991= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1991 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x1991, y1991); // center of circle
		for(p = 0; p<= triangleAmount1991;p++) {
			glVertex2f(
		            x1991 + (radius1991 * cos(p *  twicePi1991 / triangleAmount1991)),
			    y1991 + (radius1991 * sin(p * twicePi1991/ triangleAmount1991))
			);
		}
	glEnd();

GLfloat x19911=-.85f; GLfloat y19911=.72f; GLfloat radius19911 =0.030f;
	int triangleAmount19911= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19911 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // window
		glVertex2f(x19911, y19911); // center of circle
		for(p = 0; p<= triangleAmount19911;p++) {
			glVertex2f(
		            x19911 + (radius19911 * cos(p *  twicePi19911 / triangleAmount19911)),
			    y19911 + (radius19911 * sin(p * twicePi19911/ triangleAmount19911))
			);
		}
	glEnd();


GLfloat x199111=-.85f; GLfloat y199111=.74f; GLfloat radius199111 =0.030f;
	int triangleAmount199111= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x199111, y199111); // center of circle
		for(p = 0; p<= triangleAmount199111;p++) {
			glVertex2f(
		            x199111 + (radius199111 * cos(p *  twicePi199111 / triangleAmount199111)),
			    y199111 + (radius199111 * sin(p * twicePi199111/ triangleAmount199111))
			);
		}
	glEnd();



GLfloat x1991111=-.83f; GLfloat y1991111=.72f; GLfloat radius1991111 =0.030f;
	int triangleAmount1991111= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1991111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x1991111, y1991111); // center of circle
		for(p = 0; p<= triangleAmount1991111;p++) {
			glVertex2f(
		            x1991111 + (radius1991111 * cos(p *  twicePi1991111 / triangleAmount1991111)),
			    y1991111 + (radius1991111 * sin(p * twicePi1991111/ triangleAmount1991111))
			);
		}
	glEnd();


GLfloat x19911111=-.84f; GLfloat y19911111=.76f; GLfloat radius19911111 =0.030f;
	int triangleAmount19911111= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19911111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // window
		glVertex2f(x19911111, y19911111); // center of circle
		for(p = 0; p<= triangleAmount19911111;p++) {
			glVertex2f(
		            x19911111 + (radius19911111 * cos(p *  twicePi19911111 / triangleAmount19911111)),
			    y19911111 + (radius19911111 * sin(p * twicePi19911111/ triangleAmount19911111))
			);
		}
	glEnd();


	GLfloat x199111111=-.83f; GLfloat y199111111=.72f; GLfloat radius199111111 =0.030f;
	int triangleAmount199111111= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199111111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x199111111, y199111111); // center of circle
		for(p = 0; p<= triangleAmount199111111;p++) {
			glVertex2f(
		            x199111111 + (radius199111111 * cos(p *  twicePi199111111 / triangleAmount199111111)),
			    y199111111 + (radius199111111 * sin(p * twicePi199111111/ triangleAmount199111111))
			);
		}
	glEnd();

		GLfloat x1991111111=-.815f; GLfloat y1991111111=.72f; GLfloat radius1991111111 =0.030f;
	int triangleAmount1991111111= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1991111111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // window
		glVertex2f(x1991111111, y1991111111); // center of circle
		for(p = 0; p<= triangleAmount1991111111;p++) {
			glVertex2f(
		            x1991111111 + (radius1991111111 * cos(p *  twicePi1991111111 / triangleAmount1991111111)),
			    y1991111111 + (radius1991111111 * sin(p * twicePi1991111111/ triangleAmount1991111111))
			);
		}
	glEnd();

	glPopMatrix();

	//cloud 1 end

//sunnnn
    GLfloat x=.58f; GLfloat y=.85f; GLfloat radius =0.07f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 0); // sunnnn
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();





glBegin(GL_QUADS); // WindTower
glColor3ub(240, 251, 255);
glVertex2f( -0.695f, 0.495f );
glVertex2f( -0.675f, 0.495f );
glVertex2f( -0.675, 0.1f );
glVertex2f( -0.695f, 0.1f );
glEnd();

glBegin(GL_LINES); // WindTower
glColor3ub(191, 191, 191);
glVertex2f( -0.675f, 0.495f );
glVertex2f( -0.675, 0.1f );
glVertex2f( -0.695f, 0.1f );
glVertex2f( -0.695f, 0.495f );

glEnd();

glLoadIdentity();

glPushMatrix();

glTranslatef( -0.684f, 0.5144f, 0.0f);

glRotatef(j,0.0,0.0,0.1);

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f( 0.0f, 0.0f );
glVertex2f(-0.026f, 0.008f);
glVertex2f( -0.142f, -0.03f );
glVertex2f( -0.155f, -0.0466f );
glVertex2f( -0.138f, -0.05f );
glVertex2f( -0.0245f, -0.026f );
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f( 0.0f, 0.0f );
glVertex2f(-0.014f, 0.06f);
glVertex2f( -0.01f, 0.15f );
glVertex2f( 0.0f, 0.17f );
glVertex2f( 0.01f, 0.15f );
glVertex2f(0.014f, 0.06f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f( 0.0f, 0.0f );
glVertex2f(0.026f, 0.008f);
glVertex2f( 0.142f, -0.03f );
glVertex2f( 0.155f, -0.0466f );
glVertex2f( 0.138f, -0.05f );
glVertex2f( 0.0245f, -0.026f );
glEnd();


glPopMatrix();
j+=0.060f;
glLoadIdentity();









	GLfloat x6=-.685f; GLfloat y6=.515f; GLfloat radius6 =0.022f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 179, 179); // windmill
		glVertex2f(x6, y6); // center of circle
		for(i = 0; i <= triangleAmount6;i++) {
			glVertex2f(
		            x6 + (radius6 * cos(i *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(i * twicePi6 / triangleAmount6))
			);
		}
	glEnd();

	GLfloat x7=-.685f; GLfloat y7=.515f; GLfloat radius7 =0.018f;
	int triangleAmount7 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x7, y7); // center of circle
		for(i = 0; i <= triangleAmount7;i++) {
			glVertex2f(
		            x7 + (radius7 * cos(i *  twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(i * twicePi7 / triangleAmount7))
			);
		}
	glEnd();

	GLfloat x8=0.8f; GLfloat y8=0.62f; GLfloat radius8 =0.0035f;
	int triangleAmount8 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 102, 102); // windmill
		glVertex2f(x8, y8); // center of circle
		for(i = 0; i <= triangleAmount8;i++) {
			glVertex2f(
		            x8 + (radius8 * cos(i *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(i * twicePi8 / triangleAmount8))
			);
		}
	glEnd();
glutTimerFunc(1500,demo_night,0);
glFlush();
}




////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////

void evening_demo(int val) {

 glutDisplayFunc(evening);


}
void day() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


glBegin(GL_QUADS); //road
glColor3ub(77,77,77);
glVertex2f( -1.0f, 0.1f );
glVertex2f( 1.0f, 0.1f );
glVertex2f( 1.0f, -0.9f );
glVertex2f( -1.0f, -0.9f );
glEnd();


glBegin(GL_QUADS); // road middle lane
glColor3ub(204, 163, 0);
glVertex2f( -1.0f, -0.34f );
glVertex2f( -1.0f, -0.36f );
glVertex2f( 1.0f, -0.36f );
glVertex2f( 1.0f, -0.34f );
glEnd();

glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( -1.0f, -0.3f );
glVertex2f( -1.0f, -0.32f );
glVertex2f( 1.0f, -0.32f );
glVertex2f( 1.0f, -0.3f );
glEnd();

glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( -0.047f, 0.1f );
glVertex2f( -0.04f, 0.1f );
glVertex2f( -0.114f, -0.085f );
glVertex2f( -0.12f, -0.074f );
glEnd();

glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( -0.114f, -0.085f );
glVertex2f( -0.12f, -0.074f );
glVertex2f( -1.0f, -0.074f );
glVertex2f( -1.0f, -0.085f );

glEnd();

glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( 0.35f, 0.1f );
glVertex2f( 0.357f, 0.1f );
glVertex2f( 0.4455f, -0.074f );
glVertex2f( 0.4395f, -0.085f );

glEnd();

glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( 0.25f, -0.6f );
glVertex2f( 0.45f, -0.6f );
glVertex2f( 0.44f, -0.64f );
glVertex2f( 0.24f, -0.64f );

glEnd();


glBegin(GL_QUADS); // road middle lane 2
glColor3ub(204, 163, 0);
glVertex2f( 0.4455f, -0.074f );
glVertex2f( 0.4395f, -0.085f );
glVertex2f( 1.0f, -0.085f );
glVertex2f( 1.0f, -0.074f );
glEnd();

//carriage 1 estart
glPushMatrix();
glTranslatef(position3,0,0);

glBegin(GL_QUADS); //carriage car
glColor3ub(233, 242, 247);
glVertex2f( 0.3f, -0.01f );
glVertex2f( 0.355f, -0.01f );
glVertex2f( 0.355f, -0.06f );
glVertex2f( 0.3f, -0.06f );
glEnd();


glBegin(GL_POLYGON); //carriage car
glColor3ub(233, 242, 247);
glVertex2f( 0.28f, 0.03f );
glVertex2f( 0.265f, -0.01f );
glVertex2f( 0.265f, -0.06f );
glVertex2f( 0.3f, -0.06f );
glVertex2f( 0.3f, 0.03f );
glEnd();

glBegin(GL_POLYGON); //carriage car
glColor3ub(69, 138, 179);
glVertex2f( 0.28f, 0.025f );
glVertex2f( 0.268f, -0.01f );
glVertex2f( 0.268f, -0.042f );
glVertex2f( 0.288f, -0.042f );
glVertex2f( 0.298f, -0.025f );
glVertex2f( 0.298f, 0.025f );
glEnd();

glBegin(GL_LINES); //carriage car
glColor3ub(89, 89, 89);
glVertex2f( 0.305f, -0.015f );
glVertex2f( 0.35f, -0.015f );
glVertex2f( 0.35f, -0.015f );
glVertex2f( 0.35f, -0.035f );
glVertex2f( 0.35f, -0.035f );
glVertex2f( 0.305f, -0.035f );
glVertex2f( 0.305f, -0.035f );
glVertex2f( 0.305f, -0.015f );
glEnd();


glBegin(GL_QUADS); //carriage car
glColor3ub(0, 0, 0);
glVertex2f( 0.355f, -0.045f );
glVertex2f( 0.39f, -0.045f );
glVertex2f( 0.39f, -0.05f );
glVertex2f( 0.355f, -0.05f );
glEnd();

glBegin(GL_QUADS); //carriage car
glColor3ub(204, 204, 204);
glVertex2f( 0.39f, -0.035f );
glVertex2f( 0.484f, -0.035f );
glVertex2f( 0.484f, -0.055f );
glVertex2f( 0.39f, -0.055f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(230, 115, 0);
glVertex2f( 0.286f, 0.04f );
glVertex2f( 0.292f, 0.04f );
glVertex2f( 0.292f, 0.03f );
glVertex2f( 0.286f, 0.03f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(153, 153, 102);
glVertex2f( 0.465f, 0.005f );
glVertex2f( 0.475f, 0.005f );
glVertex2f( 0.475f, -0.035f );
glVertex2f( 0.465f, -0.035f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(134, 89, 45);
glVertex2f( 0.445f, -0.02f );
glVertex2f( 0.465f, -0.02f );
glVertex2f( 0.465f, -0.035f );
glVertex2f( 0.445f, -0.035f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(204, 0, 0);
glVertex2f( 0.435f, 0.01f );
glVertex2f( 0.445f, 0.01f );
glVertex2f( 0.445f, -0.035f );
glVertex2f( 0.435f, -0.035f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(255, 153, 0);
glVertex2f( 0.425f, -0.005f );
glVertex2f( 0.435f, -0.005f );
glVertex2f( 0.435f, -0.035f );
glVertex2f( 0.425f, -0.035f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(51, 204, 204);
glVertex2f( 0.395f, -0.025f );
glVertex2f( 0.425f, -0.025f );
glVertex2f( 0.425f, -0.035f );
glVertex2f( 0.395f, -0.035f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(153, 102, 51);
glVertex2f( 0.395f, -0.025f );
glVertex2f( 0.42f, -0.025f );
glVertex2f( 0.42f, -0.015f );
glVertex2f( 0.395f, -0.015f );
glEnd();



int p;
GLfloat x19911111112=.285f; GLfloat y19911111112=-.062f; GLfloat radius19911111112 =0.011f;
	int triangleAmount19911111112= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19911111112 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // window
		glVertex2f(x19911111112, y19911111112); // center of circle
		for(p = 0; p<= triangleAmount19911111112;p++) {
			glVertex2f(
		            x19911111112 + (radius19911111112 * cos(p *  twicePi19911111112 / triangleAmount19911111112)),
			    y19911111112 + (radius19911111112 * sin(p * twicePi19911111112/ triangleAmount19911111112))
			);
		}
	glEnd();


	GLfloat x199111111123=.285f; GLfloat y199111111123=-.062f; GLfloat radius199111111123 =0.005f;
	int triangleAmount199111111123= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199111111123 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x199111111123, y199111111123); // center of circle
		for(p = 0; p<= triangleAmount199111111123;p++) {
			glVertex2f(
		            x199111111123 + (radius199111111123 * cos(p *  twicePi199111111123 / triangleAmount199111111123)),
			    y199111111123 + (radius199111111123 * sin(p * twicePi199111111123/ triangleAmount199111111123))
			);
		}
	glEnd();



	GLfloat x1992=.34f; GLfloat y1992=-.062f; GLfloat radius1992 =0.011f;
	int triangleAmount1992= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1992 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // window
		glVertex2f(x1992, y1992); // center of circle
		for(p = 0; p<= triangleAmount1992;p++) {
			glVertex2f(
		            x1992 + (radius1992 * cos(p *  twicePi1992 / triangleAmount1992)),
			    y1992 + (radius1992 * sin(p * twicePi1992/ triangleAmount1992))
			);
		}
	glEnd();


	GLfloat x19923=.34f; GLfloat y19923=-.062f; GLfloat radius19923 =0.005f;
	int triangleAmount19923= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19923 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x19923, y19923); // center of circle
		for(p = 0; p<= triangleAmount19923;p++) {
			glVertex2f(
		            x19923 + (radius19923 * cos(p *  twicePi19923 / triangleAmount19923)),
			    y19923 + (radius19923 * sin(p * twicePi19923/ triangleAmount19923))
			);
		}
	glEnd();


	GLfloat x199233=.47f; GLfloat y199233=-.062f; GLfloat radius199233 =0.011f;
	int triangleAmount199233= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199233 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // window
		glVertex2f(x199233, y199233); // center of circle
		for(p = 0; p<= triangleAmount199233;p++) {
			glVertex2f(
		            x199233 + (radius199233 * cos(p *  twicePi199233 / triangleAmount199233)),
			    y199233 + (radius199233 * sin(p * twicePi199233/ triangleAmount199233))
			);
		}
	glEnd();


	GLfloat x199232=.47f; GLfloat y199232=-.062f; GLfloat radius199232 =0.005f;
	int triangleAmount199232= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199232 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x199232, y199232); // center of circle
		for(p = 0; p<= triangleAmount199232;p++) {
			glVertex2f(
		            x199232 + (radius199232 * cos(p *  twicePi199232 / triangleAmount199232)),
			    y199232 + (radius199232 * sin(p * twicePi199232/ triangleAmount199232))
			);
		}
	glEnd();

glPopMatrix();
//carriage 1 end

//carriage 2 start
glPushMatrix();
glTranslatef(position4,0,0);

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(233, 242, 247);
glVertex2f( -0.53f, -0.03f );
glVertex2f( -0.35f, -0.03f );
glVertex2f( -0.35f, -0.06f );
glVertex2f( -0.53f, -0.06f );
glEnd();


glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(191, 191, 191);
glVertex2f( -0.49f, -0.04f );
glVertex2f( -0.37f, -0.04f );
glVertex2f( -0.37f, -0.05f );
glVertex2f( -0.49f, -0.05f );
glEnd();

glBegin(GL_LINES); //carriage car Stairs middle
glColor3ub(140, 140, 140);
glVertex2f( -0.49f, -0.04f );
glVertex2f( -0.37f, -0.04f );
glVertex2f( -0.37f, -0.04f );
glVertex2f( -0.37f, -0.05f );
glVertex2f( -0.37f, -0.05f );
glVertex2f( -0.49f, -0.05f );
glVertex2f( -0.49f, -0.04f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs middle
glColor3ub(255, 102, 0);
glVertex2f( -0.335f, 0.035f );
glVertex2f( -0.325f, 0.035f );
glVertex2f( -0.325f, 0.02f );
glVertex2f( -0.335f, 0.02f );
glEnd();

glBegin(GL_POLYGON); //carriage car Stairs front
glColor3ub(233, 242, 247);
glVertex2f( -0.35f, 0.02f );
glVertex2f( -0.32f, 0.02f );
glVertex2f( -0.3f, -0.02f );
glVertex2f( -0.3f, -0.06f );
glVertex2f( -0.35f, -0.06f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs top left
glColor3ub(230, 230, 230);
glVertex2f( -0.534f, 0.005f );
glVertex2f( -0.41f, 0.1f );
glVertex2f( -0.41f, 0.055f );

glVertex2f( -0.534f, -0.045f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs top right
glColor3ub(230, 230, 230);
glVertex2f( -0.41f, 0.1f );
glVertex2f( -0.41f, 0.055f );
glVertex2f( -0.36f, 0.055f );
glVertex2f( -0.36f, 0.1f );
glEnd();

glBegin(GL_QUADS); //carriage car Stairs top right
glColor3ub(26, 26, 26);
glVertex2f( -0.406f, 0.055f );
glVertex2f( -0.4f, 0.055f );
glVertex2f( -0.4f, -0.0298f );
glVertex2f( -0.406f, -0.0295f );
glEnd();

glBegin(GL_POLYGON); //carriage car glasses
glColor3ub(35, 105, 154);
glVertex2f( -0.345f, 0.01f );
glVertex2f( -0.32f, 0.01f );
glVertex2f( -0.305f, -0.02f );
glVertex2f( -0.305f, -0.04f );
glVertex2f( -0.335f, -0.04f );
glVertex2f( -0.345f, -0.03f );

glEnd();

glBegin(GL_LINES); //carriage car glasses
glColor3ub(128, 128, 128);
glVertex2f( -0.406f, 0.095f );
glVertex2f( -0.364f, 0.095f );

glVertex2f( -0.364f, 0.095f );
glVertex2f( -0.364f, 0.06f );

glVertex2f( -0.364f, 0.06f );
glVertex2f( -0.406f, 0.06f );

glVertex2f( -0.406f, 0.06f );
glVertex2f( -0.406f, 0.095f );


glEnd();



glBegin(GL_LINES); //carriage car glasses
glColor3ub(128, 128, 128);
glVertex2f( -0.42f, 0.08f );
glVertex2f( -0.52f, 0.0f );

glVertex2f( -0.42f, 0.06f );
glVertex2f( -0.52f, -0.02f );

glEnd();

	GLfloat x1992323=-.507f; GLfloat y1992323=-.062f; GLfloat radius1992323 =0.011f;
	int triangleAmount1992323= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1992323 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // window
		glVertex2f(x1992323, y1992323); // center of circle
		for(p = 0; p<= triangleAmount199232;p++) {
			glVertex2f(
		            x1992323 + (radius1992323 * cos(p *  twicePi1992323 / triangleAmount1992323)),
			    y1992323 + (radius1992323 * sin(p * twicePi1992323/ triangleAmount1992323))
			);
		}
	glEnd();




	GLfloat x1992321=-.507f; GLfloat y1992321=-.062f; GLfloat radius1992321 =0.005f;
	int triangleAmount1992321= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1992321 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x1992321, y1992321); // center of circle
		for(p = 0; p<= triangleAmount1992321;p++) {
			glVertex2f(
		            x1992321 + (radius1992321 * cos(p *  twicePi1992321 / triangleAmount1992321)),
			    y1992321 + (radius1992321 * sin(p * twicePi1992321/ triangleAmount1992321))
			);
		}
	glEnd();

	GLfloat x19923211=-.32f; GLfloat y19923211=-.062f; GLfloat radius19923211 =0.011f;
	int triangleAmount19923211= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19923211 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // window
		glVertex2f(x19923211, y19923211); // center of circle
		for(p = 0; p<= triangleAmount19923211;p++) {
			glVertex2f(
		            x19923211 + (radius19923211 * cos(p *  twicePi19923211 / triangleAmount19923211)),
			    y19923211 + (radius19923211 * sin(p * twicePi19923211/ triangleAmount19923211))
			);
		}
	glEnd();


	GLfloat x19923232=-.32f; GLfloat y19923232=-.062f; GLfloat radius19923232 =0.005f;
	int triangleAmount19923232= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19923232 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x19923232, y19923232); // center of circle
		for(p = 0; p<= triangleAmount199232;p++) {
			glVertex2f(
		            x19923232 + (radius19923232 * cos(p *  twicePi19923232 / triangleAmount19923232)),
			    y19923232 + (radius19923232 * sin(p * twicePi19923232/ triangleAmount19923232))
			);
		}
	glEnd();

	glPopMatrix();
	//carriage2 end

glBegin(GL_QUADS); //grass
glColor3ub(89, 192, 89);
glVertex2f( -1.0f, -0.9f );
glVertex2f( 1.0f, -0.9f );
glVertex2f( 1.0f, -1.0f );
glVertex2f( -1.0f, -1.0f );
glEnd();



glBegin(GL_QUADS); //sky
glColor3ub(88, 186, 238);
glVertex2f( -1.0f, 1.0f );
glVertex2f( 1.0f, 1.0f );
glVertex2f( 1.0f, 0.1f );
glVertex2f( -1.0f, 0.1f );
glEnd();

glBegin(GL_TRIANGLES); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( -1.0f, 0.4f );
glVertex2f( -0.5f, 0.1f );
glVertex2f( -1.0f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( -0.9f, 0.1f );
glVertex2f( -0.2f, 0.4f );
glVertex2f( 0.36f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( -0.325f, 0.1f );
glVertex2f( 0.1f, 0.45f );
glVertex2f( 0.4f, 0.16f );

glEnd();

glBegin(GL_TRIANGLES); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( 0.13f, 0.1f );
glVertex2f( 0.55f, 0.4f );
glVertex2f( 0.9f, 0.1f );

glEnd();

glBegin(GL_QUADS); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( 0.36f, 0.1f );
glVertex2f( 0.75f, 0.4f );
glVertex2f( 1.0f, 0.3f );
glVertex2f( 1.0f, 0.1f );
glEnd();

glBegin(GL_QUADS); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( 0.68f, 0.1f );
glVertex2f( 0.95f, 0.35f );
glVertex2f( 1.0f, 0.3f );
glVertex2f( 1.0f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountain 2
glColor3ub(181, 227, 181);
glVertex2f( 0.9f, 0.1f );
glVertex2f( 1.0f, 0.4f );
glVertex2f( 1.0f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountains1
glColor3ub(126, 206, 126);
glVertex2f( -1.0f, 0.3f );
glVertex2f( -0.8f, 0.1f );
glVertex2f( -1.0f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountains1
glColor3ub(126, 206, 126);
glVertex2f( -0.8f, 0.1f );
glVertex2f( -0.54f, 0.3f );
glVertex2f( 0.68f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountains1
glColor3ub(126, 206, 126);
glVertex2f( 0.17f, 0.1f );
glVertex2f( 0.36f, 0.35f );
glVertex2f( 0.9f, 0.1f );

glEnd();


glBegin(GL_TRIANGLES); //mountains1
glColor3ub(126, 206, 126);
glVertex2f( 0.654f, 0.1f );
glVertex2f( 0.9f, 0.25f );
glVertex2f( 1.0f, 0.1f );

glEnd();

glBegin(GL_TRIANGLES); //mountains1
glColor3ub(126, 206, 126);
glVertex2f( 0.9f, 0.1f );
glVertex2f( 1.0f, 0.25f );
glVertex2f( 1.0f, 0.1f );

glEnd();

glBegin(GL_QUADS); //road1
glColor3ub(204, 163, 0);
glVertex2f( -0.3f, -0.6f );
glVertex2f( -0.1f, -0.6f );
glVertex2f( -0.11f, -0.65f );
glVertex2f( -0.31f, -0.65f );

glEnd();

glBegin(GL_QUADS); //road2
glColor3ub(204, 163, 0);
glVertex2f( -0.7f, -0.6f );
glVertex2f( -0.5f, -0.6f );
glVertex2f( -0.51f, -0.65f );
glVertex2f( -0.71f, -0.65f );

glEnd();

glBegin(GL_QUADS); //road3
glColor3ub(204, 163, 0);
glVertex2f( 0.8f, -0.6f );
glVertex2f( 1.0f, -0.6f );
glVertex2f( 1.0f, -0.65f );
glVertex2f( 0.79f, -0.65f );
glEnd();

glBegin(GL_QUADS); //road4
glColor3ub(204, 163, 0);
glVertex2f( -1.0f, -0.6f );
glVertex2f( -0.9f, -0.6f );
glVertex2f( -0.91f, -0.65f );
glVertex2f( -1.0f, -0.65f );
glEnd();

//plane start
glPushMatrix();
glTranslatef(position,0,0);

glBegin(GL_QUADS); //plane
glColor3ub(233, 242, 247);
glVertex2f( 0.23f, -0.5f );
glVertex2f( 0.6f, -0.5f );
glVertex2f( 0.6f, -0.645f );
glVertex2f( 0.23f, -0.645f );
glEnd();

glBegin(GL_QUADS); //plane Back
glColor3ub(233, 242, 247);
glVertex2f( 0.13f, -0.5f );
glVertex2f( 0.23f, -0.5f );
glVertex2f( 0.23f, -0.645f );
glVertex2f( 0.14f, -0.552f );
glEnd();


glBegin(GL_QUADS); //plane  front
glColor3ub(233, 242, 247);
glVertex2f( 0.6f, -0.5f );
glVertex2f( 0.66f, -0.585f );
glVertex2f( 0.65f, -0.61f );
glVertex2f( 0.6f, -0.645f );

glEnd();

glBegin(GL_QUADS); //plane  wings
glColor3ub(69, 138, 179);
glVertex2f( 0.44f, -0.62f );
glVertex2f( 0.55f, -0.62f );
glVertex2f( 0.37f, -0.85f );
glVertex2f( 0.34f, -0.85f );

glEnd();

glBegin(GL_QUADS); //plane  wings2
glColor3ub(69, 138, 179);
glVertex2f( 0.42f, -0.5f );
glVertex2f( 0.52f, -0.5f );
glVertex2f( 0.315f, -0.38f );
glVertex2f( 0.285f, -0.38f );

glEnd();

glBegin(GL_QUADS); //plane  wings3
glColor3ub(69, 138, 179);
glVertex2f( 0.104f, -0.615f );
glVertex2f( 0.124f, -0.615f );
glVertex2f( 0.21f, -0.545f );
glVertex2f( 0.158f, -0.545f );

glEnd();

glBegin(GL_QUADS); //plane backup wings5
glColor3ub(69, 138, 179);
glVertex2f( 0.12f, -0.41f );
glVertex2f( 0.16f, -0.41f );
glVertex2f( 0.23f, -0.5f );
glVertex2f( 0.13f, -0.5f );

glEnd();

glBegin(GL_QUADS); //plane front glass
glColor3ub(35, 105, 154);
glVertex2f( 0.54f, -0.51f );
glVertex2f( 0.607f, -0.51f );
glVertex2f( 0.6496f, -0.57f );
glVertex2f( 0.57f, -0.57f );

glEnd();

glBegin(GL_QUADS); //plane window right to left 1
glColor3ub(35, 105, 154);
glVertex2f( 0.485f, -0.52f );
glVertex2f( 0.515f, -0.52f );
glVertex2f( 0.515f, -0.56f );
glVertex2f( 0.485f, -0.56f );
glEnd();


glBegin(GL_QUADS); //plane window right to left 2
glColor3ub(35, 105, 154);
glVertex2f( 0.44f, -0.52f );
glVertex2f( 0.47f, -0.52f );
glVertex2f( 0.47f, -0.56f );
glVertex2f( 0.44f, -0.56f );
glEnd();


glBegin(GL_QUADS); //plane window right to left 3
glColor3ub(35, 105, 154);
glVertex2f( 0.395f, -0.52f );
glVertex2f( 0.425f, -0.52f );
glVertex2f( 0.425f, -0.56f );
glVertex2f( 0.395f, -0.56f );
glEnd();

glBegin(GL_QUADS); //plane window right to left 4
glColor3ub(35, 105, 154);
glVertex2f( 0.35f, -0.52f );
glVertex2f( 0.38f, -0.52f );
glVertex2f( 0.38f, -0.56f );
glVertex2f( 0.35f, -0.56f );
glEnd();

glBegin(GL_QUADS); //plane window right to left 5
glColor3ub(35, 105, 154);
glVertex2f( 0.305f, -0.52f );
glVertex2f( 0.335f, -0.52f );
glVertex2f( 0.335f, -0.56f );
glVertex2f( 0.305f, -0.56f );
glEnd();

glBegin(GL_QUADS); //plane window right to left 4
glColor3ub(35, 105, 154);
glVertex2f( 0.26f, -0.52f );
glVertex2f( 0.29f, -0.52f );
glVertex2f( 0.29f, -0.56f );
glVertex2f( 0.26f, -0.56f );
glEnd();


glBegin(GL_QUADS); //wheels
glColor3ub(153, 153, 153);
glVertex2f( 0.5865f, -0.645f );
glVertex2f( 0.596f, -0.645f );
glVertex2f( 0.596f, -0.661f );
glVertex2f( 0.5865f, -.661f );
glEnd();

glBegin(GL_QUADS); //wheels
glColor3ub(153, 153, 153);
glVertex2f( 0.238f, -0.645f );
glVertex2f( 0.2465f, -0.645f );
glVertex2f( 0.2465f, -0.661f );
glVertex2f( 0.238f, -.661f );
glEnd();


  int i;
	GLfloat x4=.2415f; GLfloat y4=-.6755f; GLfloat radius4 =0.015f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // wheels plane
		glVertex2f(x4, y4); // center of circle
		for(i = 0; i <= triangleAmount4;i++) {
			glVertex2f(
		            x4 + (radius4 * cos(i *  twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(i * twicePi4 / triangleAmount4))
			);
		}
	glEnd();


	GLfloat x44=.2415f; GLfloat y44=-.6755f; GLfloat radius44 =0.006f;
	int triangleAmount44 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi44 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // wheels plane
		glVertex2f(x44, y44); // center of circle
		for(i = 0; i <= triangleAmount44;i++) {
			glVertex2f(
		            x44 + (radius44 * cos(i *  twicePi44 / triangleAmount44)),
			    y44 + (radius44 * sin(i * twicePi44 / triangleAmount44))
			);
		}
	glEnd();

		GLfloat x5=.5915f; GLfloat y5=-.6752f; GLfloat radius5 =0.015f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 51, 51); // wheels plane
		glVertex2f(x5, y5); // center of circle
		for(i = 0; i <= triangleAmount5;i++) {
			glVertex2f(
		            x5+ (radius5 * cos(i *  twicePi5 / triangleAmount5)),
			    y5+ (radius5 * sin(i * twicePi5 / triangleAmount5))
			);
		}
	glEnd();


		GLfloat x55=.5915f; GLfloat y55=-.6752f; GLfloat radius55 =0.006f;
	int triangleAmount55 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi55 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // wheels plane
		glVertex2f(x55, y55); // center of circle
		for(i = 0; i <= triangleAmount55;i++) {
			glVertex2f(
		            x55+ (radius55 * cos(i *  twicePi55 / triangleAmount55)),
			    y5+ (radius55 * sin(i * twicePi55 / triangleAmount55))
			);
		}
	glEnd();

glPopMatrix();
//plane end

	//cloud 2 start
glPushMatrix();
glTranslatef(position2,0,0);
	GLfloat x9=0.11f; GLfloat y9=0.74f; GLfloat radius9 =0.035f;
	int triangleAmount9 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x9, y9); // center of circle
		for(i = 0; i <= triangleAmount9;i++) {
			glVertex2f(
		            x9 + (radius9 * cos(i *  twicePi9 / triangleAmount9)),
			    y9 + (radius9 * sin(i * twicePi9 / triangleAmount9))
			);
		}
	glEnd();


		GLfloat x10=0.07f; GLfloat y10=0.72f; GLfloat radius10 =0.035f;
	int triangleAmount10 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // windmill
		glVertex2f(x10, y10); // center of circle
		for(i = 0; i <= triangleAmount10;i++) {
			glVertex2f(
		            x10 + (radius10 * cos(i *  twicePi10 / triangleAmount10)),
			    y10 + (radius10 * sin(i * twicePi10 / triangleAmount10))
			);
		}
	glEnd();


	GLfloat x11=0.13f; GLfloat y11=0.72f; GLfloat radius11 =0.035f;
	int triangleAmount11 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // windmill
		glVertex2f(x11, y11); // center of circle
		for(i = 0; i <= triangleAmount11;i++) {
			glVertex2f(
		            x11 + (radius11 * cos(i *  twicePi11 / triangleAmount11)),
			    y11 + (radius11 * sin(i * twicePi11 / triangleAmount11))
			);
		}
	glEnd();


	GLfloat x12=0.15f; GLfloat y12=0.76f; GLfloat radius12 =0.035f;
	int triangleAmount12 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x12, y12); // center of circle
		for(i = 0; i <= triangleAmount12;i++) {
			glVertex2f(
		            x12 + (radius12* cos(i *  twicePi12 / triangleAmount12)),
			    y12 + (radius12 * sin(i * twicePi12 / triangleAmount12))
			);
		}
	glEnd();


	GLfloat x13=0.18f; GLfloat y13=0.72f; GLfloat radius13 =0.035f;
	int triangleAmount13 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // windmill
		glVertex2f(x13, y13); // center of circle
		for(i = 0; i <= triangleAmount13;i++) {
			glVertex2f(
		            x13 + (radius13* cos(i *  twicePi13 / triangleAmount13)),
			    y13 + (radius13 * sin(i * twicePi13 / triangleAmount13))
			);
		}
	glEnd();

	GLfloat x14=0.2f; GLfloat y14=0.72f; GLfloat radius14=0.035f;
	int triangleAmount14 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi14 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x14, y14); // center of circle
		for(i = 0; i <= triangleAmount14;i++) {
			glVertex2f(
		            x14 + (radius14* cos(i *  twicePi14 / triangleAmount14)),
			    y14 + (radius14 * sin(i * twicePi14 / triangleAmount14))
			);
		}
	glEnd();

		GLfloat x15=0.075f; GLfloat y15=0.735f; GLfloat radius15=0.035f;
	int triangleAmount15 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi15 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x15, y15); // center of circle
		for(i = 0; i <= triangleAmount15;i++) {
			glVertex2f(
		            x15 + (radius15* cos(i *  twicePi15 / triangleAmount15)),
			    y15 + (radius15 * sin(i * twicePi15 / triangleAmount15))
			);
		}
	glEnd();

	GLfloat x16=0.075f; GLfloat y16=0.735f; GLfloat radius16=0.035f;
	int triangleAmount16 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi16 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x16, y16); // center of circle
		for(i = 0; i <= triangleAmount16;i++) {
			glVertex2f(
		            x16 + (radius16* cos(i *  twicePi16 / triangleAmount16)),
			    y16 + (radius16 * sin(i * twicePi16 / triangleAmount16))
			);
		}
	glEnd();
glPopMatrix();


	//cloud 2 end



glBegin(GL_QUADS); // middle road
glColor3ub(51, 51, 51);
glVertex2f( -1.0f, 0.1f );
glVertex2f( -1.0f, 0.085f );
glVertex2f( 1.0f, 0.085f );
glVertex2f( 1.0f, 0.1f );

glEnd();

glBegin(GL_QUADS); // middle building
glColor3ub(69, 138, 179);
glVertex2f( -0.05f, 0.1f );
glVertex2f( 0.0f, 0.34f );
glVertex2f( 0.3f, 0.34f );
glVertex2f( 0.36f, 0.1f );
glEnd();

glBegin(GL_LINES);// line mioddle builidng;
glColor3ub(255, 255, 255);
glVertex2f( 0.05f, 0.32f );
glVertex2f( 0.05f, 0.1f );
glVertex2f( 0.09f, 0.32f );
glVertex2f( 0.09f, 0.1f );
glVertex2f( 0.13f, 0.32f );
glVertex2f( 0.13f, 0.1f );
glVertex2f( 0.17f, 0.32f );
glVertex2f( 0.17f, 0.1f );
glVertex2f( 0.21f, 0.32f );
glVertex2f( 0.21f, 0.1f );
glVertex2f( 0.25f, 0.32f );
glVertex2f( 0.25f, 0.1f );
glVertex2f( 0.005f, 0.32f );
glVertex2f( 0.005f, 0.1f );
glVertex2f( 0.295f, 0.32f );
glVertex2f( 0.295f, 0.1f );
glEnd();

glBegin(GL_TRIANGLES); // middle building side
glColor3ub(64, 128, 165);
glVertex2f( 0.005f, 0.32f );
glVertex2f( 0.005f, 0.1f );
glVertex2f( -0.04f, 0.1f );
glEnd();

glBegin(GL_TRIANGLES); // middle building side
glColor3ub(64, 128, 165);
glVertex2f( 0.295f, 0.32f );
glVertex2f( 0.35f, 0.1f );
glVertex2f( 0.295f, 0.1f );
glEnd();

glBegin(GL_QUADS); // right building
glColor3ub(255, 255, 255);
glVertex2f( 0.33f, 0.22f );
glVertex2f( 0.36f, 0.1f );
glVertex2f( 0.654f, 0.1f );
glVertex2f( 0.654f, 0.22f );
glEnd();

glBegin(GL_QUADS); // right building glass 1
glColor3ub(69, 138, 179);
glVertex2f( 0.33f, 0.21f );
glVertex2f( 0.34f, 0.15f );
glVertex2f( 0.65f, 0.15f );
glVertex2f( 0.65f, 0.21f );
glEnd();

glBegin(GL_QUADS); // right building glass 2
glColor3ub(69, 138, 179);
glVertex2f( 0.34f, 0.145f );
glVertex2f( 0.351f, 0.105f );
glVertex2f( 0.65f, 0.105f );
glVertex2f( 0.65f, 0.145f );
glEnd();


glBegin(GL_QUADS); // left building
glColor3ub(255, 255, 255);
glVertex2f( -0.325f, 0.22f );
glVertex2f( -0.025f, 0.22f );
glVertex2f( -0.05f, 0.1f );
glVertex2f( -0.325f, 0.1f );

glEnd();

glBegin(GL_QUADS); // left building glass 1
glColor3ub(69, 138, 179);
glVertex2f( -0.027f, 0.21f );
glVertex2f( -0.04f, 0.15f );
glVertex2f( -0.32f, 0.15f );
glVertex2f( -0.32f, 0.21f );

glEnd();

glBegin(GL_QUADS); // left building glass 1
glColor3ub(69, 138, 179);
glVertex2f( -0.32f, 0.145f );
glVertex2f( -0.32f, 0.105f );
glVertex2f( -0.05f, 0.105f );
glVertex2f( -0.04f, 0.145f );

glEnd();


glBegin(GL_QUADS); // tower
glColor3ub(255, 255, 255);
glVertex2f( 0.34f, 0.22f );
glVertex2f( 0.4f, 0.22f );
glVertex2f( 0.39f, 0.51f );
glVertex2f( 0.35f, 0.51f );
glEnd();

glBegin(GL_QUADS); // tower2
glColor3ub(233, 242, 247);
glVertex2f( 0.33f, 0.595f );
glVertex2f( 0.41f, 0.595f );
glVertex2f( 0.39f, 0.51f );
glVertex2f( 0.35f, 0.51f );
glEnd();

glBegin(GL_QUADS); // tower3
glColor3ub(255, 255, 255);
glVertex2f( 0.33f, 0.74f );
glVertex2f( 0.41f, 0.74f );
glVertex2f( 0.41f, 0.595f );
glVertex2f( 0.33f, 0.595f );
glEnd();

glBegin(GL_QUADS); // tower3 glass 1
glColor3ub(69, 138, 179);
glVertex2f( 0.332f, 0.73f );
glVertex2f( 0.332f, 0.7f );
glVertex2f( 0.408f, 0.7f );
glVertex2f( 0.408f, 0.73f );
glEnd();

glBegin(GL_QUADS); // tower3 glass 2
glColor3ub(69, 138, 179);
glVertex2f( 0.332f, 0.676f );
glVertex2f( 0.332f, 0.64f );
glVertex2f( 0.408f, 0.64f );
glVertex2f( 0.408f, 0.676f );
glEnd();

glBegin(GL_QUADS); // tower3 glass 3
glColor3ub(69, 138, 179);
glVertex2f( 0.332f, 0.636f );
glVertex2f( 0.332f, 0.602f );
glVertex2f( 0.408f, 0.602f );
glVertex2f( 0.408f, 0.636f );
glEnd();


glBegin(GL_QUADS); // tower4
glColor3ub(233, 242, 247);
glVertex2f( 0.325f, 0.75f );
glVertex2f( 0.415f, 0.75f );
glVertex2f( 0.415f, 0.74f );
glVertex2f( 0.325f, 0.74f );
glEnd();


glBegin(GL_TRIANGLES); // topwer point
glColor3ub(255, 255, 255);
glVertex2f( 0.365f, 0.75f );
glVertex2f( 0.375f, 0.75f );
glVertex2f( 0.37f, 0.88f );

glEnd();

glBegin(GL_QUADS); // tower
glColor3ub(255, 255, 255);
glVertex2f( 0.0f, 0.34f );
glVertex2f( 0.3f, 0.34f );
glVertex2f( 0.295f, 0.32f );
glVertex2f( 0.005f, 0.32f );
glEnd();

glBegin(GL_QUADS); // tower
glColor3ub(233, 242, 247);
glVertex2f( 0.0f, 0.34f );
glVertex2f( 0.005f, 0.32f );
glVertex2f( -0.04f, 0.1f );
glVertex2f( -0.05f, 0.1f );
glEnd();

glBegin(GL_QUADS); // tower
glColor3ub(233, 242, 247);
glVertex2f( 0.295f, 0.32f );
glVertex2f( 0.35f, 0.1f );
glVertex2f( 0.36f, 0.1f );
glVertex2f( 0.3f, 0.34f );
glEnd();




glBegin(GL_QUADS); // clock building
glColor3ub(240, 251, 255);
glVertex2f( 0.67f, 0.22f );
glVertex2f( 0.93f, 0.22f );
glVertex2f( 0.93f, 0.1f );
glVertex2f( 0.67f, 0.1f );
glEnd();

glBegin(GL_LINES); // clock building
glColor3ub(204, 204, 204);
glVertex2f( 0.67f, 0.22f );
glVertex2f( 0.93f, 0.22f );
glVertex2f( 0.93f, 0.22f );
glVertex2f( 0.93f, 0.1f );
glVertex2f( 0.67f, 0.1f );
glVertex2f( 0.67f, 0.22f );
glEnd();

glBegin(GL_LINES); // clock building LINEESSSS
glColor3ub(255, 255, 255);
glVertex2f( 0.76f, 0.255f );
glVertex2f( 0.76f, 0.102f );
glVertex2f( 0.78f, 0.255f );
glVertex2f( 0.78f, 0.102f );
glVertex2f( 0.8f, 0.255f );
glVertex2f( 0.8f, 0.102f );
glVertex2f( 0.82f, 0.255f );
glVertex2f( 0.82f, 0.102f );
glVertex2f( 0.84f, 0.255f );
glVertex2f( 0.84f, 0.102f );
glEnd();



glBegin(GL_POLYGON); // clock tower 1
glColor3ub(240, 251, 255);
glVertex2f( 0.76f, 0.69f );
glVertex2f( 0.76f, 0.54f );
glVertex2f( 0.765f, 0.53f );
glVertex2f( 0.835f, 0.53f );
glVertex2f( 0.84f, 0.54f );
glVertex2f( 0.84f, 0.69f );
glEnd();

glBegin(GL_QUADS); // clock tower 2
glColor3ub(240, 251, 255);
glVertex2f( 0.765f, 0.53f );
glVertex2f( 0.765f, 0.22f );
glVertex2f( 0.835f, 0.22f );
glVertex2f( 0.835f, 0.53f );
glEnd();

glBegin(GL_QUADS); // clock tpwer top up
glColor3ub(240, 251, 255);
glVertex2f( 0.76f, 0.705f );
glVertex2f( 0.76f, 0.74f );
glVertex2f( 0.84f, 0.74f );
glVertex2f( 0.84f, 0.705f );
glEnd();

glBegin(GL_TRIANGLES); // clock tpwer top up 2
glColor3ub(236, 242, 243);
glVertex2f( 0.772f, 0.705f );
glVertex2f( 0.828f, 0.705f );
glVertex2f( 0.8f, 0.88f );
glEnd();

glBegin(GL_LINES); // clock tpwer top up 2 LINEEEE
glColor3ub(217, 217, 217);
glVertex2f( 0.772f, 0.705f );
glVertex2f( 0.8f, 0.88f );
glVertex2f( 0.8f, 0.88f );
glVertex2f( 0.828f, 0.705f );
glEnd();

glBegin(GL_POLYGON); // clock tpwer top up hole
glColor3ub(97, 185, 231);
glVertex2f( 0.792f, 0.76f );
glVertex2f( 0.808f, 0.76f );
glVertex2f( 0.808f, 0.795f );
glVertex2f( 0.8f, 0.815f );
glVertex2f( 0.792f, 0.795f );

glEnd();


glBegin(GL_TRIANGLES); // clock tpwer top up 3
glColor3ub(236, 242, 243);
glVertex2f( 0.77f, 0.705f );
glVertex2f( 0.83f, 0.705f );
glVertex2f( 0.8f, 0.77f );
glEnd();

glBegin(GL_LINES); // clock tpwer top up 3 LINE
glColor3ub(204, 204, 204);
glVertex2f( 0.77f, 0.705f );
glVertex2f( 0.8f, 0.77f );
glVertex2f( 0.8f, 0.77f );
glVertex2f( 0.83f, 0.705f );
glEnd();


glBegin(GL_QUADS); // clock tower top1
glColor3ub(233, 242, 247);
glVertex2f( 0.755f, 0.695f );
glVertex2f( 0.755f, 0.69f );
glVertex2f( 0.845f, 0.69f );
glVertex2f( 0.845f, 0.695f );
glEnd();

glBegin(GL_LINES); // clock tower top1 LINEEEE
glColor3ub(204, 204, 204);
glVertex2f( 0.755f, 0.695f );
glVertex2f( 0.845f, 0.695f );
glVertex2f( 0.755f, 0.69f );
glVertex2f( 0.845f, 0.69f );

glEnd();



glBegin(GL_QUADS); // clock tower top2
glColor3ub(233, 242, 247);
glVertex2f( 0.745f, 0.705f );
glVertex2f( 0.745f, 0.695f );
glVertex2f( 0.855f, 0.695f );
glVertex2f( 0.855f, 0.705f );
glEnd();

glBegin(GL_LINES); // clock tower top2 LINEEEE
glColor3ub(204, 204, 204);
glVertex2f( 0.745f, 0.705f );
glVertex2f( 0.855f, 0.705f );
glVertex2f( 0.745f, 0.695f );
glVertex2f( 0.855f, 0.695f );

glEnd();



glBegin(GL_QUADS); // clock
glColor3ub(223, 232, 236);
glVertex2f( 0.765f, 0.68f );
glVertex2f( 0.765f, 0.56f );
glVertex2f( 0.835f, 0.56f );
glVertex2f( 0.835f, 0.68f );
glEnd();

glBegin(GL_LINES); // clock LINESSSS
glColor3ub(204, 204, 204);
glVertex2f( 0.765f, 0.68f );
glVertex2f( 0.765f, 0.56f );
glVertex2f( 0.765f, 0.56f );
glVertex2f( 0.835f, 0.56f );
glVertex2f( 0.835f, 0.56f );
glVertex2f( 0.835f, 0.68f );
glEnd();

glBegin(GL_LINES); // clock ticks
glColor3ub(115, 115, 115);
glVertex2f( 0.792f, 0.675f );
glVertex2f( 0.798f, 0.66f );

glVertex2f( 0.798f, 0.675f );
glVertex2f( 0.792f, 0.66f );

glVertex2f( 0.802f, 0.675f );
glVertex2f( 0.802f, 0.66f );

glVertex2f( 0.806f, 0.675f );
glVertex2f( 0.806f, 0.66f );

glVertex2f( 0.832f, 0.625f );
glVertex2f( 0.826f, 0.625f );

glVertex2f( 0.832f, 0.62f );
glVertex2f( 0.826f, 0.62f );

glVertex2f( 0.832f, 0.615f );
glVertex2f( 0.826f, 0.615f );

glVertex2f( 0.802f, 0.565f );
glVertex2f( 0.805f, 0.58f );
glVertex2f( 0.805f, 0.58f );
glVertex2f( 0.808f, 0.565f );

glVertex2f( 0.798f, 0.565f );
glVertex2f( 0.798f, 0.58f );

glVertex2f( 0.768f, 0.615f );
glVertex2f( 0.7745f, 0.615f );


glVertex2f( 0.768f, 0.638f );
glVertex2f( 0.7745f, 0.625f );

glVertex2f( 0.768f, 0.625f );
glVertex2f( 0.7745f, 0.638f );

glVertex2f( 0.77f, 0.67f );
glVertex2f( 0.778f, 0.655f );

glVertex2f( 0.83f, 0.67f );
glVertex2f( 0.822f, 0.655f );

glVertex2f( 0.83f, 0.57f );
glVertex2f( 0.822f, 0.585f );

glVertex2f( 0.77f, 0.57f );
glVertex2f( 0.778f, 0.585f );

glEnd();

glPushMatrix();

glTranslatef( 0.8f, 0.62f, 0.0f);

glRotatef(k,0.0,0.0,-0.1);

glBegin(GL_LINES); // clock ticks
glColor3ub(115, 115, 115);
glVertex2f( 0.0f, 0.0f );
glVertex2f( 0.0f, 0.03f );
glEnd();

glPopMatrix();
k+=0.010f;
glLoadIdentity();


glPushMatrix();
glTranslatef( 0.8f, 0.62f, 0.0f);
glRotatef(l,0.0,0.0,-0.1);

glBegin(GL_POLYGON); // clock ticks
glColor3ub(115, 115, 115);
glVertex2f( 0.0f, 0.0f );
glVertex2f( 0.001f, 0.0015f );
glVertex2f( 0.001f, 0.0015f );
glVertex2f( 0.014f, 0.0015f );
glVertex2f( 0.0175f, 0.0f );
glVertex2f( 0.014f, -0.0015f );
glVertex2f( 0.001f, -0.0015f );
glEnd();

glPopMatrix();
l+=0.0030f;
glLoadIdentity();


glPushMatrix();
glTranslatef( 0.8f, 0.62f, 0.0f);

glRotatef(m,0.0,0.0,-0.1);
glBegin(GL_POLYGON); // clock ticks
glColor3ub(115, 115, 115);
glVertex2f( 0.0f, 0.0f );
glVertex2f( -0.001f, 0.0015f );
glVertex2f( -0.001f, -0.0015f );
glVertex2f( -0.0165f, -0.0015f );
glVertex2f( -0.0223f, 0.0f );
glVertex2f( -0.0165f, 0.0015f );
glVertex2f( -0.001f, 0.0015f );
glEnd();

glPopMatrix();
m+=0.0050f;
glLoadIdentity();



glBegin(GL_QUADS); // tower door 1
glColor3ub(223, 232, 236);
glVertex2f( 0.745f, 0.102f );
glVertex2f( 0.745f, 0.26f );
glVertex2f( 0.855f, 0.26f );
glVertex2f( 0.855f, 0.102f );
glEnd();

glBegin(GL_LINES); // tower door 1 LINEEEEEE
glColor3ub(191, 191, 191);
glVertex2f( 0.745f, 0.102f );
glVertex2f( 0.745f, 0.26f );
glVertex2f( 0.745f, 0.26f );
glVertex2f( 0.855f, 0.26f );
glVertex2f( 0.855f, 0.26f );
glVertex2f( 0.855f, 0.102f );
glEnd();




glBegin(GL_QUADS); // tower door 2
glColor3ub(69, 138, 179);
glVertex2f( 0.75f, 0.102f );
glVertex2f( 0.75f, 0.25f );
glVertex2f( 0.85f, 0.25f );
glVertex2f( 0.85f, 0.102f );
glEnd();

glBegin(GL_QUADS); // Window clock Tower
glColor3ub(69, 138, 179);
glVertex2f( 0.675f, 0.21f );
glVertex2f( 0.675f, 0.11f );
glVertex2f( 0.7, 0.11f );
glVertex2f( 0.7f, 0.21f );
glEnd();

glBegin(GL_LINES); // clock building LINEESSSS
glColor3ub(223, 232, 236);
glVertex2f( 0.76f, 0.255f );
glVertex2f( 0.76f, 0.102f );
glVertex2f( 0.78f, 0.255f );
glVertex2f( 0.78f, 0.102f );
glVertex2f( 0.8f, 0.255f );
glVertex2f( 0.8f, 0.102f );
glVertex2f( 0.82f, 0.255f );
glVertex2f( 0.82f, 0.102f );
glVertex2f( 0.84f, 0.255f );
glVertex2f( 0.84f, 0.102f );
glEnd();


glBegin(GL_QUADS); // Window clock Tower 2
glColor3ub(69, 138, 179);
glVertex2f( 0.71f, 0.21f );
glVertex2f( 0.735f, 0.21f );
glVertex2f( 0.735f, 0.11f );
glVertex2f( 0.71f, 0.11f );
glEnd();

glBegin(GL_QUADS); // Window clock Tower 2
glColor3ub(69, 138, 179);
glVertex2f( 0.71f, 0.21f );
glVertex2f( 0.735f, 0.21f );
glVertex2f( 0.735f, 0.11f );
glVertex2f( 0.71f, 0.11f );
glEnd();

glBegin(GL_QUADS); // Window clock Tower 3
glColor3ub(69, 138, 179);
glVertex2f( 0.865f, 0.21f );
glVertex2f( 0.865f, 0.11f );
glVertex2f( 0.89f, 0.11f );
glVertex2f( 0.89f, 0.21f );
glEnd();


glBegin(GL_QUADS); // Window clock Tower 4
glColor3ub(69, 138, 179);
glVertex2f( 0.9f, 0.21f );
glVertex2f( 0.925f, 0.21f );
glVertex2f( 0.925f, 0.11f );
glVertex2f( 0.9f, 0.11f );
glEnd();


glBegin(GL_QUADS); // tower slope
glColor3ub(233, 242, 247);
glVertex2f( 0.76f, 0.54f );
glVertex2f( 0.765f, 0.53f );
glVertex2f( 0.835f, 0.53f );
glVertex2f( 0.84f, 0.54f );
glEnd();







//Cloudeeeeee
glPushMatrix();
glTranslatef(position1,0,0);

GLfloat x17=-.9f; GLfloat y17=.72f; GLfloat radius17 =0.030f;
	int triangleAmount17 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi17 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x17, y17); // center of circle
		for(p = 0; p<= triangleAmount17;p++) {
			glVertex2f(
		            x17 + (radius17 * cos(p *  twicePi17 / triangleAmount17)),
			    y17 + (radius17 * sin(p * twicePi17 / triangleAmount17))
			);
		}
	glEnd();

	GLfloat x18=-.894f; GLfloat y18=.725f; GLfloat radius18 =0.030f;
	int triangleAmount18 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi18 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // window
		glVertex2f(x18, y18); // center of circle
		for(p = 0; p<= triangleAmount18;p++) {
			glVertex2f(
		            x18 + (radius18 * cos(p *  twicePi18 / triangleAmount18)),
			    y18 + (radius18 * sin(p * twicePi18/ triangleAmount18))
			);
		}
	glEnd();


	GLfloat x19=-.885f; GLfloat y19=.75f; GLfloat radius19 =0.030f;
	int triangleAmount19 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x19, y19); // center of circle
		for(p = 0; p<= triangleAmount19;p++) {
			glVertex2f(
		            x19 + (radius19 * cos(p *  twicePi19 / triangleAmount19)),
			    y19 + (radius19 * sin(p * twicePi19/ triangleAmount19))
			);
		}
	glEnd();


	GLfloat x199=-.88f; GLfloat y199=.76f; GLfloat radius199 =0.030f;
	int triangleAmount199= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // window
		glVertex2f(x199, y199); // center of circle
		for(p = 0; p<= triangleAmount199;p++) {
			glVertex2f(
		            x199 + (radius199 * cos(p *  twicePi199 / triangleAmount199)),
			    y199 + (radius199 * sin(p * twicePi199/ triangleAmount199))
			);
		}
	glEnd();

	GLfloat x1991=-.87f; GLfloat y1991=.72f; GLfloat radius1991 =0.030f;
	int triangleAmount1991= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1991 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x1991, y1991); // center of circle
		for(p = 0; p<= triangleAmount1991;p++) {
			glVertex2f(
		            x1991 + (radius1991 * cos(p *  twicePi1991 / triangleAmount1991)),
			    y1991 + (radius1991 * sin(p * twicePi1991/ triangleAmount1991))
			);
		}
	glEnd();

GLfloat x19911=-.85f; GLfloat y19911=.72f; GLfloat radius19911 =0.030f;
	int triangleAmount19911= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19911 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // window
		glVertex2f(x19911, y19911); // center of circle
		for(p = 0; p<= triangleAmount19911;p++) {
			glVertex2f(
		            x19911 + (radius19911 * cos(p *  twicePi19911 / triangleAmount19911)),
			    y19911 + (radius19911 * sin(p * twicePi19911/ triangleAmount19911))
			);
		}
	glEnd();


GLfloat x199111=-.85f; GLfloat y199111=.74f; GLfloat radius199111 =0.030f;
	int triangleAmount199111= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x199111, y199111); // center of circle
		for(p = 0; p<= triangleAmount199111;p++) {
			glVertex2f(
		            x199111 + (radius199111 * cos(p *  twicePi199111 / triangleAmount199111)),
			    y199111 + (radius199111 * sin(p * twicePi199111/ triangleAmount199111))
			);
		}
	glEnd();



GLfloat x1991111=-.83f; GLfloat y1991111=.72f; GLfloat radius1991111 =0.030f;
	int triangleAmount1991111= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1991111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x1991111, y1991111); // center of circle
		for(p = 0; p<= triangleAmount1991111;p++) {
			glVertex2f(
		            x1991111 + (radius1991111 * cos(p *  twicePi1991111 / triangleAmount1991111)),
			    y1991111 + (radius1991111 * sin(p * twicePi1991111/ triangleAmount1991111))
			);
		}
	glEnd();


GLfloat x19911111=-.84f; GLfloat y19911111=.76f; GLfloat radius19911111 =0.030f;
	int triangleAmount19911111= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19911111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // window
		glVertex2f(x19911111, y19911111); // center of circle
		for(p = 0; p<= triangleAmount19911111;p++) {
			glVertex2f(
		            x19911111 + (radius19911111 * cos(p *  twicePi19911111 / triangleAmount19911111)),
			    y19911111 + (radius19911111 * sin(p * twicePi19911111/ triangleAmount19911111))
			);
		}
	glEnd();


	GLfloat x199111111=-.83f; GLfloat y199111111=.72f; GLfloat radius199111111 =0.030f;
	int triangleAmount199111111= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi199111111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242); // window
		glVertex2f(x199111111, y199111111); // center of circle
		for(p = 0; p<= triangleAmount199111111;p++) {
			glVertex2f(
		            x199111111 + (radius199111111 * cos(p *  twicePi199111111 / triangleAmount199111111)),
			    y199111111 + (radius199111111 * sin(p * twicePi199111111/ triangleAmount199111111))
			);
		}
	glEnd();

		GLfloat x1991111111=-.815f; GLfloat y1991111111=.72f; GLfloat radius1991111111 =0.030f;
	int triangleAmount1991111111= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1991111111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // window
		glVertex2f(x1991111111, y1991111111); // center of circle
		for(p = 0; p<= triangleAmount1991111111;p++) {
			glVertex2f(
		            x1991111111 + (radius1991111111 * cos(p *  twicePi1991111111 / triangleAmount1991111111)),
			    y1991111111 + (radius1991111111 * sin(p * twicePi1991111111/ triangleAmount1991111111))
			);
		}
	glEnd();

	glPopMatrix();

	//cloud 1 end

//sunnnn
    GLfloat x=-.3f; GLfloat y=.8f; GLfloat radius =0.07f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 0); // sunnnn
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();





glBegin(GL_QUADS); // WindTower
glColor3ub(240, 251, 255);
glVertex2f( -0.695f, 0.495f );
glVertex2f( -0.675f, 0.495f );
glVertex2f( -0.675, 0.1f );
glVertex2f( -0.695f, 0.1f );
glEnd();

glBegin(GL_LINES); // WindTower
glColor3ub(191, 191, 191);
glVertex2f( -0.675f, 0.495f );
glVertex2f( -0.675, 0.1f );
glVertex2f( -0.695f, 0.1f );
glVertex2f( -0.695f, 0.495f );

glEnd();

glLoadIdentity();

glPushMatrix();

glTranslatef( -0.684f, 0.5144f, 0.0f);

glRotatef(j,0.0,0.0,0.1);

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f( 0.0f, 0.0f );
glVertex2f(-0.026f, 0.008f);
glVertex2f( -0.142f, -0.03f );
glVertex2f( -0.155f, -0.0466f );
glVertex2f( -0.138f, -0.05f );
glVertex2f( -0.0245f, -0.026f );
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f( 0.0f, 0.0f );
glVertex2f(-0.014f, 0.06f);
glVertex2f( -0.01f, 0.15f );
glVertex2f( 0.0f, 0.17f );
glVertex2f( 0.01f, 0.15f );
glVertex2f(0.014f, 0.06f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f( 0.0f, 0.0f );
glVertex2f(0.026f, 0.008f);
glVertex2f( 0.142f, -0.03f );
glVertex2f( 0.155f, -0.0466f );
glVertex2f( 0.138f, -0.05f );
glVertex2f( 0.0245f, -0.026f );
glEnd();


glPopMatrix();
j+=0.060f;
glLoadIdentity();









	GLfloat x6=-.685f; GLfloat y6=.515f; GLfloat radius6 =0.022f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 179, 179); // windmill
		glVertex2f(x6, y6); // center of circle
		for(i = 0; i <= triangleAmount6;i++) {
			glVertex2f(
		            x6 + (radius6 * cos(i *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(i * twicePi6 / triangleAmount6))
			);
		}
	glEnd();

	GLfloat x7=-.685f; GLfloat y7=.515f; GLfloat radius7 =0.018f;
	int triangleAmount7 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255); // windmill
		glVertex2f(x7, y7); // center of circle
		for(i = 0; i <= triangleAmount7;i++) {
			glVertex2f(
		            x7 + (radius7 * cos(i *  twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(i * twicePi7 / triangleAmount7))
			);
		}
	glEnd();

	GLfloat x8=0.8f; GLfloat y8=0.62f; GLfloat radius8 =0.0035f;
	int triangleAmount8 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 102, 102); // windmill
		glVertex2f(x8, y8); // center of circle
		for(i = 0; i <= triangleAmount8;i++) {
			glVertex2f(
		            x8 + (radius8 * cos(i *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(i * twicePi8 / triangleAmount8))
			);
		}
	glEnd();

glutTimerFunc(1500,evening_demo,0);
glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(day);
	glutKeyboardFunc(handleKeypress);
	glutMouseFunc(handleMouse);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update1, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update3, 0);
    glutTimerFunc(100, update4, 0);
	glutIdleFunc(Idle);
	glutMainLoop();

	return 0;
}
