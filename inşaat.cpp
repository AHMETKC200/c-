#include <iostream>
#include <conio.h>
using namespace std;
 int main()
 
 {    
     setlocale(LC_ALL,"Turkish");
 
 		string sys_username	= "amet";
 	string sys_password ="123";
 	
 	string username  ;
	string password ;
	int cikdev;
		 cout<<"l�tfen ad�n� gir yapram:"<<endl;
	 
	 cin>>username;
	 cout<<"   "<<endl<<endl<<endl;
	 cout<<"afrikada her 1 dakkada 60 saniye geciyor"<<endl<<endl;
	 
	 cout<<"sifreyi soyle lutfen "<<endl;
	 
	 cin>>password;
 	 if (sys_username == username && sys_password == password){
 	 	
 	 cout<<"VAY BENIM ANAM BABAM HOSGELMISSIN HELE GEC HELE GEC "<<endl;
	  cout<<"l�tfen yapmak istedi�iniz i�lemi se�iniz (hesap, insaat,faiz)"<<endl; 	
     string k ="insaat", u ="hesap", m,i="faiz";
     cin>>m;
     if(m=="hesap"){
	double x,y,toplam,sonuc,asonuc,bsonuc ;
	char d='+',f='-',g='*',j='/',c;
	cout<<"l�tfen say� de�erlerini giriniz "<<endl;
	cin>>x;
	cin>>y;
	cout<<"yapmak istedi�iniz i�lemi se�iniz +,-,*,/"<<endl;
	cin>>c;
	if(c == d){
	toplam = x+y;
	if(toplam==31){
		cout<<" 31";
		cout<<"��kmak i�in 1 ve 2'ye bas�n";
		
	}else{
		cout<<"toplam de�er="<<toplam<<endl;}
		
	}else if (c==f){
		sonuc = x-y;
		cout<<"��kan sonu�="<<sonuc <<endl;
	}else if (c==g){
		asonuc = x*y;
		cout<<"�arp�m sonu�u="<<asonuc<<endl;
		
	}else if (c==j){
		bsonuc=x/y;
		cout<<"bolme sonu�u="<<bsonuc<<endl;
     }else{
     	cout<<"thanks";
       }
    }else if(m=="insaat"){
    	cout<<"abc";

 	double kat ,oda, daire ,tugla, cimento;
 	cout<<"kat sayisini giriniz " <<        endl  ;                         
	
 	cin>>kat;
 	
 	
 	cout<<"daire sayiyisini giriniz "<<endl;
 	cin>>daire;
 	
 	
 	cout<<" oda say�s�n� giriniz"<<endl;
 	cin>>oda;
 	cout<<"Toplam oda say�s� = "<<(kat*daire*oda)<<endl;
 	cout<<"gereken tugla say�s� = "<<((oda*31)*kat*daire)<<endl;	
 	cout<<	"gereken �imento kutlesi="<<((oda*250)*kat*daire)<<endl;
 		if(kat>10){
 			cout<<"fazla kat sayisi ";
		 }else{
		 	cout<< " yeterli kat saiyisi ";			 	
		 }
	  }else if(i=="faiz"){
		double borc,faiz,toplam_odenecek;
	
	cout<<"bor�lunun tutar�= "<<endl;
	cin>>borc;
	cout<<"ki�iye gelen faiz oran�"<<endl;
	cin>>faiz;
	if(toplam_odenecek>=500000){
	toplam_odenecek=(faiz*borc)+borc;
	cout<<"odeyece�i tutar "<<toplam_odenecek<<endl;
	}else{
		toplam_odenecek=(faiz*borc)+borc;
		cout<<"toplam �denecek"<<endl<<toplam_odenecek;
	}
	  }

}          
	 else if (sys_username != username && sys_password == password){
	 	cout<<"yanl�� girdin"<<endl;
	 	
	 	cout<<"**"<<endl;
	 	cout<<"***"<<endl;
	 	cout<<"****"<<endl;
	 	cout<<"*****"<<endl;
	 	cout<<"******"<<endl;
	 	cout<<"*******"<<endl;
	 	cout<<"  "<<endl;
	 	 }
	  else if  (sys_password != password && username  == sys_username){
	   
	        cout<<"g�zel numara"<<endl;
}
       else  {
	   
	         cout<<"gene hatal� "<<endl;	
 }
 	return 0 ;	 			 	
}
 	
 	
 	
 
 
