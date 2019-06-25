#include <iostream>
#include <string.h>

using namespace std;
//회문의 길이를 파악해서 그 길이의 절반을 값으로 설정하고 1번째와 n번째, 2번째와 n-1번째를 비교를한다.
//비교를 해서 만약 다르면 어떤 변수값이 변경이 되고, 변수값이 변경이 됬을 때 회문이 아니라는 메세지를 띄운다.
void function(char *input)
{
	
	int length = strlen(input);
	int i = 0;
	int value = 0;
	
	
	if (input[i] != input[length - i - 1])
	{
		value++;
	}
	if (value != 0)
	{
		cout << "회문이 아닙니다";
	}
	else
	{
		cout << "회문입니다.";
	}
}
int main()
{
	char *input;
	input = (char*)malloc(sizeof(char));
	cout << "영단어를 입력하세요 : ";
	cin >> input;
	function(input);
	return 0;
}