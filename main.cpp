#include<stdio.h>

template<typename T>
T Min(T a, T b) {

	if (a < b) {
		return a;
	}
	if (a > b) {
		return b;
	}

	return 0;
}

template <>
char Min<char>(char a, char b) {
	printf("数字以外は代入できません");

	return 0;
}

int main() {

	printf("%d\n", Min<int>(1, 2));
	printf("%f\n", Min<float>(1.0f, 2.0f));
	printf("%lf\n", Min<double>(1.11000f, 2.22000f));
	printf("%c\n", Min<char>('a', 'b'));

	return 0;
}