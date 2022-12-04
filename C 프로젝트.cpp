#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
// 사용한 헤더 파일들 
struct node
{
	int data;
	struct node* next;
};

struct node* head=NULL;
// 연결리스트 노드 생성 
struct node* temp=(struct node*)malloc(sizeof(struct node));
	//노드 한 개 생성
typedef struct num
{
	int coin;
	int bet;
	int choice;
}NUM;
// 코인,베팅금액과 같이 도박에 필요한 요소들을 담은 구조체 
typedef union rd
{
	char H;
	NUM n;
	
}RDBUF;
// 도움말 설명에 필요한 변수를 담은 공용체 
typedef enum RRSP
{
	S=1,R=2,P=3 
 }RSP;
int start(int d);
int rsp(int *c);
int lotto(int *e);
int card(int *f);
// 게임 함수들을 선언 

int main(void)
{
	FILE *fr=fopen("rate.txt","w+");
	
	RDBUF r;
	#include "help.h.cpp"
	
	// h 입력 시 도움말 제공(처음 시작에만 제공), help.h 파일에 적어둔 코드 실행 
	NUM n;
	NUM *N;
	N=&n;
	N->coin=50000;
	start(N->coin);	
	
	return 0;
}
// 시작 코인을 5만원으로 세팅 후 게임 시작, 구조체 포인터 사용 

int start(int d)
{ 
	NUM n;
	if(d<5000){
		printf("소지금이 5000원 아래입니다... ");
		exit(0);
	}
	else if(d>=1000000){
		printf("\n*-*-*-*-*-*-*-*-*-*\n");
		printf(" Game Clear !!!!!!\n");
		printf("*-*-*-*-*-*-*-*-*-*\n");
		exit(0);
	}
	//보유 코인이 5천원 미만이거나 백만원이상 모았을 경우 프로그램 종료
	switch(temp->data){
		case 1:
			printf("\n- 방금 했던 게임: 가위바위보-");
			break;
		case 2:
			printf("\n-방금 했던 게임: 카드 뽑기-");
			break;
		case 3:
			printf("\n-방금 했던 게임: 로또-");
			break;
		default:
			 break;
	}
	printf("\n ┌-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-┐");
	printf("\n |게임을 선택해 주세요 !(100만원 달성 시 성공) |");
	printf("\n └-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-┘\n");
	printf("현재 소지금: %d\n",d);
	printf("1. 가위바위보  2.카드 뽑기  3.로또 4. 재시작(돈 초기화) 5. 종료\n");
	scanf("%d",&n.choice);
	temp->data=n.choice;
	// 게임의 메인 화면 , 구조체 변수에 값을 스캔받아 게임  선택 
		
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
			printf("잘못입력하셨습니다");
			start(d); 
	}
	// case문을 이용해 입력한 값에 따라 각각 다른 함수 실행	
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
	// sleep 함수를 이용해 로딩을 구현		
	RSP Ro;
	if(*c<5000){
		printf("소지금이 5000원 아래 입니다... ");
		exit(0);
	}
	int num;
	int com,user;
	char C[5];
	//  다시하기를 눌렀을 경우를 대비해 if문 작성, 가위바위보에 필요한 변수 선언 
	
	NUM n; 
	printf("\n┌-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X┐\n");
	printf("| 가위 바위 보 게임 시작 !(승리시 2배) | ");
	printf("\n└-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X┘\n\n");
	printf("현재 소지금: %d\n",*c);
	printf("\n Betting (최소 5000원): ");
	// 가위바위보 메인화면, 현재 소지금 출력 및 베팅금액 입력 받음 
	scanf("%d",&n.bet);
	if(n.bet<5000){
		printf("\n베팅 금액이 너무 적습니다 ! \n\n");
		rsp(c);
	}
	else if(n.bet>*c)
		{
			printf("코인이 부족합니다 !\n");
			rsp(c);
		}
	// 입력받은 베팅금액이 5천원보다 적거나 현재 소지금보다 많을 경우를 대비해 if문 작성 
	else 
	{
		srand(time(NULL));
		com=rand()%3+1;
		printf("가위(1), 바위(2), 보(3) 선택해주세요 \n");
		scanf("%d",&user);
		if(user!=1 && user!=2 && user!=3)
		{
			printf("\n잘못 입력하셨습니다.\n");
			rsp(c); 
		}
	//srand, rand를 이용하여 컴퓨터에 랜덤한 값 지정, 유저에게 값을 입력받음 1~3이외의 숫자 입력을 대비해 if문 작성 
		switch(com){
			case S:
				strcpy(C,"가위");
				break;
			case R:
				strcpy(C,"바위");
				break;
			case P:
				strcpy(C,"보");
				break;
			default:
				break; 
		}
		// 컴퓨터와 숫자에 따른 가위,바위,보 값 대입 
		printf("  Loding");
			for (int j = 1; j <= 2; j++)
			{
				Sleep(1000); 
				printf(".");
			}
			printf("\n");
		// sleep 함수를 이용해 로딩을 구현	
		if(com==user){
			printf("컴퓨터가 낸 것: %s\n",C); 
			printf("Draw !(+0) \n");
			printf("1번 입력: 다시하기, 2번 입력: 가위바위보 종료\n");
			scanf("%d",&num);
			if(num==1)
				rsp(c);
			else if(num==2)
				start(*c);
			else{
				printf("\n잘못 입력하셨습니다.\n");
				start(*c);
			}
		}
		//컴퓨터와 유저가 비겼을 경우, 다시하기 혹은 메인화면으로 나가기 중 하나를 고르도록 함 1,2 이외의 숫자 입력 시를 대비해 if문 작성  
		else if(com==1 && user==2 || com==2 && user==3 || com==3&&user==1)
		{
			*c+=2*n.bet;
			printf("컴퓨터가 낸 것: %s\n",C); 
			printf("You Win !! (+%d)(1. 다시하기 2. 가위바위보 종료)\n",2*n.bet);
			scanf("%d",&num);
			if(num==1)
				rsp(c);
			else if(num==2)
				start(*c);
			else{
				printf("\n잘못 입력하셨습니다.\n");
				start(*c);
			}
		}
		//유저가 이겼을 경우, 마찬가지로 다시하거나 메인화면으로 나가도록 함, 베팅금액의 2배를 소지금에 더함  
		else if(com==2 && user==1 || com==3 && user==2 || com==1 && user==3)
		{
			*c-=n.bet;
			printf("컴퓨터가 낸 것: %s\n",C); 
			printf("You Lose...(-%d)(1. 다시하기 2. 가위바위보 종료)\n",n.bet);
			scanf("%d",&num);
			if(num==1)
				rsp(c);
			else if(num==2)
				start(*c);
			else{
				printf("\n잘못 입력하셨습니다.\n");
				start(*c);
			}
		}
		//유저가 졌을 경우, 다시하거나 메인화면으로 나감, 베팅금액 만큼 소지금에서 차감  
			
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
	// sleep 함수를 이용해 로딩을 구현
	if(*e<5000){
		printf("소지금이 5000원 아래 입니다... ");
		exit(0);
	}
	NUM n;
	int com,user,num; 
	// 다시하기의 경우를 대비해 if문 작성 
	srand(time(NULL));
	com=rand()%100+1; 
	printf("\n┌-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X┐\n");
	printf("| 로또 게임 시작 !(승리시 150배) | ");
	printf("\n└-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X┘\n\n");
	printf("현재 소지금: %d\n",*e);
	printf("Betting (최소 5000원): ");
	//로또 게임의 메인화면, 당첨금액을 랜덤으로 입력 
	scanf("%d",&n.bet);
	if(n.bet<5000){
		printf("베팅 금액이 너무 적습니다 ! \n");
		lotto(e);
	}
	else if(n.bet>*e)
		{
			printf("코인이 부족합니다 !\n");
			lotto(e);
		}
	// 베팅금액이 5천원보다 적거나 소지금보다 많을 경우를 대비해 if문 작성  
	printf("1부터 100까지 숫자 중 하나를 골라주세요(성공 시 150배)\n");
	scanf("%d",&user);
	printf("  Loding");
			for (int j = 1; j <= 2; j++)
			{
				Sleep(1000); 
				printf(".");
			}
			printf("\n");
	// sleep 함수를 이용해 로딩을 구현
	if(user>=1 && user<=100){
	// 유저로부터 숫자를 스캔받고 그 숫자가 1에서100사이일 경우에만 게임이 진행되도록 함 	
	
		if(user==com){
			*e+=150*n.bet;
			printf("축하합니다 ! 당첨 입니다!(+150%d)\n",n.bet);
			printf("1번 입력: 다시하기, 2번 입력: 로또 종료\n");	
			scanf("%d",&num);
			if(num==1)
				lotto(e);
			else if(num==2)
				start(*e);
			else{
				printf("잘못 입력하셨습니다.\n");
				start(*e);
			}
		// 당첨이 되었을 경우, 베팅금액의 150배를 얻고 다시하거나 메인화면으로 나갈 수 있음 		
		}
		else{
			*e-=n.bet;
			printf("---------\n");
			printf("아쉽습니다...(-%d)\n",n.bet);
			printf("당첨번호: %d\n",com);
			printf("---------\n");
			// 당첨번호를 맞추지 못 했을 경우 당첨번호를 알려주고 베팅금액만큼 소지금에서 차감  
			printf("1번 입력: 다시하기, 2번 입력: 로또 종료\n");
			scanf("%d",&num);
			if(num==1)
				lotto(e);
			else if(num==2)
				start(*e);
			else{
				printf("잘못 입력하셨습니다.\n");
				start(*e);
			}
			// 다시하거나 메인화면으로 나갈 수 있음  
		}
	}
	
	else{
		printf("잘못 입력하셨습니다.\n\n");
		lotto(e);
	}
	// 1에서 100사이의 숫자를 고르지 않은 경우 다시 로또 시작으로 돌아감 	
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
	// sleep 함수를 이용해 로딩을 구현
	if(*f<10000)
	{
		printf("--------------------------------------------------------\n");
		printf("\n소지금이 적어 게임을 시작할 수 없습니다.(최소 10000원)\n\n");
		printf("--------------------------------------------------------\n\n");
		start(*f);
	}
	// 카드게임의 최소 베팅금액인 만원보다 적을 경우 카드 게임 시작 X 
	NUM n;
	int com,user,num1,num2;
	printf(",__________,\n|A         |\n|♥        |\n|          |\n|          |\n|    ♥    |\n|          |\n|          |\n|        ♥|\n|         A|\n'----------'\n");
	printf("\n ┌-=-=-=-=-=-=-=-=-┐");
	printf("\n | 카드 게임 시작 !  |");
	printf("\n └=-==-=-=-=-=-=-=-┘\n");
	printf("\n현재 소지금: %d\n",*f);
	printf("Betting (최소 10000원): "); 
	scanf("%d",&n.bet);
	// 카드게임의 메인화면, 베팅금액을 유저로부터 받음  
	if(n.bet<10000){
		printf("베팅 금액이 너무 적습니다 ! \n");
		card(f);
	}
	else if(n.bet>*f)
		{
			printf("코인이 부족합니다 !\n");
			card(f);
		}
	// 베팅금액이 만원보다 적거나 소지금보다 많을 경우를 대비해 if문 작성  
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
	// sleep 함수를 이용해 로딩을 구현
	printf("\n뽑은 숫자 카드: %d (1~13까지의 카드가 존재)\n",user);
	// 컴퓨터와 유저의 카드 숫자를 랜덤으로 입력받고 유저의 카드 숫자만 보여줌  
	if(*f>=10000){
		printf("1. 그대로 진행하기 2. 다시 뽑기(10000원): ");
		scanf("%d",&num1);	
		printf("\n");
	}
	//만원 이상 있을 경우 만원을 내고 유저의 숫자만 랜덤으로 다시 뽑기 가능  
	else if(*f<10000)
	{
		printf("---------------------------------------\n");
		printf("소지금이 너무 적어 그대로 진행합니다.\n");
		printf("---------------------------------------\n");
		num1=1; 
	}
	//유저의 소지금이 만원보다 적을 경우엔 다시 뽑기 불가능 
	printf("  Loding");
			for (int j = 1; j <= 2; j++)
			{
				Sleep(1000); 
				printf(".");
			}
			printf("\n");
	// sleep 함수를 이용해 로딩을 구현
	switch(num1){
		case 1:
			break;
		case 2:
			*f-=10000;
			srand(time(NULL));
			 user=rand()%13+1; 
			 printf("다시 뽑은 숫자: %d\n",user);
			 break;
		default:
			printf("잘못 입력하여, 그대로 진행됩니다..\n");
	} 
	// 유저가 1,2이외의 숫자를 입력했을 시 유저의 숫자를 다시 뽑지 않고 그대로 진행  
	printf("컴퓨터가 뽑은 숫자: %d\n",com);
	if(com==user)
	{
		*f+=n.bet;
		printf("Draw !(+0)\n");
		printf("1. 다시하기 2. 카드게임 종료: ");
		scanf("%d",&num2);
		switch(num2){
			case 1:
				card(f);
				break;
			case 2:
				start(*f);
				break;
			default:
				printf("잘못 입력하셨습니다.\n");
				start(*f);
		} 
	}
	// 카드의 숫자가 서로 똑같을 경우 소지금 변화없이 나가거나 게임을 다시 진행 가능  
	if(com>user)
	{
		printf("You Lose...(-%d)\n",n.bet);
		printf("1. 다시하기 2. 카드게임 종료: ");
		scanf("%d",&num2);
		switch(num2){
			case 1:
				card(f);
				break;
			case 2:
				start(*f);
				break;
			default:
				printf("잘못 입력하셨습니다.\n");
				start(*f);
		} 
	}
	// 컴퓨터가 이겼을 경우 베팅금액만큼 소지금에서 차감, 게임을 다시 하거나 메인화면을 나갈 수 있음  
	if(com<user)
	{
		*f+=3*n.bet;
		printf("You Win !(+%d)\n",2*n.bet);
		printf("1. 다시하기 2. 카드게임 종료: ");
		scanf("%d",&num2);
		switch(num2){
			case 1:
				card(f);
				break;
			case 2:
				start(*f);
				break;
			default:
				printf("잘못 입력하셨습니다.\n");
				start(*f);
		} 
	}
	// 유저가 이겼을 경우 베팅 금액의 2배를 돌려받음, 다시 하거나 메인화면으로 나갈 수 있음  
}
