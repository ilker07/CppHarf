
#include <iostream>

using namespace std;
char buyukHarfler[23]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','R','S','T','U','V','Y','Z'};
char kucukHarfler[23]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','v','y','z'};
bool kucukMu(char);
bool buyukmu(char);
void kelimeyiYaz(const char *);
void kucult(char *);
void buyult(char *);
int main(int argc, char** argv) 
{

char deger[]="";	
cout<<"Kelimeyi girin: ";
cin.getline(deger,50);
kelimeyiYaz(deger);
kucult(deger);
//buyult(deger);
cout<<"fonksiyondan sonra: "<<deger<<endl;
return 0;
}
void buyult(char *kelime)
{
	while(*kelime!='\0')
	{
		
		if(!buyukmu(*kelime))
		{
			for(int i=0;i<23;i++)
	      {
		     if(kucukHarfler[i]==*kelime)
		     {
		     	*kelime=buyukHarfler[i];
		     
			 }
	      }
		}
		++kelime;
	}
}

bool buyukmu(char harf)
{
	for(int i=0;i<23;i++)
	{
		if(buyukHarfler[i]==harf)
		
		 return true;
	}
	return false;
}

void kelimeyiYaz(const char *kelime)
{
	cout<<"Girilen Kelime: ";
	for(;*kelime!='\0';kelime++)
	{
		cout<<*kelime;
		
	}
	cout<<endl;
	
}
void kucult(char *kelime)
{
	while(*kelime !='\0')
	{
		if(!kucukMu(*kelime))
		{
			for(int i=0;i<23;i++)
			{
				if(buyukHarfler[i]==*kelime)
				  *kelime=kucukHarfler[i];
			}
			
		}
		++kelime;
	}
}
bool kucukMu(char harf)
{
	for(int j=0;j<23;j++)
	{
		if(kucukHarfler[j]==harf)
		 return true;
	}
	return false;
}


