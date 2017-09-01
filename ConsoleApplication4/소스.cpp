/*
 * YiT 2017 샘플
 * 
 *
 */

#include <stdio.h>
#include <Windows.h>
#include <string>

int show()
{
	//printf("비밀번호는 0678! \n");
	BOOL result = SetFileAttributes(L"D:\personal", FILE_ATTRIBUTE_NORMAL);
	if (result == true)
	{
		printf("D드라이브를 확인해 봐 ㅎㅎ\n");

	}
	else {
		printf("잠금해제 실패!!! \n");
	}
	
	return 0;
}


int hide()
{
	//printf("비밀번호는 0678! \n");
	BOOL result = SetFileAttributes(L"D:\personal", FILE_ATTRIBUTE_HIDDEN);
	if (result == true)
	{
		printf("폴더를 숨겼다 라져\n");

	}
	else {
		printf("잠금설정 실패!!! \n");
	}

	return 0;
}

int main()
{
	char input[4] = ""; 
	//입력된 값를 저장하는 곳

	char password_1[4] = "C++";
	//비밀번호
	char password_2[4] = "C--";

	printf("3자리 비밀번호를 입력하세요 : ");
	//비밀번호를 입력하세요 라고 표시
	
	scanf_s("%s", &input, sizeof(input));
	//input 변수에 받은 문자열 저장


	printf("\n");

	if (strcmp(input, password_1) == 0)
	{
		//만일 입력된 값이 비밀번호라면
		show();
		//비밀번호를 풀었을때의 함수 실행
	}
	else if (strcmp(input, password_2) == 0)
	{
		hide();
	}
	else
	{
		printf("비밀번호 (%s) 가 아닙니다\n", input);
		//비밀번호가 아니라고 표시하고
		main();
		//메인 함수를 실행한다.
	}
	return 0;
}