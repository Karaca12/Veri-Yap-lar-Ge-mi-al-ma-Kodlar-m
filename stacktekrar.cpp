#include <stdio.h>
#include <stdlib.h>

int*dizi=NULL;
int tepe=0;
int boyut=2;



void push(int data){
	if(dizi==NULL){
	
	dizi=(int*)malloc(sizeof(int)*2);

}	if(tepe >=boyut-1){
		
		int*dizi2=(int*)malloc(sizeof(int)*boyut*2);
		for(int i=0; i<boyut ;i++){
			dizi2[i]=dizi[i];
			}
			
			free(dizi);
			dizi=dizi2;
			boyut*=2;
		
	}


	
	
	dizi[tepe++]=data;	
	
}

int pop(){
	if(dizi==NULL){
		
		printf("dizi boþ");
	}
	if(tepe<boyut/2){
				int*dizi2=(int*)malloc(sizeof(int)*boyut/2);
				for(int i=0;i<tepe;i++){
					dizi2[i]=dizi[i];
					
				}
				
				free(dizi);
				
				dizi=dizi2;
			
				boyut/=2;
		
		}
	return dizi[--tepe];
}

void goster(){
	
	for(int i=0;i<boyut;i++){
		printf("boyut-> %d ",boyut);
		printf("tepe-> %d ",tepe);
		printf("\n");
		printf("%d  ",dizi[i]);
	}
}


int main(){



push(3);
push(4);
push(7);
push(74);
push(75);
push(76);
pop();
pop();
pop();pop();

goster();
}
