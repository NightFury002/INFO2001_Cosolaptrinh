#include<stdio.h>
#include<string.h>

struct Student{
	char Name[50];
	int ID;
	float Score;
};

struct Student listStudent[100];
int quantity = 0;

struct Student inputStudent(){
	struct Student std;
	printf("\nTen sinh vien: ");
	fflush(stdin);
	gets(std.Name);
	printf("Ma sinh vien: ");
	scanf("%d", &std.ID);
	printf("Diem so: ");
	scanf("%f", &std.Score);
	return std;
}

void displayStudent(struct Student std){
	printf("\nThong tin sinh vien: \n");
	printf("Ten: %s\n", std.Name);
	printf("Ma sinh vien: %d\n", std.ID);
	printf("Diem so: %f\n", std.Score);
}

void arrangeName(){
	struct Student temp;
	int i, j;
	for (i = 0; i < quantity-1; i++){
		for(j = i+1; j < quantity; j++){
			if(strcmp(listStudent[i].Name, listStudent[j].Name) > 0){
				temp = listStudent[i];
				listStudent[i]= listStudent[j];
				listStudent[j]=temp;
			}
		}
	}
}

void arrangeID(){
	struct Student temp;
	int i, j;
	for(i=0; i<quantity - 1; i++){
		for(j= i+1; j < quantity; j++){
			if(listStudent[i].ID > listStudent[j].ID){
				temp= listStudent[i];
				listStudent[i]=listStudent[j];
				listStudent[j]= temp;
			}
		}
	}
}

void arrangeScore(){
	struct Student temp;
	int i,j;
	for(i=0; i<quantity - 1; i++){
		for(j= i+1; j < quantity; j++){
			if(listStudent[i].Score > listStudent[j].Score){
				temp= listStudent[i];
				listStudent[i]=listStudent[j];
				listStudent[j]= temp;
			}
		}
	}
}

int main(){
	int List;
	do{
		printf("\nSelect requirement: \n");
		printf("1. Nhap thong tin sinh vien\n");
		printf("2. Hien thi thong tin sinh vien\n");
		printf("3. Sap xep theo ten\n");
		printf("4. Sap xep theo diem\n");
		printf("5. Sap xep theo ma so\n");
		printf("0. Thoat\n");
		printf("Your choice: ");
		scanf("%d", &List);
		
		switch(List){
			case 1:
				if(quantity < 100){
					listStudent[quantity] = inputStudent();
					quantity++;
				}else {
					printf("Danh sach sinh vien da day, khong the them sinh vien moi.\n");
				}
				break;
			case 2:
				printf("\nDanh sach sinh vien da day.\n");
				int i;
				for (i=0; i<quantity; i++){
					displayStudent(listStudent[i]);
				}
				break;
			case 3:
			    arrangeName();
				printf("Da sap xep danh sach theo ten.\n");
				break;
			case 4:
			    arrangeScore();
				printf("Da sap xep danh sach theo diem.\n");
				break;
			case 5:
			    arrangeID();
				printf("Da sap xep danh sach theo ma sinh vien.\n");
				break;
			case 0:
				printf("Thoat chuong trinh.\n");
				break;
			default:
				printf("Lua chon khong hop le, vui long chon lai.\n");			
		}
	}while(List!=0);
	return 0;
}
