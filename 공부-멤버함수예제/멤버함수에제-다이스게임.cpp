#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class DiceGame {
	int diceFace;
	int userGuess;
	void RollDice()
	{
		diceFace = (int)(rand() / 6) + 1;//1~6��������
	}

	int getUserInput(string prompt)
	{
		int r;
		cout << prompt;
		cin >> r;
		return r;
	}//r�� ������� ���� �Է°�
	void checkUserGuess()
	{
		if (diceFace == userGuess) {
			cout << "�¾ҽ��ϴ�";
			getchar();
		}
		else {
			cout << "Ʋ�Ƚ��ϴ�";
			getchar();
		}
	}
public:
	void startPlaying()
	{
		userGuess = getUserInput("������ �Է��Ͻÿ�: ");
		RollDice();
		checkUserGuess();
	}
};

int main()
{
	DiceGame game;
	game.startPlaying();
}
