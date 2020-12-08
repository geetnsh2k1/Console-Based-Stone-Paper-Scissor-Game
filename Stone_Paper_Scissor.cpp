#include<iostream>
#include<cstdlib>
using namespace std;
int generate_random_number(){
	int choice = 3;
	return rand()%choice;
}
string choice[3] = {"stone", "paper", "scissor"};
int user_score = 0;
int computer_score = 0;
int play(int option){
	string your_choice = choice[option-1];
	string computer_choice = choice[generate_random_number()];
	
	if(your_choice != computer_choice){
		if(your_choice == "stone"){
			if(computer_choice == "paper"){
				cout << "You Lossed!!" << endl;
				return 0;
			}else{
				cout << "You Won, Hurray!!!!" << endl;
				return 1;
			}
		}else if(your_choice == "paper"){
			if(computer_choice == "scissor"){
				cout << "You Lossed!!" << endl;
				return 0;
			}else{
				cout << "You Won, Hurray!!!!" << endl;
				return 1;
			}
		}else{
			if(computer_choice == "stone"){
				cout << "You Lossed!!" << endl;
				return 0;
			}else{
				cout << "You Won, Hurray!!!!" << endl;
				return 1;
			}
		}
	}else{
		cout << "It's a tie." << endl;
		return 2;
	}
}
void display(){
	cout << "Welcome, to the game!!" << endl << endl;
	cout << "Your Score : " << user_score << endl;
	cout << "Computer Score : " << computer_score << endl << endl;
	cout << "1. Stone" << endl;
	cout << "2. Paper" << endl;
	cout << "3. Scissor" << endl << endl;
}
int main(){
	display();
	while(true){
		cout << "Enter your choice : ";
		int option;
		try{
			cin >> option;
			if(option < 1 or option > 3){
				throw (option);
			}	
		}
		catch(int option){
			cout << "Invalid Option." << endl;
			continue;
		}
		int result = play(option);
		if(result == 0){
			computer_score += 1;
		}else if(result == 1){
			user_score += 1;
		}else{
			
		}
		system("pause");
		system("cls");
		display();
	}
}
