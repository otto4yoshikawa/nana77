#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char *p,a[100],b[100],y[5],m[3],d[3];
	int yy,y2,md,mm,dd;
int	n=1;
while(1){
cin>>a;

if(a[0]=='%') continue;
if(n>1003) break;

cin>>b;
cout<<a;

if(b[0]!='1') {cout<<"err " <<b<<endl;return 1;}
n++;
y[0]=b[0];
y[1]=b[1];
y[2]=b[2];
y[3]=b[3];
y[5]=0;
yy=atoi(y);
m[0]=b[4];
m[1]=b[5];
m[2]=0;
mm=atoi(m);
d[0]=b[6];
d[0]=b[7];

d[2]=0;
dd=atoi(d);
cout<<"\\hfill{"<<b<<"}"<<endl;
//cout<<"yy="<<y<<" mm="<<mm<<" dd="<<dd<<endl;
}

return 1;
}
