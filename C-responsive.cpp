int bolme(int sayi1,int bol,int yeni,int yeni1){
	int bolum,bisey;
	
	if(sayi1 == bol){
		return yeni1;
	}
		bolum = sayi1 % bol;  		
		if(bolum==0){
			
			if(bol > yeni){
				
				  yeni = bol;
				  bisey = yeni % 2;
				  if(bisey == 0){
				  yeni1 = yeni;
				  
			}
			}
			
		}
		return bolme(sayi1, bol+1, yeni, yeni1);
}
	
	


int main(void){
	int sayi1,a=1,yeni2,b=1,c=1;
	
	printf("Herhangi bir sayi giriniz = ");
	scanf("%d",&sayi1);
	yeni2=bolme(sayi1,a,b,c);
	printf("\n2 ye bolunmeyen en buyuk sayı %d'dir'",yeni2);

	return 0;
}
