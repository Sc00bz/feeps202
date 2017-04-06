#define R(a,n)a<<n^a>>(64-n)
#define H(i,r,p,d)int sha##i(C*h,const C*m,U n){k(r*8,m,n,p,h,d);return 0;}
#define L(i,n)for(i=0;i<n;i++) 

#define X s[x+5*y]
#define S(x)L(j,r)s[j/8]^=(U)x[j]<<j%8*8
typedef unsigned long long U;typedef unsigned char C;void F(U*s){C R=1,r;U t,B[5

],Y,x,y,n,j;L(n,24){L(x,5){B[x]=0;L(y,5)B[x]^=X;}L(x,5){t=B[(x+4)%5]^R(B[(x+1)%5],1);L(y,5)X^=t;}t=s[1];y=r=0;x=1;L(j,24){r+=(C)j+1;Y=2*x+3*

y;x=y;y=Y%5;Y=X;X=R(t,r%64);t=Y;}L(y,5){L(x,5)B[x]=X;L(x,5)X=B[x]^(~B[(x+1)%5]&B[(x+2)%5]);}L(j,7)if((R=(R<<1)^(113*(R>>7)))&2)*s^=(U)1<<((1

<<j)-1);}}void k(C r,const C*m,U n,C p,C*h,U d){U s[25]={0},i,j;C t[200]={0};L(i,n/r){S(m);F(s);m+=r;}L(i,n%r)t[i]=m[i];t[i]=p;t[r-1]|=128;S

(t);F(s);L(i,d)h[i]=C(s[i/8]>>8*(i%8));}H(3_224,18,6,28)H(3_256,17,6,32)H(3_384,13,6,48)H(3_512,9,6,64)H(ke128,21,31,168)H(ke256,17,31,136)
