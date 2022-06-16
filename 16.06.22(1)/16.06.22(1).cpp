#include <iostream>

using namespace std;

template<class Type>
Type Function(Type array[], Type size)
{
	Type max = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}

	return max;
}

int main() // Вариант 5
{
	setlocale(LC_ALL, "Rus");

	cout << "---Вариант 5---\n\n" << endl;

	cout << "Запонение массива int-ов\nВведите желаемое количество элементов массива..." << endl;
	int sizeInt;
	cin >> sizeInt;

	int* arrayInt = new int[sizeInt];

	for (int i = 0; i < sizeInt; i++)
	{
		cout << "Введите " << i << "-й элемент массива..." << endl;
		cin >> arrayInt[i];
	}

	cout << "\nПолучившийся массив: \n" << endl;
	for (int i = 0; i < sizeInt; i++)
		cout << "[" << i << "] = " << arrayInt[i] << "\t" << endl;

	int resultInt = Function<int>(arrayInt, sizeInt);

	cout << "\nЗапонение массива float-ов\nВведите желаемое количество элементов массива..." << endl;
	int sizeFloat;
	cin >> sizeFloat;

	float* arrayFloat = new float[sizeFloat];

	for (int i = 0; i < sizeFloat; i++)
	{
		cout << "Введите " << i << "-й элемент массива..." << endl;
		cin >> arrayFloat[i];
	}

	cout << "\nПолучившийся массив: \n" << endl;
	for (int i = 0; i < sizeFloat; i++)
		cout << "[" << i << "] = " << arrayFloat[i] << "\t" << endl;

	float resultFloat = Function<float>(arrayFloat, sizeFloat);

	cout << "\nЗапонение массива double-ов\nВведите желаемое количество элементов массива..." << endl;
	int sizeDouble;
	cin >> sizeDouble;

	double* arrayDouble = new double[sizeDouble];

	for (int i = 0; i < sizeDouble; i++)
	{
		cout << "Введите " << i << "-й элемент массива..." << endl;
		cin >> arrayDouble[i];
	}

	cout << "\nПолучившийся массив: \n" << endl;
	for (int i = 0; i < sizeDouble; i++)
		cout << "[" << i << "] = " << arrayDouble[i] << "\t" << endl;

	double resultDouble = Function<double>(arrayDouble, sizeDouble);

	cout << "Максимальный эл-т массива int-ов = " << resultInt << "\n" << endl;
	cout << "Максимальный эл-т массива float-ов = " << resultFloat << "\n" << endl;
	cout << "Максимальный эл-т массива double-ов = " << resultDouble << "\n" << endl;
}