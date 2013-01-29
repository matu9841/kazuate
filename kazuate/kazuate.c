#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void gameStart(void);


void main (void)  {
	time_t t1,t2;
	
	
	time(&t1);
	gameStart();
	time(&t2);
	printf("かかった時間は%.0f秒です\n",difftime(t2, t1));
}


void gameStart(void)  {
	int kazu, kotae;
	srand((unsigned int)time(NULL));
	kotae = rand() % 100;
	while (1)  {
		printf("数を当ててください　(0～99):");
		scanf("%d",&kazu);
		if (kazu == kotae) {
			break;
		}else if (kazu < kotae)  {
			printf("小さい！\n");
		} else {
			printf("大きい！\n");
		}
	}
	printf("正解！");
}
