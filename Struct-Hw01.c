#include<stdio.h>
#include<string.h>

struct Student{
	char Name[50];
	int Age;
	int ID;
};

int main(){
	struct Student sv;
	int i;
	printf("Thong tin sinh vien:\n");
	printf("Ten sinh vien: ");
	scanf("%s", &sv.Name);
	printf("Tuoi: ");
	scanf("%d", &sv.Age);
	printf("Ma sinh vien: ");
	scanf("%d", &sv.ID);
	
	printf("1: Save\n2: Update\n ");
	scanf("%d", &i);
	
	while(i == 1 || i == 2){
		switch(i){
			case 1:
				printf("Thong tin sinh vien: \n");
				printf("Ten: %s\n", sv.Name);
				printf("Tuoi: %d\n", sv.Age);
				printf("Ma sinh vien: %d\n", sv.ID);
				break;
			case 2:
			    printf("Thong tin sinh vien: \n");
				printf("ten sinh vien: ");
				scanf("%s", &sv.Name);
				printf("Tuoi: ");
				scanf("%d", &sv.Age);
				printf("Ma sinh vien: ");
				scanf("%d", &sv.ID);
				break;
			default:
				printf("INVALID.\n");
				break;
		}
		printf("1: Save\n2: Update\n");
		scanf("%d", &i);
	}
	return 0;
}
