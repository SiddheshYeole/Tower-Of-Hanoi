#include<GL/glut.h>
#include<GL/gl.h>


void init()
{
	//glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0,0,0,1);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0,10.0,0.0,10.0,-1.0,1.0);
}	

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(0.0,0.9,0.0);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(10.0,0.9,0.0);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(10.0,1.0,0.0);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(0.0,1.0,0.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(1.9,1.0,0.0);
	glColor3f(0.0,1.0,0.0);
	glVertex3f(2.1,1.0,0.0);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(2.1,8.0,0.0);
	glColor3f(1.0,0.5,0.0);
	glVertex3f(1.9,8.0,0.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(4.9,1.0,0.0);
	glColor3f(0.0,1.0,0.0);
	glVertex3f(5.1,1.0,0.0);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(5.1,8.0,0.0);
	glColor3f(1.0,0.5,0.0);
	glVertex3f(4.9,8.0,0.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(7.9,1.0,0.0);
	glColor3f(0.0,1.0,0.0);
	glVertex3f(8.1,1.0,0.0);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(8.1,8.0,0.0);
	glColor3f(1.0,0.5,0.0);
	glVertex3f(7.9,8.0,0.0);
	glEnd();
	glFlush();
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	//glutInitWindowPosition(200,200);
	glutInitWindowSize(640,480);
	glutCreateWindow("Square");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
		
