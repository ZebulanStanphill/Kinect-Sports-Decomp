extern void fn_82687EE0(unsigned, unsigned);
extern void fn_8267BE38(unsigned);
extern void fn_8267C4F0(unsigned);
extern void fn_8267C488(unsigned *);
extern long _InterlockedExchangeAdd(long *, long);
extern unsigned lbl_8200DB84;
static __forceinline void release_826F54F8(unsigned *p) { fn_82687EE0(p[0],p[1]); fn_8267BE38(p[0]); }
void fn_826F54F8(unsigned *p) {
 unsigned base;
 p[0]=(unsigned)&lbl_8200DB84;
 release_826F54F8(p+0x12);
 base=p[0x10]&~3u;
 if(_InterlockedExchangeAdd((long *)(base+4),-1)-1==0) fn_8267BE38(base);
 if(p[15]) fn_8267C4F0(p[15]);
 if(p[14]) fn_8267C4F0(p[14]);
 if(p[13]) fn_8267C4F0(p[13]);
 if(p[12]) fn_8267C4F0(p[12]);
 if(p[11]) fn_8267C4F0(p[11]);
 if(p[10]) fn_8267C4F0(p[10]);
 if(p[9]) fn_8267C4F0(p[9]);
 if(p[8]) fn_8267C4F0(p[8]);
 if(p[7]) fn_8267C4F0(p[7]);
 if(p[6]) fn_8267C4F0(p[6]);
 if(p[5]) fn_8267C4F0(p[5]);
 if(p[4]) fn_8267C4F0(p[4]);
 if(p[3]) fn_8267C4F0(p[3]);
 if(p[2]) fn_8267C4F0(p[2]);
 fn_8267C488(p);
}
