printf("\n ��-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-��");
	printf("\n  |���� : h�Է� (�ƹ� Ű �Է� �� ��ŵ)      |");
	printf("\n ��-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-��\n");
	scanf("%c",&r.H); 
	if(r.H=='h')
	{
		FILE *fp=fopen("������Ʈ.txt","r");
		if(fp==NULL){
		puts("���� ���� ����!");
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
	

