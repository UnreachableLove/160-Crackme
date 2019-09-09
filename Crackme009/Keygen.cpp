#include <stdio.h>
#include <string.h>

int Key()
{
	char szName[20] = { 0 };
	char szKey[30] = { 0 };
	int NameLen = 0;
	__int64 Result = 0;

	printf("请输入用户名:");
	scanf_s("%s", szName, 20);

	NameLen = strlen(szName);
	for (int i = 0; i < NameLen; i++)
	{
		Result += szName[i];
	}
	Result *= 1234567890;

	sprintf(szKey, "%I64d", Result);
	szKey[3] = '-';
	szKey[8] = '-';

	printf("%s", szKey);

	return 0;
}


int main(int argc, char* argv[])
{
	Key();
	return 0;
}