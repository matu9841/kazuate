#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void gameStart(void);


void main (void)  {
	time_t t1,t2;
	
	
	time(&t1);
	gameStart();
	time(&t2);
	printf("�����������Ԃ�%.0f�b�ł�\n",difftime(t2, t1));
}


void gameStart(void)  {
	int kazu, kotae;
	srand((unsigned int)time(NULL));
	kotae = rand() % 100;
	while (1)  {
		printf("���𓖂ĂĂ��������@(0�`99):");
		scanf("%d",&kazu);
		if (kazu == kotae) {
			break;
		}else if (kazu < kotae)  {
			printf("�������I\n");
		} else {
			printf("�傫���I\n");
		}
	}
	printf("�����I");
}
