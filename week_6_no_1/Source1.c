#include <stdio.h>

int main() {
	char digit[11];
	scanf ("%s", digit);
	for (int i=0; digit[i]; i++) {
		if (digit[i] >= 97 && digit[i] <= 122) {
			digit[i] = digit[i] - 32;
			printf("%c", digit[i]);
		}
		else {
			printf("%c", digit[i]);
		}
	 }
}