#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int year, age;
	printf("Введите год рождения: ");
	scanf("%d", &year);
	age = 2026 - year;
	if (age % 10 == 1 && age % 100 != 11) {
		printf("Вам %d год\n", age);
	}
	else if (age % 10 >= 2 && age % 10 <= 4 &&
		(age % 100 < 12 || age % 100 > 14)) {
		printf("Вам %d года\n", age);
	}
	else {
		printf("Вам %d лет\n", age);
	}
	return 0;
}