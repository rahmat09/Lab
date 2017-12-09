//#define _CRT_SECURE_NO_WARNINGS // Чтобы компилятор не выдовал ошибок
//#include <stdio.h> //  Подключаем заголовочный файл stdio.h
//#include <string.h> // для strlen
//#include <locale.h> // Подключаем заголовочный файл locale.h чтобы был русский язык
//#include <stdlib.h>
//int main()
//{
//	setlocale(LC_ALL, "Russian"); // Функция чтобы в консоли был Русский язык 
//	int N;// количество символов
//	int Len;// количество символов
//	char MyString[256], **words = NULL, *p = NULL;
//	int i, cnt = 0;
//	//MyString = (char*)malloc(N);
//	//sacan("%9s", MyString);//Больше 9 нельзя
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