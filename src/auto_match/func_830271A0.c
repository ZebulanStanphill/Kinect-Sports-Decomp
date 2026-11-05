typedef int (*Fn_830271A0)();
extern char lbl_8217C608[],lbl_8217D040[];
static __forceinline void release(unsigned *p) { if (p[0x12]) { (*(Fn_830271A0 *)(**(unsigned **)(p+0x12)+8))(*(void **)(p+0x12)); } }
void fn_830271A0(unsigned *p) { *p=(unsigned)lbl_8217C608; release(p+1); *p=(unsigned)lbl_8217D040; }
