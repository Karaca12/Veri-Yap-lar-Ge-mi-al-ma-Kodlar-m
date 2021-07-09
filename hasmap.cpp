
#include <stdio.h>
#include <stdlib.h>

typedef struct ogrenci{
	int yas;
	char *ad;
	struct ogrenci *re;
	
	
};




int main(){
	
int agirlik=10;
	
int *p;

char deneme[]={'k','r','a','c','a'};
//printf("%s",deneme);


p=&agirlik;

//printf("%p\n",*p);
//printf("%p\n",agirlik);



ogrenci*ogrenciler;

ogrenciler=(ogrenci*)malloc(sizeof(ogrenci));

ogrenciler->yas=10;
ogrenciler->ad="kamuran";
ogrenciler->re=NULL;

printf("%s",ogrenciler->ad);



return 0;
}

