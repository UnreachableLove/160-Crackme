#include <stdio.h>
#include <string.h>


int Key()
{
	char szKey[30] = "kXy^rO|*yXo*m\\kMuOn*+";
	int NameLen = 0;

	NameLen = strlen(szKey);

	for (int i = 0; i < NameLen; i++)
	{
		szKey[i] -= 0xa;
	}
	printf("%s", szKey);
	return 0;
}

int main(int argc, char* argv[])
{
	Key();
	return 0;
}