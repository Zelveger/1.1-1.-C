#include <stdio.h>
int main(void) {
int mh, mw, sum, i;
mh = 10;
mw = 10;
//mw = getchar() - '0';
//переменные для ввода высоты и ширины таблицы заданы, но,
//так как отсутствует возможность использования функций считывания символов,
//то возможность их ввода переменных не осуществлена.
sum = mw*mh;
i=1;

while (sum % 10 != sum) {
	++i;
	sum = sum/10;
	} 
for (int a = 0, b = 1; b <= mh;) {
	++a;
	printf("%*d", (a == 1) ? ((i <= 2) ? 2 : i-1) : i+1, a*b);
	if (a % mw == 0) {
		printf("\n");
		a = 0;
		++b;
					}
								}
return 0;
			}
