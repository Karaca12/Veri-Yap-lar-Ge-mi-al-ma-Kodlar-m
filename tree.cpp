#include <stdio.h>
#include <stdlib.h>


typedef struct node{
	
	int data;
	node*sag;
	node*sol;
};


node*ekle(node*a_y,int data){
	if(a_y==NULL){
		node*root=(node*)malloc(sizeof(node));
		root->data=data;
		root->sag=NULL;
		root->sol=NULL;
		return root;
		
	}
	
	if(a_y->data<data){
	a_y->sag=ekle(a_y->sag,data);
	
	}
	
	if(a_y->data>data){
		a_y->sol=ekle(a_y->sol,data);
	
	}
	
	return a_y;
	

}


int max(node*a_y){
	while(a_y->sag!=NULL)
	{a_y=a_y->sag;
	}
	return a_y->data;
	
}


int min(node*a_y){
	
	while(a_y->sol!=NULL)
	{a_y=a_y->sol;
	}
	return a_y->data;
	
	
}

node* bul(node*a_y,int data){
	if(a_y==NULL){
		printf("bos");
		return a_y;
		
	}
	if(a_y->data==data){
		printf(" Deger bulundu -> %d",a_y->data);
	
	}
	
	if(a_y->data<data){
		a_y->sag=bul(a_y->sag,data);
			
	}
	if(a_y->data>data){
		a_y->sol=bul(a_y->sol,data);
	}

	
	return a_y;
}



void dolass(node*a_y){
	if(a_y==NULL)
			return;
	dolass(a_y->sag);
	printf(" -> %d",a_y->data);
	dolass(a_y->sol);
	
	
}



node*sil(node*a_y,int data){
	if(a_y==NULL){
		return NULL;
		
	}
	if(a_y->data==data){
		if(a_y->sag==NULL && a_y->sol==NULL){
			return NULL;
		}
		
	if(a_y->sag!=NULL){//sa�da de�er varsa onu al�ca��z ve en k���k de�eri k�k�n datas� yapcaz hergangi bir a�ac�n k�k� olabilir.
		a_y->data=min(a_y->sag);
		a_y->sag=sil(a_y->sag,min(a_y->sag));
		return a_y;
	}	
	a_y->data=max(a_y->sol);
	a_y->sol=sil(a_y->sol,max(a_y->sol));
	return a_y;	
		
	}
	if(a_y->data<data){//data ilk de�erde de�il olay �rg�s�ne g�re o zaman derleyici bu sat�r� makine 
	//diline �evirdiinde makine de�er b�y�kse sa�a devam et k���kse sola devam et diyecek kendini �a��rarak ve yeniden karar noktalar�na g�re data
	//varm� ve kolalr� yok mu sil e�er sa� bo� de�ilse onu datan�n de�eri ya sonra sil ayn� �ekilde soldada ayn� �eyleri yap.
		a_y->sag=sil(a_y->sag,data);
	}
	if(a_y->data>data){
		a_y->sol=sil(a_y->sol,data);
	}
	
	
	
	return a_y;
}





int main(){
node*bagac=NULL;
node*agac=NULL;
agac=ekle(agac,16);	
agac=ekle(agac,17);
agac=ekle(agac,15);
dolass(agac);
printf("\n");
agac=sil(agac,15);
dolass(agac);

bul(agac,17);

bul(bagac,14);
max(agac);	
	
}
