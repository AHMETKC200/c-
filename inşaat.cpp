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
		 cout<<"lütfen adýný gir yapram:"<<endl;
	 
	 cin>>username;
	 cout<<"   "<<endl<<endl<<endl;
	 cout<<"afrikada her 1 dakkada 60 saniye geciyor"<<endl<<endl;
	 
	 cout<<"sifreyi soyle lutfen "<<endl;
	 
	 cin>>password;
 	 if (sys_username == username && sys_password == password){
 	 	
 	 cout<<"VAY BENIM ANAM BABAM HOSGELMISSIN HELE GEC HELE GEC "<<endl;
	  cout<<"lütfen yapmak istediðiniz iþlemi seçiniz (hesap, insaat,faiz)"<<endl; 	
     string k ="insaat", u ="hesap", m,i="faiz";
     cin>>m;
     if(m=="hesap"){
	double x,y,toplam,sonuc,asonuc,bsonuc ;
	char d='+',f='-',g='*',j='/',c;
	cout<<"lütfen sayý deðerlerini giriniz "<<endl;
	cin>>x;
	cin>>y;
	cout<<"yapmak istediðiniz iþlemi seçiniz +,-,*,/"<<endl;
	cin>>c;
	if(c == d){
	toplam = x+y;
	if(toplam==31){
		cout<<" 31";
		cout<<"çýkmak için 1 ve 2'ye basýn";
		
	}else{
		cout<<"toplam deðer="<<toplam<<endl;}
		
	}else if (c==f){
		sonuc = x-y;
		cout<<"çýkan sonuç="<<sonuc <<endl;
	}else if (c==g){
		asonuc = x*y;
		cout<<"çarpým sonuçu="<<asonuc<<endl;
		
	}else if (c==j){
		bsonuc=x/y;
		cout<<"bolme sonuçu="<<bsonuc<<endl;
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
 	
 	
 	cout<<" oda sayýsýný giriniz"<<endl;
 	cin>>oda;
 	cout<<"Toplam oda sayýsý = "<<(kat*daire*oda)<<endl;
 	cout<<"gereken tugla sayýsý = "<<((oda*31)*kat*daire)<<endl;	
 	cout<<	"gereken çimento kutlesi="<<((oda*250)*kat*daire)<<endl;
 		if(kat>10){
 			cout<<"fazla kat sayisi ";
		 }else{
		 	cout<< " yeterli kat saiyisi ";			 	
		 }
	  }else if(i=="faiz"){
		double borc,faiz,toplam_odenecek;
	
	cout<<"borçlunun tutarý= "<<endl;
	cin>>borc;
	cout<<"kiþiye gelen faiz oraný"<<endl;
	cin>>faiz;
	if(toplam_odenecek>=500000){
	toplam_odenecek=(faiz*borc)+borc;
	cout<<"odeyeceði tutar "<<toplam_odenecek<<endl;
	}else{
		toplam_odenecek=(faiz*borc)+borc;
		cout<<"toplam ödenecek"<<endl<<toplam_odenecek;
	}
	  }

}          
	 else if (sys_username != username && sys_password == password){
	 	cout<<"yanlýþ girdin"<<endl;
	 	
	 	cout<<"**"<<endl;
	 	cout<<"***"<<endl;
	 	cout<<"****"<<endl;
	 	cout<<"*****"<<endl;
	 	cout<<"******"<<endl;
	 	cout<<"*******"<<endl;
	 	cout<<"  "<<endl;
	 	 }
	  else if  (sys_password != password && username  == sys_username){
	   
	        cout<<"güzel numara"<<endl;
}
       else  {
	   
	         cout<<"gene hatalý "<<endl;	
 }
 	return 0 ;	 			 	
}
 	
 	
 	
 
 
