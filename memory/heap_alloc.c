#include <stdio.h>

//�������� 
//data segment
//���� : ���μ��� ����
//�Ҹ� : ���μ��� �Ҹ�
int g_num = 10;

//��������
//���� : �Լ� ȣ���
//�Ҹ� : �Լ� �����
int func(int a, int b, int ** dbl_ptr) {
	int c;
	c = a + b;
	//heap ������ �Ҵ�
	//���� ���� : ���� ���� ��
	*dbl_ptr = (int*)malloc(sizeof(int));
	**dbl_ptr = c;

	return c;
}

int main(void) {
	int a = 10;
	int b = 20;
	int * ptr = NULL;

	func(a, b, &ptr);

	printf("%d \n", *ptr);

	//heap ������ �޸� ���� ����
	//���� : ���� ���� ��
	free(ptr);
	ptr = NULL;



	return 0;
}