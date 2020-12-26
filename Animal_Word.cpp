
#include <iostream>
#include<cstdlib>
using namespace std;
char arr[10][10];
void print_();
int main()
{
	int count_Wolf = 4;
	int count_Rabbit = 6;
	//x -пустая клетка ,W-волк, R-заяц

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			arr[i][j] = '.';
		}
	}
	int k = 0;
	while (k != count_Wolf) {
		int i = rand() % 10;
		int j = rand() % 10;
		if (arr[i][j] == '.') {
			arr[i][j] = 'W';
			k++;
		}
	}
	k = 0;
	while (k != count_Rabbit) {
		int i = rand() % 10;
		int j = rand() % 10;
		if (arr[i][j] == '.') {
			arr[i][j] = 'R';
			k++;
		}
	}
	print_();
	while (count_Rabbit>0) 
	{
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (arr[i][j] == 'R') {
					int Map = rand() % 4;
					int L = 1;
					if (Map == 0 && i!=0) {
						if (arr[i - L][j] == 'W') {
							count_Rabbit--;
							arr[i][j] = '.';
						}
						else {
							arr[i - L][j] = 'R';
							arr[i][j] = '.';
						}
					}
					else if (Map == 1 && j < 10) {
						if (arr[i][j+L] == 'W') {
							count_Rabbit--;
							arr[i][j] = '.';
						}
						else {
							arr[i][j+L] = 'R';
							arr[i][j] = '.';
						}
					}
					else if (Map == 2 && i < 10) {
						if (arr[i+L][j] == 'W') {
							count_Rabbit--;
							arr[i][j] = '.';
						}
						else {
							arr[i+L][j] = 'R';
							arr[i][j] = '.';
						}
					}
					else if (Map == 3 && j != 0) {
						if (arr[i][j - L] == 'W') {
							count_Rabbit--;
							arr[i][j] = '.';
						}
						else {
							arr[i][j - L] = 'R';
							arr[i][j] = '.';
						}
					}
				}
			}
		}
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (arr[i][j] == 'W') {
					int Map = rand() % 4;
					int L = 1;
					if (Map == 0 && i != 0) {
						if (arr[i - L][j] == 'R') {
							count_Rabbit--;
							arr[i - L][j] = 'W';
							arr[i][j] = '.';
						}
						else {
							arr[i - L][j] = 'W';
							arr[i][j] = '.';
						}
					}
					else if (Map == 1 && j < 10) {
						if (arr[i][j + L] == 'R') {
							count_Rabbit--;
							arr[i][j + L] = 'W';
							arr[i][j] = '.';
						}
						else {
							arr[i][j + L] = 'W';
							arr[i][j] = '.';
						}
					}
					else if (Map == 2 && i < 10) {
						if (arr[i + L][j] == 'R') {
							count_Rabbit--;
							arr[i + L][j] = 'W';
							arr[i][j] = '.';
						}
						else {
							arr[i + L][j] = 'W';
							arr[i][j] = '.';
						}
					}
					else if (Map == 3 && j != 0) {
						if (arr[i][j - L] == 'R') {
							count_Rabbit--;
							arr[i][j - L] = 'W';
							arr[i][j] = '.';
						}
						else {
							arr[i][j - L] = 'W';
							arr[i][j] = '.';
						}
					}
				}
			}
		}
		cout << "\n";
		print_();
		if (count_Rabbit == 0) {
			break;
		}
	}
}

void print_()
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
				cout << arr[i][j] << "\t";
			
		}
		cout << "\n";
	}
}
