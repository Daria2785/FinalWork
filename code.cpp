#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
  int a1; // переменная a
  int b1;
  int c1;
  int d1;

  int M[10];
  for (int i = 0; i < 10; i++) {
    M[i] = i;
    printf("%d", M[i]);
  }

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &a1, &b1, &c1, &d1);

  if (a1 > 0) {
    printf("The first entered number (%d) is positive.\n", a1);
  } else if (a1 == 0) {
    printf("The first entered number (%d) is zero.\n", a1);
  } else {
    printf("The first entered number (%d) is negative.\n", a1);
  }

  if (a1 % 2 != 0 && a1 < 0) {
    int min = a1;
    // Проверяем, является ли b1 нечетным, отрицательным и меньше текущего
    // минимума
    if (b1 % 2 != 0 && b1 < 0 && min > b1) {
      min = b1;
    }
    if (c1 % 2 != 0 && c1 < 0 && min > c1) {
      min = c1;
    }
    if (d1 % 2 != 0 && d1 < 0 && min > d1) {
      min = d1;
    }
    printf("The minimum odd negative number: %d\n", min);
  } else if (b1 % 2 != 0 && b1 < 0) {
    int min = b1;
    // Проверяем, является ли c1 нечетным, отрицательным и меньше текущего
    // минимума
    if (c1 % 2 != 0 && c1 < 0 && min > c1) {
      min = c1;
    }
    if (d1 % 2 != 0 && d1 < 0 && min > d1) {
      min = d1;
    }
	printf("oTRISASEL CHISLA: ");

	if (a1<0) {
			printf("1 chislo:", a1);	
	}
	if (b1<0) {
			printf("2 chislo:", b1);	
	}
	if (c1<0) {
			printf("3 chislo:", c1);	
	}
	if (d1<0) {
			printf("4 chislo:", d1);	
	}

    return 0;
}
