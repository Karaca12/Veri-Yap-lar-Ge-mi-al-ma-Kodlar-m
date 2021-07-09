#include <stdio.h> 
 #include <stdlib.h>
 
 
 typedef  struct  node{
 	int data;
 	node*next;
 	
 };


node*head;
void reverse(){
	
	
node*current;
node*prev=NULL;
node*sonraki;
current=head;

while(current!=NULL){

	sonraki=current->next;
current->next=prev;
prev=current;
current=sonraki;
} 


head=prev;
}



void cevirme(){
	node*iter=head;
	node*onceki=NULL;
	node*sonraki;
	
	
	while(iter!=NULL){
		sonraki=iter->next;
		
		iter->next=onceki;
		onceki=iter;
		
		iter=sonraki;
		
		
	}head=onceki;
	
	
}

int main(){
head=(node*)malloc(sizeof(node));
head->data=1;
head->next=NULL;
head->next=(node*)malloc(sizeof(node));
head->next->data=2;
head->next->next=NULL;
head->next->next=(node*)malloc(sizeof(node));
head->next->next->data=3;
head->next->next->next=NULL;


cevirme();

printf("%d",head->next->next->data);	
}
