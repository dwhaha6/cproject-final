#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
// ����� ��� ���ϵ� 
struct node
{
	int data;
	struct node* next;
};

struct node* head=NULL;
// ���Ḯ��Ʈ ��� ���� 
struct node* temp=(struct node*)malloc(sizeof(struct node));
	//��� �� �� ����
typedef struct num
{
	int coin;
	int bet;
	int choice;
}NUM;
// ����,���ñݾװ� ���� ���ڿ� �ʿ��� ��ҵ��� ���� ����ü 
typedef union rd
{
	char H;
	NUM n;
	
}RDBUF;
// ���� ���� �ʿ��� ������ ���� ����ü 
typedef enum RRSP
{
	S=1,R=2,P=3 
 }RSP;
int start(int d);
int rsp(int *c);
int lotto(int *e);
int card(int *f);
// ���� �Լ����� ���� 

int main(void)
{
	FILE *fr=fopen("rate.txt","w+");
	
	RDBUF r;
	#include "help.h.cpp"
	
	// h �Է� �� ���� ����(ó�� ���ۿ��� ����), help.h ���Ͽ� ����� �ڵ� ���� 
	NUM n;
	NUM *N;
	N=&n;
	N->coin=50000;
	start(N->coin);	
	
	return 0;
}
// ���� ������ 5�������� ���� �� ���� ����, ����ü ������ ��� 

int start(int d)
{ 
	NUM n;
	if(d<5000){
		printf("�������� 5000�� �Ʒ��Դϴ�... ");
		exit(0);
	}
	else if(d>=1000000){
		printf("\n*-*-*-*-*-*-*-*-*-*\n");
		printf(" Game Clear !!!!!!\n");
		printf("*-*-*-*-*-*-*-*-*-*\n");
		exit(0);
	}
	//���� ������ 5õ�� �̸��̰ų� �鸸���̻� ����� ��� ���α׷� ����
	switch(temp->data){
		case 1:
			printf("\n- ��� �ߴ� ����: ����������-");
			break;
		case 2:
			printf("\n-��� �ߴ� ����: ī�� �̱�-");
			break;
		case 3:
			printf("\n-��� �ߴ� ����: �ζ�-");
			break;
		default:
			 break;
	}
	printf("\n ��-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-��");
	printf("\n |������ ������ �ּ��� !(100���� �޼� �� ����) |");
	printf("\n ��-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-��\n");
	printf("���� ������: %d\n",d);
	printf("1. ����������  2.ī�� �̱�  3.�ζ� 4. �����(�� �ʱ�ȭ) 5. ����\n");
	scanf("%d",&n.choice);
	temp->data=n.choice;
	// ������ ���� ȭ�� , ����ü ������ ���� ��ĵ�޾� ����  ���� 
		
	switch(n.choice){
		case 1:
			rsp(&d);
			break;
		case 2:
			card(&d);
			break;
		case 3:
			lotto(&d);
			break;
		case 4:
			start(50000);
			break;
		case 5:
			exit(0);
		default:
			printf("�߸��Է��ϼ̽��ϴ�");
			start(d); 
	}
	// case���� �̿��� �Է��� ���� ���� ���� �ٸ� �Լ� ����	
}
int rsp(int *c)
{
	printf("  Loding");
			for (int j = 1; j <= 2; j++)
			{
				Sleep(1000); 
				printf(".");
			}
			printf("\n");
	// sleep �Լ��� �̿��� �ε��� ����		
	RSP Ro;
	if(*c<5000){
		printf("�������� 5000�� �Ʒ� �Դϴ�... ");
		exit(0);
	}
	int num;
	int com,user;
	char C[5];
	//  �ٽ��ϱ⸦ ������ ��츦 ����� if�� �ۼ�, ������������ �ʿ��� ���� ���� 
	
	NUM n; 
	printf("\n��-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X��\n");
	printf("| ���� ���� �� ���� ���� !(�¸��� 2��) | ");
	printf("\n��-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X��\n\n");
	printf("���� ������: %d\n",*c);
	printf("\n Betting (�ּ� 5000��): ");
	// ���������� ����ȭ��, ���� ������ ��� �� ���ñݾ� �Է� ���� 
	scanf("%d",&n.bet);
	if(n.bet<5000){
		printf("\n���� �ݾ��� �ʹ� �����ϴ� ! \n\n");
		rsp(c);
	}
	else if(n.bet>*c)
		{
			printf("������ �����մϴ� !\n");
			rsp(c);
		}
	// �Է¹��� ���ñݾ��� 5õ������ ���ų� ���� �����ݺ��� ���� ��츦 ����� if�� �ۼ� 
	else 
	{
		srand(time(NULL));
		com=rand()%3+1;
		printf("����(1), ����(2), ��(3) �������ּ��� \n");
		scanf("%d",&user);
		if(user!=1 && user!=2 && user!=3)
		{
			printf("\n�߸� �Է��ϼ̽��ϴ�.\n");
			rsp(c); 
		}
	//srand, rand�� �̿��Ͽ� ��ǻ�Ϳ� ������ �� ����, �������� ���� �Է¹��� 1~3�̿��� ���� �Է��� ����� if�� �ۼ� 
		switch(com){
			case S:
				strcpy(C,"����");
				break;
			case R:
				strcpy(C,"����");
				break;
			case P:
				strcpy(C,"��");
				break;
			default:
				break; 
		}
		// ��ǻ�Ϳ� ���ڿ� ���� ����,����,�� �� ���� 
		printf("  Loding");
			for (int j = 1; j <= 2; j++)
			{
				Sleep(1000); 
				printf(".");
			}
			printf("\n");
		// sleep �Լ��� �̿��� �ε��� ����	
		if(com==user){
			printf("��ǻ�Ͱ� �� ��: %s\n",C); 
			printf("Draw !(+0) \n");
			printf("1�� �Է�: �ٽ��ϱ�, 2�� �Է�: ���������� ����\n");
			scanf("%d",&num);
			if(num==1)
				rsp(c);
			else if(num==2)
				start(*c);
			else{
				printf("\n�߸� �Է��ϼ̽��ϴ�.\n");
				start(*c);
			}
		}
		//��ǻ�Ϳ� ������ ����� ���, �ٽ��ϱ� Ȥ�� ����ȭ������ ������ �� �ϳ��� ������ �� 1,2 �̿��� ���� �Է� �ø� ����� if�� �ۼ�  
		else if(com==1 && user==2 || com==2 && user==3 || com==3&&user==1)
		{
			*c+=2*n.bet;
			printf("��ǻ�Ͱ� �� ��: %s\n",C); 
			printf("You Win !! (+%d)(1. �ٽ��ϱ� 2. ���������� ����)\n",2*n.bet);
			scanf("%d",&num);
			if(num==1)
				rsp(c);
			else if(num==2)
				start(*c);
			else{
				printf("\n�߸� �Է��ϼ̽��ϴ�.\n");
				start(*c);
			}
		}
		//������ �̰��� ���, ���������� �ٽ��ϰų� ����ȭ������ �������� ��, ���ñݾ��� 2�踦 �����ݿ� ����  
		else if(com==2 && user==1 || com==3 && user==2 || com==1 && user==3)
		{
			*c-=n.bet;
			printf("��ǻ�Ͱ� �� ��: %s\n",C); 
			printf("You Lose...(-%d)(1. �ٽ��ϱ� 2. ���������� ����)\n",n.bet);
			scanf("%d",&num);
			if(num==1)
				rsp(c);
			else if(num==2)
				start(*c);
			else{
				printf("\n�߸� �Է��ϼ̽��ϴ�.\n");
				start(*c);
			}
		}
		//������ ���� ���, �ٽ��ϰų� ����ȭ������ ����, ���ñݾ� ��ŭ �����ݿ��� ����  
			
	}
		
}

int lotto(int *e)
{
	printf("  Loding");
			for (int j = 1; j <= 2; j++)
			{
				Sleep(1000); 
				printf(".");
			}
			printf("\n");
	// sleep �Լ��� �̿��� �ε��� ����
	if(*e<5000){
		printf("�������� 5000�� �Ʒ� �Դϴ�... ");
		exit(0);
	}
	NUM n;
	int com,user,num; 
	// �ٽ��ϱ��� ��츦 ����� if�� �ۼ� 
	srand(time(NULL));
	com=rand()%100+1; 
	printf("\n��-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X��\n");
	printf("| �ζ� ���� ���� !(�¸��� 150��) | ");
	printf("\n��-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X��\n\n");
	printf("���� ������: %d\n",*e);
	printf("Betting (�ּ� 5000��): ");
	//�ζ� ������ ����ȭ��, ��÷�ݾ��� �������� �Է� 
	scanf("%d",&n.bet);
	if(n.bet<5000){
		printf("���� �ݾ��� �ʹ� �����ϴ� ! \n");
		lotto(e);
	}
	else if(n.bet>*e)
		{
			printf("������ �����մϴ� !\n");
			lotto(e);
		}
	// ���ñݾ��� 5õ������ ���ų� �����ݺ��� ���� ��츦 ����� if�� �ۼ�  
	printf("1���� 100���� ���� �� �ϳ��� ����ּ���(���� �� 150��)\n");
	scanf("%d",&user);
	printf("  Loding");
			for (int j = 1; j <= 2; j++)
			{
				Sleep(1000); 
				printf(".");
			}
			printf("\n");
	// sleep �Լ��� �̿��� �ε��� ����
	if(user>=1 && user<=100){
	// �����κ��� ���ڸ� ��ĵ�ް� �� ���ڰ� 1����100������ ��쿡�� ������ ����ǵ��� �� 	
	
		if(user==com){
			*e+=150*n.bet;
			printf("�����մϴ� ! ��÷ �Դϴ�!(+150%d)\n",n.bet);
			printf("1�� �Է�: �ٽ��ϱ�, 2�� �Է�: �ζ� ����\n");	
			scanf("%d",&num);
			if(num==1)
				lotto(e);
			else if(num==2)
				start(*e);
			else{
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
				start(*e);
			}
		// ��÷�� �Ǿ��� ���, ���ñݾ��� 150�踦 ��� �ٽ��ϰų� ����ȭ������ ���� �� ���� 		
		}
		else{
			*e-=n.bet;
			printf("---------\n");
			printf("�ƽ����ϴ�...(-%d)\n",n.bet);
			printf("��÷��ȣ: %d\n",com);
			printf("---------\n");
			// ��÷��ȣ�� ������ �� ���� ��� ��÷��ȣ�� �˷��ְ� ���ñݾ׸�ŭ �����ݿ��� ����  
			printf("1�� �Է�: �ٽ��ϱ�, 2�� �Է�: �ζ� ����\n");
			scanf("%d",&num);
			if(num==1)
				lotto(e);
			else if(num==2)
				start(*e);
			else{
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
				start(*e);
			}
			// �ٽ��ϰų� ����ȭ������ ���� �� ����  
		}
	}
	
	else{
		printf("�߸� �Է��ϼ̽��ϴ�.\n\n");
		lotto(e);
	}
	// 1���� 100������ ���ڸ� ���� ���� ��� �ٽ� �ζ� �������� ���ư� 	
}


int card(int *f)
{
	printf("  Loding");
			for (int j = 1; j <= 2; j++)
			{
				Sleep(1000); 
				printf(".");
			}
			printf("\n");
	// sleep �Լ��� �̿��� �ε��� ����
	if(*f<10000)
	{
		printf("--------------------------------------------------------\n");
		printf("\n�������� ���� ������ ������ �� �����ϴ�.(�ּ� 10000��)\n\n");
		printf("--------------------------------------------------------\n\n");
		start(*f);
	}
	// ī������� �ּ� ���ñݾ��� �������� ���� ��� ī�� ���� ���� X 
	NUM n;
	int com,user,num1,num2;
	printf(",__________,\n|A         |\n|��        |\n|          |\n|          |\n|    ��    |\n|          |\n|          |\n|        ��|\n|         A|\n'----------'\n");
	printf("\n ��-=-=-=-=-=-=-=-=-��");
	printf("\n | ī�� ���� ���� !  |");
	printf("\n ��=-==-=-=-=-=-=-=-��\n");
	printf("\n���� ������: %d\n",*f);
	printf("Betting (�ּ� 10000��): "); 
	scanf("%d",&n.bet);
	// ī������� ����ȭ��, ���ñݾ��� �����κ��� ����  
	if(n.bet<10000){
		printf("���� �ݾ��� �ʹ� �����ϴ� ! \n");
		card(f);
	}
	else if(n.bet>*f)
		{
			printf("������ �����մϴ� !\n");
			card(f);
		}
	// ���ñݾ��� �������� ���ų� �����ݺ��� ���� ��츦 ����� if�� �ۼ�  
	*f-=n.bet;
	srand(time(NULL));
	com=rand()%13+1; 
	user=rand()%13+1; 
	printf("  Loding");
			for (int j = 1; j <= 1; j++)
			{
				Sleep(1000); 
				printf(".");
			}
			printf("\n");
	// sleep �Լ��� �̿��� �ε��� ����
	printf("\n���� ���� ī��: %d (1~13������ ī�尡 ����)\n",user);
	// ��ǻ�Ϳ� ������ ī�� ���ڸ� �������� �Է¹ް� ������ ī�� ���ڸ� ������  
	if(*f>=10000){
		printf("1. �״�� �����ϱ� 2. �ٽ� �̱�(10000��): ");
		scanf("%d",&num1);	
		printf("\n");
	}
	//���� �̻� ���� ��� ������ ���� ������ ���ڸ� �������� �ٽ� �̱� ����  
	else if(*f<10000)
	{
		printf("---------------------------------------\n");
		printf("�������� �ʹ� ���� �״�� �����մϴ�.\n");
		printf("---------------------------------------\n");
		num1=1; 
	}
	//������ �������� �������� ���� ��쿣 �ٽ� �̱� �Ұ��� 
	printf("  Loding");
			for (int j = 1; j <= 2; j++)
			{
				Sleep(1000); 
				printf(".");
			}
			printf("\n");
	// sleep �Լ��� �̿��� �ε��� ����
	switch(num1){
		case 1:
			break;
		case 2:
			*f-=10000;
			srand(time(NULL));
			 user=rand()%13+1; 
			 printf("�ٽ� ���� ����: %d\n",user);
			 break;
		default:
			printf("�߸� �Է��Ͽ�, �״�� ����˴ϴ�..\n");
	} 
	// ������ 1,2�̿��� ���ڸ� �Է����� �� ������ ���ڸ� �ٽ� ���� �ʰ� �״�� ����  
	printf("��ǻ�Ͱ� ���� ����: %d\n",com);
	if(com==user)
	{
		*f+=n.bet;
		printf("Draw !(+0)\n");
		printf("1. �ٽ��ϱ� 2. ī����� ����: ");
		scanf("%d",&num2);
		switch(num2){
			case 1:
				card(f);
				break;
			case 2:
				start(*f);
				break;
			default:
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
				start(*f);
		} 
	}
	// ī���� ���ڰ� ���� �Ȱ��� ��� ������ ��ȭ���� �����ų� ������ �ٽ� ���� ����  
	if(com>user)
	{
		printf("You Lose...(-%d)\n",n.bet);
		printf("1. �ٽ��ϱ� 2. ī����� ����: ");
		scanf("%d",&num2);
		switch(num2){
			case 1:
				card(f);
				break;
			case 2:
				start(*f);
				break;
			default:
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
				start(*f);
		} 
	}
	// ��ǻ�Ͱ� �̰��� ��� ���ñݾ׸�ŭ �����ݿ��� ����, ������ �ٽ� �ϰų� ����ȭ���� ���� �� ����  
	if(com<user)
	{
		*f+=3*n.bet;
		printf("You Win !(+%d)\n",2*n.bet);
		printf("1. �ٽ��ϱ� 2. ī����� ����: ");
		scanf("%d",&num2);
		switch(num2){
			case 1:
				card(f);
				break;
			case 2:
				start(*f);
				break;
			default:
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
				start(*f);
		} 
	}
	// ������ �̰��� ��� ���� �ݾ��� 2�踦 ��������, �ٽ� �ϰų� ����ȭ������ ���� �� ����  
}
