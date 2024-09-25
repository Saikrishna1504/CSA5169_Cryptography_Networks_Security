#include<stdio.h>
#include<cmath>
int main(){
	int p=11,q=3;
	int n,x,y,e,d;
	n = p * q;
	x = (p-1)*(q-1);
	for(int i=2;i<10;i++){
		if(x%i!=0){
			e=i;
			break;
		}
	}
	printf("public key is %d %d",e,n);
	for(int i=2;i<10;i++){
		if((e*i)%x==1){
			d=i;
			break;
		}
	}
	printf("private key is %d %d",d,n);
	int pt=7,ct;
	int en , de;
	int m = pow(pt,e);
	en = m % n;
	int b = pow(en,d);
	de = b % n;
	printf("encryption is %d",en);
	printf("decryption is %d",de);
	return 0;
}