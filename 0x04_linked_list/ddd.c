#include <stdio.h>
int main ()
{
	char name[30], your[30];	
	int num;
	
	
	printf("강아지 키우기 게임!\n\n");
	printf("이름을 정해주세요. : ");
	scanf("%s",name);
	printf("\n △   △\n (⊙오⊙) : %s? 정말 멋진 이름이야!\n [%s]\n", name, name);
	
	printf("\n\n당신의 이름은? : ");
	scanf("%s", your); 
	printf("\n △   △\n (ㅡ오ㅡ) : %s? 이름 좀 구리네ㅋㅋ\n [%s]\n", your, name);
		
	printf("\n\n △   △\n (⊙오⊙) : %s(은)는 배가 고파... \n [%s]\n\n1. 밥먹으러 가기 \n2. 산책가기 \n3. 화장실 가기 \n번호를 입력해주세요 : ",name, name);
	scanf("%d",&num);	
	switch(num)
	{
		case 1 : printf("\n △   △\n (ㅡ오ㅡ) : 먹기 싫어!\n [%s]\n", name);
			break;
		case 2 : printf("\n[system] : 레벨이 낮아 하실 수 없습니다.");
			break;
		case 3 : printf("\n[system] : 먹어야 쌀 수 있습니다.");
	}
	
	printf("\n\n1. 밥먹으러 가기 \n2. 산책가기 \n3. 화장실 가기 \n번호를 입력해주세요 : ",name, name);
	scanf("%d",&num);
	switch(num)
	{
		case 1 : printf("\n △   △\n (ㅡ오ㅡ) : 먹기 싫어!\n [%s]\n", name);
			break;
		case 2 : printf("\n[system] : 레벨이 낮아 하실 수 없습니다.");
			break;
		case 3 : printf("\n[system] : 먹어야 쌀 수 있습니다.");
	}
	
	printf("\n\n1. 밥먹으러 가기 \n2. 산책가기 \n3. 화장실 가기 \n번호를 입력해주세요 : ",name, name);
	scanf("%d",&num);
	switch(num)
	{
		case 1 : printf("\n △   △\n (ㅡ오ㅡ) : 먹기 싫어!\n [%s]\n", name);
			break;
		case 2 : printf("\n[system] : 레벨이 낮아 하실 수 없습니다.");
			break;
		case 3 : printf("\n[system] : 먹어야 쌀 수 있습니다.");
	}
	
	printf("\n\n\n △   △\n (ㅡ오ㅡ) : %s!!!! 넌 정말 무능한 주인이야...!!!\n [%s]\n", your, name);
	
	
	 char ch = 0, count = 0;
	 while (ch != 'j')
	 {
	 	printf("\n\n\n △   △\n (⊙오⊙) : 재밌는 퀴즈!! 내가 좋아하는 알파벳은?\n [%s]\n", name);
	 	scanf("%c%*c", &ch);
		count++; 
	 }
	 
	 printf("\n\n\n △   △\n (⊙오⊙) : 정답!! %d번 만에 맞혔네!\n [%s]\n", name, count);
	
	return 0;
}
