#include<stdio.h>
int main() {
char name[30];
printf("Isminizi giriniz:(bosluksuz)\n");
scanf("%s",name);
printf("Peki %s\n",name);
char gun[10];
char work[5];
char saat[5];
char yas[5];
char buyukyas[5];
char saat2[5];
char saat3[5];
printf("Hafta icindemiyiz hafta sonunda mi?(haftaici,haftasonu);\n");
scanf("%s",gun);
if(strcmp(gun,"haftaici")==0){
	printf("Herhangi bir iste calisiyor musunuz?(evet,hayir)\n");
	scanf("%s",work);
	if(strcmp(work,"evet")==0){
		printf("Git calis...");
		
	}
	else printf("Yasin 20'den buyuk mu?(evet,hayir)\n");
		scanf("%s",yas);
		if(strcmp(yas,"evet")==0){
			printf("Peki %s yasin 65'den buyuk mu?(evet,hayir)\n",name);
			scanf("%s",buyukyas);
			if(strcmp(buyukyas,"hayir")==0){
				printf("Saate 10'dan once mi sonra mi?(once,sonra)\n");
 				scanf("%s",saat);
					if(strcmp(saat,"once")==0){
 						printf("Evde otur...");
 				}
					else printf("Peki 16'dan once mi?(once,sonra)\n");
					     scanf("%s",saat2);
						 if(strcmp(saat2,"once")==0){
						 	printf("Cik gez...");
						 } 		
						 else printf("Evde otur...");
			}	
			else printf("Otur evinde...");
		}	
		else(printf("Otur evinde..."));	
	}

else printf("Saate 10'dan once mi sonra mi?(once,sonra)\n");
 scanf("%s",saat);
 if(strcmp(saat,"once")==0){
 	printf("Evde otur...");
	 }
 else printf("Saat 20'den once mi?(once,sonra)\n");
	  scanf("%s",saat3);
	  if(strcmp(saat3,"sonra")==0){
	  	printf("Evde otur...");
	  }
 	   else printf("Yasin 20'den buyuk mu?(evet,hayir)\n");
		scanf("%s",yas);
		if(strcmp(yas,"evet")==0){
			printf("Peki yasin 65'den kucuk mu?(evet,hayir)\n");
			scanf("%s",buyukyas);
			if(strcmp(buyukyas,"evet")==0){
				printf("Saate 10'dan once mi sonra mi?(once,sonra)\n");
 				scanf("%s",saat);
					if(strcmp(saat,"once")==0){
 						printf("Evde otur...");
 				}
					else printf("Peki 16'dan once mi?(once,sonra)\n");
					     scanf("%s",saat2);
						 if(strcmp(saat2,"once")==0){
						 	printf("Cik gez...");
						 } 		
						 else printf("Evde otur...");
			}	
			else printf("Otur evinde...");
		}	
		else(printf("Otur evinde..."));	
	

	return 0;
}
