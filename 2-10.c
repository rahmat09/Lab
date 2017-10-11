#define _CRT_SECURE_NO_WARNINGS // Чтобы компилятор не выдовал ошибок
#include <stdio.h> //  Подключаем заголовочный файл stdio.h
#include <locale.h> // Подключаем заголовочный файл locale.h чтобы был русский язык
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
int main() {
	setlocale(LC_ALL, "Russian"); // Функция чтобы в консоли был Русский язык 
	int N;
	int *mass;
	double Resault;
	int counter;
	int sum;
	sum = 0;
	scanf("%d",&N); // Водим размер массива
	counter = 0;
	mass =(int*) malloc(N * sizeof(int)); //Выделяем пямть под массив
	for (int i = 0; i < N; i++) // В цыкле заполняем массив
	{
		printf("a[%d] = ", i);
		scanf("%d", &mass[i]);
	}
	for (int i = 0; i < N; i++) // Вывод массива
	{
		printf("%d", mass[i]);
	}
	for (int i = 0; i < N; i++) // В цыкле ищем чётные элементы
	{
		if (mass[i] % 2 == 0)
		{
			counter=counter+1;// Количество чётных элементов
			sum =sum+mass[i]; // Сумма чётных элементов
		}
	}
	if (counter == 0) // если у нас чётных элементов нет
	{
		printf("Чётных элеметов нет");
	}
	Resault = sum / counter;// Вычесляем среднее арефметическое чётных элементов массива
	printf("Результат %f",Resault); // Выводим результат на экран
	free(mass);// Освобождаем память выделенную под динамический массив
	system("PAUSE");
	return 0;// функция возврощает 0
}