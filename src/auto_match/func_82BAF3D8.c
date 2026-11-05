extern void *fn_82B7BD28(unsigned, unsigned);
extern void *memset(void *, int, unsigned);
unsigned *fn_82BAF3D8(unsigned *p,unsigned a,unsigned b,unsigned c,unsigned n) {
 int i=0; p[3]=b; p[4]=c; p[5]=a; p[0]=1;
 do {p[0]<<=1; if(p[0]>=n) break; i++;} while(i<32);
 p[1]=0; p[2]=(unsigned)fn_82B7BD28(a,p[0]*4);
 memset((void*)p[2],0,p[0]*4);return p;
}