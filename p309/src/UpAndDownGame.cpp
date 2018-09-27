#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#include "UpAndDownGame.h"
#include "Person.h"
UpAndDownGame::UpAndDownGame() {
	// TODO Auto-generated constructor stub
	srand((unsigned)time(0));
	n=rand();
	n = n % 100;
	num=0;
}

UpAndDownGame::~UpAndDownGame() {
	// TODO Auto-generated destructor stub
}

void UpAndDownGame::play(){
	Person p;
	while(1){
		cout << "답은 " << a << "과 " << b << "사이에 있습니다." << endl;
		if(change == 0){
			cout << p.user1 << ">>" ;
			cin>>num;
			if(num==n){
				cout << p.user1 << "가 이겼습니다!!" << endl;
				break;
			}
			check();
			change = 1;
		}
		else if(change == 1){
			cout << p.user2 << ">>" ;
			cin>>num;
			if(num==n){
				cout << p.user2 << "가 이겼습니다!!" << endl;
				break;
			}
			check();
			change = 0;
		}
	}
}

void UpAndDownGame::check(){
	if(num > n){
		b=num;
	}
	else if(num < n){
		a=num;
	}
}
