typedef unsigned (*Alloc)(void *,unsigned);
unsigned fn_82FE41A0(unsigned *p,void *a,unsigned size) {
 unsigned result;
 if(size<4) size=4;
 p[0]=size;
 result=(*(Alloc *)(*(unsigned *)a+4))(a,size*4);
 p[1]=result;
 if(result==0) return 0x34;
 p[2]=0;
 return 1;
}
