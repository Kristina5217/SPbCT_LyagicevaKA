#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <ctime>
int main()
{
	struct tm* data;
	char Now_data[20];
	const time_t t = time(NULL);
	data = localtime(&t);
	strftime(Now_data, 20, "%d.%m.%Y", data);
	printf("%s\n", Now_data);
	system("pause");
	return 0;
}