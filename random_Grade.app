#include <iostream>
#include<time.h>
#include<string>


using namespace std;

float main() {


	srand(time(NULL));
	
	int grade[20];

	cout << "임의로 발생한 학생들의 성적↓↓↓↓" << endl;

	for (int i = 0; i < 20; i++) {
		grade[i] = rand() % 100;
		cout << grade[i] << " ";
	}

	int temp;

	for (int i = 0; i<20; i++) {
		for (int j = 0; j < 19; j++) {
			if (grade[j] < grade[j + 1]) {
				temp = grade[j];
				grade[j] = grade[j + 1];
				grade[j + 1] = temp;
			}
		}
	}
	
	
	cout << endl;
	cout << endl;
	cout << "성적이 높은 순으로 정렬하여 출력↓↓↓↓";
	cout << endl;
	for (int i = 0; i < 20; i++) {
		cout << grade[i] << " ";
	}
	cout << endl;
	cout << endl;
	

	return 0;
}
