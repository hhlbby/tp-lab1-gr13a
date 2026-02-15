#include <stdio.h>
#include <math.h>

int main() {
	double l;
	double area;
	// Подсказка удалена
	if (scanf("%lf", &l) != 1) {
		printf("Ошибка: необходимо ввести число.\n");
		return 1;
	}
        if (l <= 0) {
       		 printf("Ошибка: длина окружности должна быть положительным числом.\n");
       		 return 1;
    	}
    	// Подсчёт площади круга
	area = (l * l) / (4.0 * M_PI);
	// Вывод ответа на экран
	printf("Площадь круга: %.4lf\n", area);
	return 0;

}
