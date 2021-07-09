#include <stdio.h>
#include <stdlib.h>

 int * dizi=NULL;
int boyut=2;
int sira=0;
int sirabasi=0;

int deque(){
	if(dizi==NULL){
		printf("kuyruk bos"); 
		
}if(sira-sirabasi<boyut/4){
	int*dizi2=(int*)malloc(sizeof(int)*boyut/2);
	for(int i=0;i<sira-sirabasi;i++){
		dizi2[i]=dizi[sirabasi+i];
		
	}sira-=sirabasi;
	free(dizi);
	dizi=dizi2;	
}
dizi[sirabasi++];

	
}

void enque(int data){
	if(dizi==NULL){
		  dizi=(int*)malloc(sizeof(int));
		}
		if(sira>=boyut){
		int *dizi2=(int*)malloc(sizeof(int)*2);
		for(int i=0;i<sira;i++){
			dizi2[i]=dizi[i];
			
			
		}	free(dizi);
		dizi=dizi2;
				
			}
		dizi[sira++]=data;
		


	
}



void l_q_enque(int data){
	
	if(head=NULL){
		head=(node*)malloc(sizeof(node));
		head->data=data;
		head->next=NULL;
		
		}
		
		else{
			node*iter;
			iter=head;
			node*temp=(node*)malloc(sizoef(node));
			
			while(iter!=NULL){
				iter=iter->next;
				
			}
			
			temp->data=data;
			temp->next=NULL;
			iter->next=temp;
			
			
			
		}
		
		
		
	
}



int enque(){
	if(head=NULL){
		printf("neyi siliyon kuyruk bos");
			
		
	}
	else{
		
		node*temp;
		node*iter;
		iter=head;
		temp=head->next;
		free(iter);
		head=temp;
		
	
	
	}
	
}






void bastir(){
	{
		printf("sirabasi-> %d",dizi[sirabasi]);
		printf("\n");
		printf(" sira-> %d" ,sira);
	
		
	}
	
	
}

int main(){

enque(1);
enque(2);
deque();
enque(3);
deque();

enque(4);
enque(5);

enque(6);
enque(7);

deque();
deque();
deque();
bastir();
//printf("%d",dizi[sirabasi]);
}

