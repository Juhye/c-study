#include <cstdio>
void add(int x) {
	int sum = 0;
	for (int i = 0; i <= x; i++) {
		sum += i;
	}

	printf("%d", sum);
}

int add2(int x) {
	int sum = 0;
	for (int i = 0; i <= x; i++) {
		sum += i;
	}

	return sum;
}


int main(int argc, char* argv[])//얘가 정석이다!
{
	//for (int i=0; i <= 100; i=i+2) {//i+=2
	//	printf("%d\t", i);
	//}
	int x = 55;
	int y = add2(10);
	printf("%d", y);

	getchar();//입력함수
	return 0;

}//0부터 x 까지의 덧셈함수 만들오라