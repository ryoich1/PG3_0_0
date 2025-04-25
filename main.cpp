#include<stdio.h>

int Recursive(int n,int m,int l,int a) {

	if (n < m) {
		printf("%d %d  %d\n", m, n, a);
	} else if (n > m) {
		printf("%d %d  %d\n", m, n, a);
		return 1;
	}

	return (Recursive(n + n * 2 - 50, m + l, l, a + 1));
}

int main() {
	
	int l = 1072;//一般の時給
	int m = 1072;//一般のトータル金
	int n = 100;//再帰のトータル金
	int a = 1;//再帰した回数
	int result{};

	printf("一般 再帰 再帰回数\n");
	result = Recursive(n, m, l, a);

	return 0;
}