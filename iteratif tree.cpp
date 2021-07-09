#include <stdio.h>
#include <stdlib.h>


typedef struct  agac{
		
		int data;
		agac*sol;
		agac*sag;
};


agac*root=NULL;


void ekle(int data){
	
	agac*iter=root;
	
	if(root==NULL){
		root=(agac*)malloc(sizeof(agac));
		root->data=data;
		root->sol=NULL;
		root->sag=NULL;
		
	}
	if(data>root->data){
	
		while(iter->sag!=NULL){
			
			iter=iter->sag;
			
			
		}
		
		
	}
	if(data<root->data){
		
		
		while(iter->sol!=NULL && data<iter->sag->data){
			
			iter=iter->sol;
			
			
		}
		
	
	}
	
	agac*temp=(agac*)malloc(sizeof(agac));
		
		temp->data=data;
		temp->sag=NULL;
		temp->sol=NULL;
		iter=temp;

}






int main(){

root=(agac*)malloc(sizeof(agac));
root->data=1;
root->sol=NULL;
root->sag=NULL;

root->sol=(agac*)malloc(sizeof(agac));

root->sol->data=2;
root->sol->sol=NULL;
root->sol->sag=NULL;


ekle(3);




printf("%d",root->sag->data);

	
}
