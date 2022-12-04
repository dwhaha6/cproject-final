printf("\n ┌-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-┐");
	printf("\n  |도움말 : h입력 (아무 키 입력 시 스킵)      |");
	printf("\n └-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-┘\n");
	scanf("%c",&r.H); 
	if(r.H=='h')
	{
		FILE *fp=fopen("프로젝트.txt","r");
		if(fp==NULL){
		puts("파일 오픈 실패!");
		return -1; 
		}
		char str[100];
		for(int i=0;i<6;i++){
			fgets(str,sizeof(str),fp);
			printf("%s",str);
		}
		fclose(fp);
		
	}
	else{
		
	}
	

