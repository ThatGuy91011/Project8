#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string answer;
void Intro();

int main()
{
	Intro();
	system("pause");
	return 0;
}

string Choices(string prompt)
{
	string answer = "";
	bool isValid = false;

	do
	{
		cout << prompt;
		cin >> answer;
		answer = toupper(answer);
		if (answer == "")
		{
			cout << "Invalid answer, try again" << endl;
			isValid = false;
		}
		else
		{
			isValid = true;
			
			return answer;
		}
	} while (isValid == false);
}

void OpenDoor1()
{
	
}

void Look()
{
	
}

void Wait()
{
	
}
void Intro()
{
	cout << "\tYou find yourself in a room with only one door in front of you. You have no memory of how yo got here. What do you do?" << endl;
	cout << "A. Open the door\nB. Look around the room some more\nC. Wait" << endl;
	answer = Choices("I choose option: ");
	cout << answer;
}

