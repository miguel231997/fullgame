#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <stdio.h>  
#include <time.h>  
#include <stdlib.h>
#include<iomanip>
using namespace std;
int counter = 0;
void choice();
void finance();
void health();
void love();
void psychicgame();
void mathgame();
void guessinggame();
void treasuregame();
void tictactoegame();

int main()
{
	while (1)
	{

		string name;
		int option;

		cout << "What is your name" << endl;
		cin >> name;
		cout << "*****************************************************************" << endl;
		cout << "*       \tWELCOME" << " " << name << "\t\t\t\t\t*" << endl;
		cout << "*    PLEASE CHOSE A NUMBER FROM THE FOLLOWING OPTIONS : " << "\t*" << endl;
		cout << "*                                                               *" << endl;
		cout << "*    1. Psychic Game" << "\t\t\t\t\t\t*" << endl;
		cout << "*    2. Math Game" << "\t\t\t\t\t\t*" << endl;
		cout << "*    3. Guessing Game" << "\t\t\t\t\t\t*" << endl;
		cout << "*    4. Treasure Game" << "\t\t\t\t\t\t*" << endl;
		cout << "*    5. Tic Tac Toe                                             *" << endl;
		cout << "*    6. Exit" << "\t\t\t\t\t\t\t*" << endl;
		cout << "*****************************************************************" << endl;
		cin >> option;
		if (option == 1)
		{
			psychicgame();
		}
		if (option == 2)
		{
			mathgame();
		}
		if (option == 3)
		{
			guessinggame();
		}
		if (option == 4)
		{
			treasuregame();
		}
		if (option == 5)
		{
			tictactoegame();
		}
		if (option == 6)
		{
			return 0;
		}
	}
}
void psychicgame()
{
	int lucknum;
	char x;
	bool userFails = true;



	cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
	cout << "*                                                                 *" << endl;
	cout << "*   Welcome to the Psychic Computer Network.                      *" << endl;
	cout << "*   My name is Miguel, and I will be your psychic computer guide. *" << endl;
	cout << "*                                                                 *" << endl;
	cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl << endl;
	cout << "Please enter your lucky number:  ";
	cin >> lucknum;
	srand(lucknum);
	cout << endl;
	choice();




	do//do-while loop as in do you want to read another prediction?
	{
		cout << "\n\nThank you for using the psychic computer network.";
		cout << "\nWould you like me to make another prediction?  y for yes or n for no." << endl << endl;
		cout << "Enter here:  ";
		cin >> x;

		if (x == 'y' || x == 'Y')
		{
			cout << endl << endl;
			choice();
		}

		else if (x == 'n' || x == 'N')
		{
			userFails = false;
			break;
		}

		else
			cout << "\n " << x << " is not y, n ,Y or N. Please only enter y, n, Y or N."; //let user know what he/she did wrong
		userFails = true;

	} while (userFails);



}


void choice(void)
{
	char choice;
	bool userfails = true;
	do
	{
		cout << "Please enter an \"F\" for my predictions on your Financial Situation." << endl;
		cout << "Please enter an \"L\" for my predictions on your Love Life." << endl;
		cout << "Please enter an \"H\" for my predictions on your Health." << endl;
		cout << endl;
		cout << "Enter here:  \n";
		cin >> choice;
		cout << "I am looking into my crystal ball." << endl;
		while (counter<10000)
		{
			printf("\\\b");

			printf("|\b");

			printf("/\b");

			printf("_\b");
			counter++;
		}




		if (choice == 'F' || choice == 'f')
		{
			finance();
			userfails = false; //without this the loop will start over again

		}

		else if (choice == 'L' || choice == 'l')
		{
			love();
			userfails = false;//without this the loop will start over again

		}
		else if (choice == 'H' || choice == 'h')
		{
			health();
			userfails = false;//without this the loop will start over again

		}
		else
		{
			userfails = true;//cant be too safe
		}
	} while (userfails);//repeat loop while user keeps failing

}


void finance(void)
{
	int	x = rand() % 5 + 1;
	switch (x)
	{
	case 1:
		cout << "You will be very rich.";
		break;
	case 2:
		cout << "Times are tough but you will find your way.";
		break;
	case 3:
		cout << "Saving is the key to your success. ";
		break;
	case 4:
		cout << "Invest your money and the profit will be great. ";
		break;
	case 5:
		cout << "You will be very poor. ";
		break;
	}





}


void love(void)
{
	int	x = rand() % 5 + 1;
	switch (x)
	{
	case 1:
		cout << "Be patient, you will find your perfect match.";
		break;
	case 2:
		cout << "Nobody likes you.";
		break;
	case 3:
		cout << "You will have to choose between two.";
		break;
	case 4:
		cout << "You will find love very soon. ";
		break;
	case 5:
		cout << "Your current partner is cheating on you.";
		break;
	}


}



void health(void)
{
	int	x = rand() % 5 + 1;
	switch (x)
	{
	case 1:
		cout << "You will live a long and healthy life";
		break;
	case 2:
		cout << "You need to start going to the gym.";
		break;
	case 3:
		cout << "Eat less junk food and start eating healthy.";
		break;
	case 4:
		cout << "Your health will begin to deter.";
		break;
	case 5:
		cout << "You will die soon";
		break;
	}




}
void mathgame()
{
	int a, b, c; //input the integers
	string name; //we will be using strings
	cout << "What is your name" << endl; //first statement
	cin >> name; //input it into string
	cout << "***************************************************************" << endl; //Explain the Game
	cout << "\t\t\tHello " << name << endl;
	cout << " I am a mind reader, we will choose 5 five digit numbers together" << endl;
	cout << "and I will be able to give you the sum of all five" << endl;
	cout << "after only hearing the first one" << endl;
	cout << " \n"; //continue asking for all the numbers to play the game
	cout << "What is your first number: " << endl;
	cout << " \n";
	cin >> a;
	cout << " \n";
	cout << "The Sum Of All Your numbers is\t" << "***" << a - 2 + 200000 << "***" << endl; //input the mathematical formula
	cout << " \n";
	cout << "What is your second number: " << endl;
	cout << " \n";
	cin >> b;
	cout << " \n";
	cout << "Im choosing\t" << 99999 - b << endl; //mathematical formula to find the number
	cout << " \n";
	cout << "What is your third number" << endl;
	cout << " \n";
	cin >> c;
	cout << " \n";
	cout << "Im choosing\t" << 99999 - c << endl;
	cout << " \n";

	cout << "CHECK THE ANSWER THAT I GAVE!!!!" << endl;
	cout << " \n";
	cout << "AM I CORRECT????" << endl;
}
void guessinggame()
{


	string name1; //we will be using strings

	int secret; //sets number to a random number between 1 and 10

				//secret number random

	int guess; //user's guess

	int i; //loop variable

	bool gotIt = false; //guessed right

	srand(time(0));

	secret = rand() % 10 + 1;

	string name;


	cout << "Welcome to the Guessing "

		"Game!\n";

	//set up a loop for three times

	i = 0;

	while (i < 3 && !gotIt) //three times

	{

		cout << "Enter guess # "

			<< i + 1 << endl;

		cin >> guess;

		if (guess == secret)

		{

			cout << "\nGreat, you got it in "

				<< i + 1;

			if (i + 1 == 1)

				cout << " try!";

			else

				cout << " tries!";

			gotIt = true;

		} //close if

		else

			if (i < 2)

				cout << "Sorry....try again!" << endl;

			else

				cout << "Sorry Play again " << endl;

		i++; //increment

	}
	return;
}
void treasuregame()
{
	int times = 0;
	char direction;
	int x = 30, y = 30; // Explorer’s coordinates
	int x1, y1; // Treasure’s coordinates
	char dir = 'a';
	float distance;
	bool treasure = false;
	srand(time(0)); // secretly seed the rand function !
	x1 = rand() % 30 + 1; // x1 is randomly set to a number between 1 //and 30
	y1 = rand() % 30 + 1; // y1 is randomly set to a number between //1and 30;

						  //write loop to find the treasure
	cout << fixed << showpoint;
	cout << setprecision(0);
	distance = sqrt(static_cast<double>((x - x1)*(x - x1) + (y - y1)*(y - y1)));//formula for distance
	cout << "There is a treasure hidden, and you must try and find it!!!!!!!" << endl;
	cout << "Your coordinate is 30,30 and the treasure is hidden somewhere near" << endl;
	cout << "Follow the hints provided" << endl;
	cout << endl;
	cout << endl;
	cout << "                      \tGOODLUCK!!!!!!               " << endl;
	cout << "Your coordinate is " << x << "," << y << endl;
	cout << "Your distance is " << distance << endl;
	while (distance > 0) //staru while loop in order to being game
	{

		cout << "Please enter direction (n,s,e,w), or x to exit: ";
		cin >> direction;
		distance = sqrt(static_cast<double>((x - x1)*(x - x1) + (y - y1)*(y - y1)));
		if (direction == 'n')

		{
			y++;

			cout << "Your distance is" << distance << endl;
			cout << "Your coordinate is " << x << "," << y << endl;
		}
		if (direction == 's')
		{
			y--;

			cout << "Your coordinate is " << x << "," << y << endl;
			cout << "Your distance is" << distance << endl;
		}
		if (direction == 'e')
		{
			x++;

			cout << "Your distance is" << distance << endl;
			cout << "Your coordinate is " << x << "," << y << endl;
		}
		if (direction == 'w')
		{
			x--;

			cout << "Your distance is" << distance << endl;
			cout << "Your coordinate is " << x << "," << y << endl;
		}
		if (direction == 'x')
			return;


		if (distance > 8)//if statement to help player see how close it is to treasure
		{
			cout << "You are too far from the treasure" << endl;
		}
		if (distance > 4 && distance <= 8)
		{
			cout << "You are far from the treasure" << endl;
		}
		if (distance >= 1 && distance <= 4)
		{
			cout << "You are getting close to treasure" << endl;
		}
		if (distance == 0)
		{
			cout << "Congratulations you have reached the Treasure!!!" << endl; //final cout statement
			break;
		}
		times++;

	}
	cout << "It took you " << times << " turns to find the treasure";
}
void tictactoegame()
{

	cout << "This Game is Underconstruction...." << endl;
}