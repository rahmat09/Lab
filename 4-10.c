#define _CRT_SECURE_NO_WARNINGS // ����� ���������� �� ������� ������
#include <stdio.h> //  ���������� ������������ ���� stdio.h
#include <string.h> // ��� strlen
#include <locale.h> // ���������� ������������ ���� locale.h ����� ��� ������� ����
//#define STRLEN 512              //������������ ����� ������
#include <stdlib.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	// ����������, � ������� ����� ������� ��������� �� ���������
	// ����� ������ 
	FILE *mf,*EndFile;
	int counter = 0;
	// ����������, � ������� ���������� ����� ���������� ����������� ������
	char str[256];
	char TempSymbol; // ��������� ��������� ��� �������� �������
	//���������, � ������� ����� ������� ����� �������, � ������� ������� 
	// ������, ��� NULL ���� ��������� ����� ����� ��� ��������� ������
	char *estr;
	// �������� ����� � ������� ������� ������� ������ � �������� � ���� 
	// ������ ������
	printf("�������� ����� : ");
	mf = fopen("One.txt", "r");
	EndFile = fopen("End_Feil.txt", "w");
	// �������� �������� �����
	if (mf == NULL) { printf("������\n"); return -1; }
	else printf("���������\n");
	printf("������� ������ : \n");
	//������ (���������) ������ �� ����� � ����������� �����
	while (1)
	{
		// ������ ����� ������  �� �����
		estr = fgets(str, sizeof(str), mf);

		//�������� �� ����� ����� ��� ������ ������
		if (estr == NULL)
		{
			// ���������, ��� ������ ���������: �������� ����
			// ��� ��� ������ ������
			if (feof(mf) != 0)
			{
				//���� ���� ����������, ������� ��������� � ���������� 
				//������ � ������� �� ������������ �����
				printf("\n������ ����� ���������\n");
				break;
			}
			else
			{
				//���� ��� ������ ��������� ������, ������� ��������� 
				//�� ������ � ������� �� ������������ �����
				printf("\n������ ������ �� �����\n");
				break;
			}
		}
		//���� ���� �� ����������, � �� ���� ������ ������ 
		//������� ��������� ������  �� �����
		printf("%s\n", str);
		char* words = strtok(str, " ,.-");// ������� strtok ��������� ����� ������ � ������
		while (words != NULL)// ���� � ������� �� ��������� �������� ������ � �����
		{
			counter++;
			TempSymbol = words[0]; // �� �������� ��������� ����������� ������ ������ 
			words[0] = words[strlen(words) - 1]; // ������ ������ � ����� �������� �� ���������
			words[strlen(words) - 1] = TempSymbol;// ��������� ������ � ����� �������� �� ������
			printf("%s\n", words);// ����� ��������� ����� ����� ������
			fprintf(EndFile, "%s\n", words);
			words = strtok(NULL, " ,.-"); // ���������� ������ �� �������
		}
	}

	// ��������� ����
	printf("�������� ����� : ");
	fclose(EndFile);
	if (fclose(mf) == EOF) printf("������\n");
	else printf("���������\n");
	system("PAUSE");
	return 0;
}