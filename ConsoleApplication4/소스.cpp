/*
 * YiT 2017 ����
 * 
 *
 */

#include <stdio.h>
#include <Windows.h>
#include <string>

int show()
{
	//printf("��й�ȣ�� 0678! \n");
	BOOL result = SetFileAttributes(L"D:\personal", FILE_ATTRIBUTE_NORMAL);
	if (result == true)
	{
		printf("D����̺긦 Ȯ���� �� ����\n");

	}
	else {
		printf("������� ����!!! \n");
	}
	
	return 0;
}


int hide()
{
	//printf("��й�ȣ�� 0678! \n");
	BOOL result = SetFileAttributes(L"D:\personal", FILE_ATTRIBUTE_HIDDEN);
	if (result == true)
	{
		printf("������ ����� ����\n");

	}
	else {
		printf("��ݼ��� ����!!! \n");
	}

	return 0;
}

int main()
{
	char input[4] = ""; 
	//�Էµ� ���� �����ϴ� ��

	char password_1[4] = "C++";
	//��й�ȣ
	char password_2[4] = "C--";

	printf("3�ڸ� ��й�ȣ�� �Է��ϼ��� : ");
	//��й�ȣ�� �Է��ϼ��� ��� ǥ��
	
	scanf_s("%s", &input, sizeof(input));
	//input ������ ���� ���ڿ� ����


	printf("\n");

	if (strcmp(input, password_1) == 0)
	{
		//���� �Էµ� ���� ��й�ȣ���
		show();
		//��й�ȣ�� Ǯ�������� �Լ� ����
	}
	else if (strcmp(input, password_2) == 0)
	{
		hide();
	}
	else
	{
		printf("��й�ȣ (%s) �� �ƴմϴ�\n", input);
		//��й�ȣ�� �ƴ϶�� ǥ���ϰ�
		main();
		//���� �Լ��� �����Ѵ�.
	}
	return 0;
}