#define FREEGLUT_STATIC

#include <GL/glut.h> // ���C�u�����p�w�b�_�t�@�C���̓ǂݍ���

// �\�����������̊֐��ŋL��
void display(void) {
	glClearColor(1.0, 1.0, 1.0, 1.0);  // �����F�w��
	glClear(GL_COLOR_BUFFER_BIT);     // ��ʏ���

	/* �����ɕ`��Ɋւ���v���O�����R�[�h������ */

	glFlush(); // ��ʏo��
}

// ���C���v���O����
int main(int argc, char* argv[]) {
	glutInit(&argc, argv);          // ���C�u�����̏�����
	glutInitWindowSize(400, 400);  // �E�B���h�E�T�C�Y���w��
	glutCreateWindow(argv[0]);      // �E�B���h�E���쐬
	glutDisplayFunc(display);       // �\���֐����w��
	glutMainLoop();                 // �C�x���g�҂�
	return 0;
}