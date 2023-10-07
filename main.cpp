#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
	int sayi1,sayi2,sayi3,sonuc,sonuc2,sonuc3;
	short limit = 1;
	sayi1 = 1; //0'i tercih etmemesi için
	cout<<"Limitteki "<<limit<<". Sayi: ";
    cin>>sayi2;
    sayi3 = sayi2 + 1;
	srand(time(NULL)); // rastgele tercih olusabilmesi icin
    sonuc=sayi1+rand()%(sayi3-sayi1);
    cout<<"Birinci Tercih = "<<sonuc<<endl;
    sonuc2=sayi1+rand()%(sayi3-sayi1);
    cout<<"Ikinci Tercih = "<<sonuc2<<endl;
    sonuc3=sayi1+rand()%(sayi3-sayi1);
    cout<<"Ucuncu Tercih = "<<sonuc3<<endl;
    while (true){
	if(sayi2<=0)
	{ //Yazilan deger 0 veya daha kücük olursa kapanir
	cout<<"Cikmak icin bir tusa bas."<<endl;
    break;
	}
	else {
		cout<<"Limitteki "<<++limit<<(". Sayi: ");
		cin>>sayi2;
		sayi3 = sayi2 + 1;
    	sonuc=sayi1+rand()%(sayi3-sayi1);
    	cout<<"Birinci Tercih = "<<sonuc<<endl;
    	sonuc2=sayi1+rand()%(sayi3-sayi1);
    	cout<<"Ikinci Tercih = "<<sonuc2<<endl;
    	sonuc3=sayi1+rand()%(sayi3-sayi1);
    	cout<<"Ucuncu Tercih = "<<sonuc3<<endl;
	    }
	}
}
