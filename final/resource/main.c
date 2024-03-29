#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>

void playGame(const char *answer);
void calculateAB(const char *answer, const char *guess, int *A, int *B);
void isValidGuess(const char *guess);
void generalRandomAnswer(const *answer);
void displayGameStatus(int attempts);

int main() {
	srand((unsigned int)time(NULL));
	char answer[5];

	generalRandomAnswer(answer);

	printf("歡迎來到猜數字遊戲");
	playGame(answer);

	return 0;
}

void playGame(const char *answer) {
	int max = 10;
	char guess[5];
	int a, b;
	int attempts = 0;
	for (int i = 0; i < 10; i++) {
		printf("輸入猜的數字\n");
		scanf("%s", guess);
		while (isValidGuess(guess)=0) {
			printf("請輸入正確格式\n");
			scanf("%s", guess);
		}
		calculateAB(answer,guess,&a,&b);

		printf("結果為%dA,%dB", a, b);
		attempts = attempts + 1;

		if (a == 4) {
			printf("恭喜你猜對了\n");
			displayGameStatus(attempts);
			break;
		}
		else if (attempts = max) {
			printf("你10次都沒猜對,正確答案是%s\n", answer);
			displayGameStatus(attempts);
			break;
		}
	}
s}