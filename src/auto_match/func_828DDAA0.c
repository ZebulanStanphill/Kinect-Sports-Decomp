extern int fn_828E9DA8(void *);
extern int fn_828E9D90(void *);
extern unsigned fn_828E9FF8(void *,int);
extern unsigned __int64 fn_828EA0D0(void *,int);
static __forceinline unsigned read_828DDAA0(void *s,int n) {
 if(fn_828E9DA8(s)-fn_828E9D90(s)>=n) return fn_828E9FF8(s,n);
 return 0;
}
static __forceinline unsigned __int64 read64_828DDAA0(void *s) {
 if(fn_828E9DA8(s)-fn_828E9D90(s)>=64)return fn_828EA0D0(s,64);
 return 0;
}
void fn_828DDAA0(int self,void *s) {
 unsigned type=read_828DDAA0(s,2);
 *(unsigned *)(self+0x80)=type;
 switch(type) {
 case 1: *(unsigned char *)(self+0x90)=read_828DDAA0(s,1)!=0; break;
 case 0: *(unsigned __int64 *)(self+0x88)=read64_828DDAA0(s);break;
 }
}
