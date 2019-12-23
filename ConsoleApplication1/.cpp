#include <glut.h>					
#include <gl.h>						
#include <glu.h>	

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);	//컬러버퍼에 초기화 색을 가함
	glRotatef(1, 0, 1, 1);
	glutWireTeapot(0.5);
	glutSwapBuffers();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(200, 300);
	glutCreateWindow("OpenGL Example Drawing");
	glutDisplayFunc(MyDisplay);
	glutIdleFunc(MyDisplay);
	glutMainLoop();
	return 0;
}
