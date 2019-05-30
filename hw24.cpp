#include <stdio.h>

#include <stdlib.h>

struct course

{

	char name[10];  

	int calculus;

	int computer;

	int programming;

} p;



int main(void)

{
	int i;
    FILE *pFile;


	printf("讀取內容為：\n");

	pFile=fopen("list.txt", "r");

        

    if (pFile==NULL)

    {

        printf("檔案開啟失敗!!\n");

        exit(1);

	}   

    else

    {

	
		for(i=0;i<7;i++){
			fscanf(pFile,"%[^,],%d,%d,%d", p.name, &p.calculus, &p.computer, &p.programming);
			printf("%s\t %d\t %d\t %d", p.name, p.calculus, p.computer, p.programming); 
		}    

	}

	printf("\n");

    fclose(pFile);

    system("pause");

    return 0;

}

