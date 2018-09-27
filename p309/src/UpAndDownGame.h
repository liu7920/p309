#ifndef UPANDDOWNGAME_H_
#define UPANDDOWNGAME_H_

class UpAndDownGame {
public:
	int a=0,b=99,n;
	int num;
	int change=0;
	UpAndDownGame();
	virtual ~UpAndDownGame();
	void play();
	void check();
};

#endif /* UPANDDOWNGAME_H_ */
