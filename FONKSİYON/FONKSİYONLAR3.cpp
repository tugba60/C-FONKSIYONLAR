#include <iostream>
using namespace std;

// Hangi de�eri d�nd�rmek istiyorsak o �ekilde bir fonk olu�turmal�y�z.

int returnletoplama(int say1,int say2, int say3){
	
	cout <<"TOPLAMA ISLEMINI FONSIYONLAR YARDIMI ILE YAPMA"<<endl;
	
	return say1+say2+say3;
	
	// cout �FADES� return DEN A�A�I YAZILIRSA OKUNMAZ. EN SON return �FADES� OLMALI
}


void toplam(int say1,int say2, int say3){
	
	cout <<say1 + say2 + say3;
}


int main(){
	int a=1,b=3,c=7;
	
	int sonuc1=dondurmeyletoplama(a,b,c); //return �FADES� OLDU�U ���N �IKTIYI B�R DE���KENE ATAYAB�LD�K.
	
	//int sonuc2=toplam(a,b,c); �EKL�NDE OLURSA HATA VER�R!!!!
	
	dondurmeyletoplama(a,b,c); //�IKTI VERMEZ!!!!
	
	toplam(a,b,c);
	
	cout <<endl<<dondurmeyletoplama(a,b,c); //�IKTI VER�R!!!!
	
		cout <<endl<<sonuc1<<endl;
	
		//COUT<<sonuc2; DA TANIMLI OLMAZ!!!!!
	
	return 0;
}

/*return �FADES� VARSA O FONKS�YONU ANA MA�NDE
 B�R DE�ERE ATAYIP COUT YAPAB�L�R�Z 
AMA return �FADES� YOKSA HERHANG� B�R DE�ERE ATANIP 
D�ND�R�LEMEZ BU Y�ZDEN DE �IKTISI ALINAMAZ!!!! */ 
