#include<iostream>
using namespace std;

int main(){
	char grade;
	int count[5] = {},sN = 1; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << sN << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		switch (grade)
		{
		case 'A':
			count[0] += 1;
			break;
		case 'B':
			count[1] += 1;
			break;
		case 'C':
			count[2] += 1;
			break;
		case 'D':
			count[3] += 1;
			break;
		case 'F':
			count[4] += 1;
			break;
		case '0':
			grade = 0;
			sN -= 2 ;
			break;
		
		default:
			cout << "Wrong input. Please input again.\n";
			sN--;
			break;
		}
		sN++;
	}while(grade != 0);
	
	
	cout << "In total " << sN<<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;
	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
