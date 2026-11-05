typedef struct Word_82A20988 {unsigned short hi,lo;} Word_82A20988;
extern void fn_82A208A8(unsigned);extern void *memmove(void *,const void *,unsigned);
int fn_82A20988(unsigned self,unsigned n) {
 unsigned avail,count,bytes,i;unsigned short *h=(unsigned short *)self;char *p;
 fn_82A208A8(self);
 bytes=n*4;
 {unsigned *q=(unsigned *)self;count=(q[1]&65535)*(q[2]&65535);}avail=h[7];
 if(bytes>avail-count-16)return 0;
 p=(char *)(self+avail);
 memmove(p-bytes,p,h[2]-h[6]*4-avail);
 h[7]=*(unsigned *)(self+12)-bytes;
 p=(char *)(self+h[2]-h[6]*4);
 memmove(p-bytes,p,h[4]*4);
 h[6]+=n;
 i=0;
 if(h[4])do {
 unsigned *q=(unsigned *)(self+h[2]+(i-h[6])*4);i++;
 *(unsigned short *)((char *)q+2)=*q-bytes;
 }while(i<h[4]);
 return 1;
}
