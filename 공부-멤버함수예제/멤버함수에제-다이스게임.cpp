#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class DiceGame {
	int diceFace;
	int userGuess;
	void RollDice()
	{
		diceFace = (int)(rand() / 6) + 1;//1~6난수생성
	}

	int getUserInput(string prompt)
	{
		int r;
		cout << prompt;
		cin >> r;
		return r;
	}//r은 사용자의 예상 입력값
	void checkUserGuess()
	{
		if (diceFace == userGuess) {
			cout << "맞았습니다";
			getchar();
		}
		else {
			cout << "틀렸습니다";
			getchar();
		}
	}
public:
	void startPlaying()
	{
		userGuess = getUserInput("예상값을 입력하시오: ");
		RollDice();
		checkUserGuess();
	}
};

int main()
{
	DiceGame game;
	game.startPlaying();
}
