//      Tik Tak Toe Game 

#include<iostream>
#include<conio.h>
#include<stdlib.h>
//we take array characters to show them in the board and puzzle them
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
	
	//this func where we identify the value of the character
	int checkwin();
	
	//this func where we print the board of the game
	void board();
	
	//here we check the condition and then return 1 or 0 (if cindition satisfy it returns '1 else returns '0' otherwise '-1'
int checkwin()
{
	if(square[1] == square[2] && square[2] == square[3])
	return 1;
	else if(square[4] == square[5] && square[5] == square[6])
	return 1;
	else if(square[7] == square[8] && square[8] == square[9])
	return 1;
	else if(square[1] == square[4] && square[4] == square[7])
	return 1;
	else if(square[3] == square[6] && square[6] == square[9])
	return 1;
	else if(square[2] == square[5] && square[5] == square[8])
	return 1;
	else if(square[1] == square[5] && square[5] == square[9])
	return 1;
	else if(square[3] == square[5] && square[5] == square[7])
	return 1;
	
	else if(square[1] !='1' && square[2] != '2' && square[3] != '3' && square[4] != '4'
	 && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
	 
	 return 0;
	 else 
	 return -1;
}
using namespace std;
int main()
{
	
	char mark;
	//here we declare variables
	int player=1,i,choice;

	do
	{
		//firstly we print the game board
		board();
		
		//here checking the player visibility
		player=(player%2) ? 1:2;
		
		//here check checks which player enter which number
		cout<<"Player "<<player<<" Enter a number: ";
		cin>>choice;
		
		//here we store char as 'X' and 'O' in the array
		mark= (player==1) ? 'X' : 'O' ;
		
		if(choice==1 && square[1]=='1')
		square[1] = mark;
		else if(choice==2 && square[2]=='2')
		square[2] = mark;
		else if(choice==3 && square[3]=='3')
		square[3] = mark;
		else if(choice==4 && square[4]=='4')
		square[4] = mark;
		else if(choice==5 && square[5]=='5')
		square[5] = mark;
		else if(choice==6 && square[6]=='6')
		square[6] = mark;
		else if(choice==7 && square[7]=='7')
		square[7] = mark;
		else if(choice==8 && square[8]=='8')
		square[8] = mark;
		else if(choice==9 && square[9]=='9')
		square[9] = mark;
		
		//if user enter invalid number then it prints
		else
		 {
			cout<<"Invalid number...! ";
			player--;
			//this only use to stable the screen
			cin.get();
		 } 
		 
		 //here we store the value which player win
		 i= checkwin();
		 
		 //here we move the strike of the next player
		 player++;
		 
	}while (i == -1);
	
	//here we again and again call the game board until one palyer win or draw the match
	board();
	
	if(i == 1)
	{
		cout<<"Player "<<--player<<" wins!";
	}
	else
	{
		cout<<"Game Draw!";
	}
	
	int choice_again;
	cout<<"Press '1' for paly again\n";
	cout<<"Press '2' for exit\n";
	cout<<"Enter Your choice: ";
	cin>>choice_again;
	
	if(choice_again==1)
	{
		main();
	}
}

void board()
{
	system("cls");
	
	cout<<"\n\n\t Tic Tac Toe\n\n";
	
	cout<<"Player 1 (X)  :  Player 2 (O)\n\n\n";
	
	cout<<"\t\t\t   |   | \n";
	cout<<"\t\t\t "<<square[1]<<" | "<<square[2]<<" | "<<square[3]<<endl;
	
	cout<<"\t\t\t___|___|___\n";
	cout<<"\t\t\t   |   | \n";
	
	cout<<"\t\t\t "<<square[4]<<" | "<<square[5]<<" | "<<square[6]<<endl;
	
	cout<<"\t\t\t___|___|___\n";
	cout<<"\t\t\t   |   | \n";
	
	cout<<"\t\t\t "<<square[7]<<" | "<<square[8]<<" | "<<square[9]<<endl;
	
	cout<<"\t\t\t   |   |   \n";
	
}
