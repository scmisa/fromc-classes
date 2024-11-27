#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>
using namespace std;


int main() {
int a=0,b=0,l=0,p=99,ll=0,pp=0;
srand(time(NULL));
int tab[100]={0};

for(int i=1;i<10000;i++)
{
for(int i=1;i<100;i++)
tab[i]=tab[i-1]+rand()%500+1;

	l=0;
	p=99;
a=tab[rand()%100];
//cout<<a<<" "<<endl;
//for(int i=0;i<100;i++) cout<<i<<"-"<<tab[i]<<endl;

//while(tab[l]!=a )
while( tab[p]!=a and tab[l]!=a)
{
	if(a>tab[(l+p)/2]) l=(l+p)/2; else p=(l+p)/2;
	//cout<<a<<" l"<<l<<" p"<<p<<endl;
}
if(a==tab[p])  pp++;
if(a==tab[l])  ll++;



}
cout<<"p="<<pp<<" l="<<ll;

	return 0;
}//binarny algorytm

