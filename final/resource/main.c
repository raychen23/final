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

	printf("�w��Ө�q�Ʀr�C��");
	playGame(answer);

	return 0;
}

void playGame(const char *answer) {
	int max = 10;
	char guess[5];
	int a, b;
	int attempts = 0;
	for (int i = 0; i < 10; i++) {
		printf("��J�q���Ʀr\n");
		scanf("%s", guess);
		while (isValidGuess(guess)=0) {
			printf("�п�J���T�榡\n");
			scanf("%s", guess);
		}
		calculateAB(answer,guess,&a,&b);

		printf("���G��%dA,%dB", a, b);
		attempts = attempts + 1;

		if (a == 4) {
			printf("���ߧA�q��F\n");
			displayGameStatus(attempts);
			break;
		}
		else if (attempts = max) {
			printf("�A10�����S�q��,���T���׬O%s\n", answer);
			displayGameStatus(attempts);
			break;
		}
	}
s}