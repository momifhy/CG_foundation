#define FREEGLUT_STATIC

#include <GL/glut.h>
#include <cmath>

void display(void) {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3d(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++) {
		double x = cos(i * 3.14159 / 180);
		double y = sin(i * 3.14159 / 180);
		glVertex2d(x * 0.9, y * 0.9);
	}
	glEnd();

	glColor3d(0, 0, 0);
	glBegin(GL_LINE_LOOP);
		for (int i = 0; i < 360; i++) {
			double x = cos(i * 3.14159 / 180);
			double y = sin(i * 3.14159 / 180);
			glVertex2d(x * 0.8, y * 0.8);
		}
	glEnd();

	glBegin(GL_LINE_LOOP);
		for (int i = 0; i < 360; i++) {
			double x = cos(i * 3.14159 / 180);
			double y = sin(i * 3.14159 / 180);
			glVertex2d(x * 0.5, y * 0.5);
		}
	glEnd();

	glBegin(GL_LINE_LOOP);
		for (int i = 0; i < 360; i++) {
			double x = cos(i * 3.14159 / 180);
			double y = sin(i * 3.14159 / 180);
			glVertex2d(x * 0.15 + (0.65/sqrt(2)), y * 0.15 + (0.65/sqrt(2)));
		}
	glEnd();

	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++) {
		double x = cos(i * 3.14159 / 180);
		double y = sin(i * 3.14159 / 180);
		glVertex2d(x * 0.15 + cos(3.14159*105/180)*0.65, y * 0.15 + sin(3.14159*105/180)*0.65);
	}
	glEnd();

	glBegin(GL_LINE_LOOP);
		for (int i = 0; i < 360; i++) {
			double x = cos(i * 3.14159 / 180);
			double y = sin(i * 3.14159 / 180);
			glVertex2d(x * 0.15 + cos(3.14159*165/180)*0.65, y * 0.15 + sin(3.14159*165/180)*0.65);
		}
	glEnd();

	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++) {
		double x = cos(i * 3.14159 / 180);
		double y = sin(i * 3.14159 / 180);
		glVertex2d(x * 0.15 - (0.65/sqrt(2)), y * 0.15 - (0.65/sqrt(2)));
	}
	glEnd();

	glBegin(GL_LINE_LOOP);
		for (int i = 0; i < 360; i++) {
			double x = cos(i * 3.14159 / 180);
			double y = sin(i * 3.14159 / 180);
			glVertex2d(x * 0.15 + cos(3.14159*285/180)*0.65, y * 0.15 + sin(3.14159*285/180)*0.65);
		}
	glEnd();

	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++) {
		double x = cos(i * 3.14159 / 180);
		double y = sin(i * 3.14159 / 180);
		glVertex2d(x * 0.15 + cos(3.14159*345/180)*0.65, y * 0.15 + sin(3.14159*345/180)*0.65);
	}
	glEnd();
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++) {
		double x = cos(i * 3.14159 / 180);
		double y = sin(i * 3.14159 / 180);
		glVertex2d(x * 0.03 + (0.65/sqrt(2)), y * 0.03 + (0.65/sqrt(2)));
	}
	glEnd();

	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++) {
		double x = cos(i * 3.14159 / 180);
		double y = sin(i * 3.14159 / 180);
		glVertex2d(x * 0.03 + cos(3.14159*105/180)*0.65, y * 0.03 + sin(3.14159*105/180)*0.65);
	}
	glEnd();

	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++) {
		double x = cos(i * 3.14159 / 180);
		double y = sin(i * 3.14159 / 180);
		glVertex2d(x * 0.03 + cos(3.14159*165/180)*0.65, y * 0.03 + sin(3.14159*165/180)*0.65);
	}
	glEnd();

	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++) {
		double x = cos(i * 3.14159 / 180);
		double y = sin(i * 3.14159 / 180);
		glVertex2d(x * 0.03 - (0.65/sqrt(2)), y * 0.03 - (0.65/sqrt(2)));
	}
	glEnd();

	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++) {
		double x = cos(i * 3.14159 / 180);
		double y = sin(i * 3.14159 / 180);
		glVertex2d(x * 0.03 + cos(3.14159*285/180)*0.65, y * 0.03 + sin(3.14159*285/180)*0.65);
	}
	glEnd();

	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++) {
		double x = cos(i * 3.14159 / 180);
		double y = sin(i * 3.14159 / 180);
		glVertex2d(x * 0.03 + cos(3.14159*345/180)*0.65, y * 0.03 + sin(3.14159*345/180)*0.65);
	}
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2d(0.65/sqrt(2), 0.65/sqrt(2));
	glVertex2d(cos(3.14159*165/180)*0.65, sin(3.14159*165/180)*0.65);
	glVertex2d(cos(3.14159*285/180)*0.65, sin(3.14159*285/180)*0.65);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2d(cos(3.14159*105/180)*0.65, sin(3.14159*105/180)*0.65);
	glVertex2d(-0.65/sqrt(2), -0.65/sqrt(2));
	glVertex2d(cos(3.14159*345/180)*0.65, sin(3.14159*345/180)*0.65);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2d(cos(3.14159*75/180)*0.65/sqrt(3), sin(3.14159*75/180)*0.65/sqrt(3));
	glVertex2d(cos(3.14159*195/180)*0.65/sqrt(3), sin(3.14159*195/180)*0.65/sqrt(3));
	glVertex2d(cos(3.14159*315/180)*0.65/sqrt(3), sin(3.14159*315/180)*0.65/sqrt(3));
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2d(cos(3.14159*135/180)*0.65/sqrt(3), sin(3.14159*135/180)*0.65/sqrt(3));
	glVertex2d(cos(3.14159*255/180)*0.65/sqrt(3), sin(3.14159*255/180)*0.65/sqrt(3));
	glVertex2d(cos(3.14159*15/180)*0.65/sqrt(3), sin(3.14159*15/180)*0.65/sqrt(3));
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2d(0.65/sqrt(2)/3, 0.65/sqrt(2)/3);
	glVertex2d(cos(3.14159*165/180)*0.65/3, sin(3.14159*165/180)*0.65/3);
	glVertex2d(cos(3.14159*285/180)*0.65/3, sin(3.14159*285/180)*0.65/3);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2d(cos(3.14159*105/180)*0.65/3, sin(3.14159*105/180)*0.65/3);
	glVertex2d(-0.65/sqrt(2)/3, -0.65/sqrt(2)/3);
	glVertex2d(cos(3.14159*345/180)*0.65/3, sin(3.14159*345/180)*0.65/3);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2d(0, 0.9);
	glVertex2d(0.9/2*sqrt(3), 0.9/2);
	glVertex2d(0.9/2*sqrt(3), -0.9/2);
	glVertex2d(0, -0.9);
	glVertex2d(-0.9/2*sqrt(3), -0.9/2);
	glVertex2d(-0.9/2*sqrt(3), 0.9/2);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2d(0.9/2, 0.9/2*sqrt(3));
	glVertex2d(0.9, 0);
	glVertex2d(0.9/2, -0.9/2*sqrt(3));
	glVertex2d(-0.9/2, -0.9/2*sqrt(3));
	glVertex2d(-0.9, 0);
	glVertex2d(-0.9/2, 0.9/2*sqrt(3));
	glEnd();


	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(400, 400);
	glutCreateWindow(argv[0]);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}