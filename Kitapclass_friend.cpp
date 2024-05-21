#include <iostream>
#include <locale.h>
using namespace std;

class Yazar{
	string m_isim;
	int m_yas;
	int m_kitapSayisi;
	
	public:
		Yazar(string isim,int yas,int kitapSayisi):m_isim{isim},m_yas{yas},m_kitapSayisi{kitapSayisi}{ }
		string getisim(){return m_isim;}
		
};
class Kitap{
	string m_ad;
	double m_fiyat;
	int m_sayfa;
	int m_puan;
	public:
		Kitap(string ad,double fiyat,int sayfa,int puan):m_ad{ad},m_fiyat{fiyat},m_sayfa{sayfa},m_puan{puan}{ }
		void kitapBilgileri(Yazar& yazar){
			cout<<"K�TABIN ADI: "<<m_ad<<"\nK�TABIN YAZARI: "<<yazar.getisim()<<"\nK�TABIN SAYFA SAYISI: ";
			cout<<m_sayfa<<"\nK�TABIN F�YATI: "<<m_fiyat<<"\nK�TABA VER�LEN PUAN:"<<m_puan<<endl;
		}
		string getad(){return m_ad;}
		int getpuan(){return m_puan;}
		friend int yildiz( Kitap kitap,int okuyanSayisi);
		friend class Yazar;
};


int yildiz( Kitap kitap,int okuyanSayisi){
	if(kitap.getpuan()==5)
	cout<<"OKUYANLARIN HEPS� "<<kitap.getad()<<" K�TABINI BE�ENM��"<<endl;
	else if(kitap.getpuan()==4){
		cout<<"YAKLA�IK "<<okuyanSayisi*0.75<<" K��� K�TABI BE�ENM��."<<endl;
	}
	else if(kitap.getpuan()==3){
		cout<<"YAKLA�IK "<<okuyanSayisi*0.5<<" K��� K�TABI BE�ENM��."<<endl;
	}
	else if(kitap.getpuan()==2){
		cout<<"YAKLA�IK "<<okuyanSayisi*0.25<<" K��� K�TABI BE�ENM��."<<endl;
	}
	else if(kitap.getpuan()==1){
		cout<<"YAKLA�IK "<<okuyanSayisi*0.1<<" K��� K�TABI BE�ENM��."<<endl;
	}
	else if(kitap.getpuan()==0){
		cout<<"K�TABI K�MSE BE�ENMEM��."<<endl;
	}
	else
	cout<<"yanl�� puan de�eri";
}

int main(){
	setlocale(LC_ALL,"TURKISH");
	Kitap kitap("OD",100.99,316,4);
	Yazar yazar("�SKENDER PALA",45,23);
	long int okuyan;
	cout<<kitap.getad()<<" K�TABINI KA� K��� OKUMU�?\n";
	cin>>okuyan;
	cout<<"*****-----*****\nK�TAP B�LG�LER�\n*****-----*****\n";
	kitap.kitapBilgileri(yazar);
	cout<<"\n��MD� �STAT�ST�KLER� G�REL�M\n";
	cout<<yildiz(kitap,okuyan)<<endl;
	return 0;
}
