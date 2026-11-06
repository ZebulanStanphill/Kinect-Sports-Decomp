extern int fn_828E9DA8(void *);
extern int fn_828E9D90(void *);
extern unsigned fn_828E9FF8(void *,int);
void fn_828C8068(int self,void *r) {
 unsigned n;
 if(fn_828E9DA8(r)-fn_828E9D90(r)>=2)n=fn_828E9FF8(r,2);else n=0;
 *(unsigned *)(self+0x84)=n;
 if(fn_828E9DA8(r)-fn_828E9D90(r)>=6)n=fn_828E9FF8(r,6);else n=0;
 *(unsigned *)(self+0x80)=n;
 if(fn_828E9DA8(r)-fn_828E9D90(r)>=16)*(unsigned *)(self+0x88)=fn_828E9FF8(r,16);else *(unsigned *)(self+0x88)=0;
}
