#include<cstdio>

void swap(int*x, int*y) {
	int z = *y;
	*y = *x;
	*x = z;
}

int main() {
	int x = 5, y = 20;
	swap(&x, &y);

	printf("%d %d", x, y);
//	const char* name = "abcdef";
//	int numbers[5] = {1,2,3,4,5};
//	int* pNumbers = numbers;
//	printf("%d", *pNumbers + 0);
//	printf("%d", pNumbers[0]);
//
///*
//	printf("%c", name[0]);
//	printf("%c", name[1]);
//	printf("%c", name[2]);
//	printf("%c", name[3]);
//	printf("%c", name[4]);
//	printf("%c", name[5]);
//
//	printf("%c", *name+0);
//	printf("%c", *name+1);
//	printf("%c", *name+2);
//	printf("%c", *name+3);
//	printf("%c", *name+4);
//	printf("%c", *name+5);
//	*/
//
//	printf("%s", name+3);
//
//	for (int i = 0; name[i] != '\0'; i++) {
//		printf("%c", *name + i);
//	}
//
	getchar();
}