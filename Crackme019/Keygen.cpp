#include <stdio.h>
#include <string.h>
#include <Windows.h>

int Key()
{
	char szName[20] = { 0 };
	int NameLen = 0;
	int code = 0x81276345;

	printf("请输入用户名:");
	scanf_s("%s", szName, 20);

	NameLen = strlen(szName);
	for (int i = 0; i < NameLen; i++)
	{
		code += szName[i];
		code = code ^ (i << 8);
		code = code * ((~(NameLen * i)) * (i + 1));
	}

	printf("%lu", code);
	return 0;
}

int main(int argc, char* argv[])
{
	Key();
	return 0;
}