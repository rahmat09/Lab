//#define _CRT_SECURE_NO_WARNINGS // ����� ���������� �� ������� ������
//#include <stdio.h> //  ���������� ������������ ���� stdio.h
//#include <string.h> // ��� strlen
//#include <locale.h> // ���������� ������������ ���� locale.h ����� ��� ������� ����
//#include <stdlib.h>
//int main()
//{
//	setlocale(LC_ALL, "Russian"); // ������� ����� � ������� ��� ������� ���� 
//	int N;// ���������� ��������
//	int Len;// ���������� ��������
//	char MyString[256], **words = NULL, *p = NULL;
//	int i, cnt = 0;
//	//MyString = (char*)malloc(N);
//	//sacan("%9s", MyString);//������ 9 ������
//	fgetc(MyString);
//	Len = strlen(MyString);
//	for (p = strtok(MyString, " "); p != NULL; *p = strtok(NULL, " "))
//	{
//		if ((words = (char**)realloc(words, sizeof(char*) * (cnt + 1))) == NULL) {
//			printf("No memory to new word!\n");
//			exit(1);
//	}
//		if ((words[cnt] = _strdup(p)) == NULL) {
//			printf("Can't duplicate word!\n");
//			exit(1);
//		}
//		++cnt;
//	}
//	for (i = 0; i < cnt; ++i)
//		printf("%s\n", words[i]);
//
//	for (i = 0; i < cnt; ++i) {
//		if (words[i] != NULL) {
//			free(words[i]);
//			words[i] = NULL;
//		}
//	}
//	free(words);
//	words = NULL;
//	system("PAUSE");
//	exit(0);
//	return 0;
//}