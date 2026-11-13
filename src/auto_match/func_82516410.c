extern int fn_8265C9E0();
extern void fn_828AA9B8(void *,unsigned,unsigned,unsigned);
extern unsigned int lbl_82197C88;
extern unsigned int lbl_82197CDC;
extern unsigned int lbl_82197CE0;

static __forceinline void init_sub(unsigned int *p) { unsigned int *s=p+0x1c; s[0]=(unsigned)&lbl_82197CE0; p[0x1f]=0; p[0x1e]=(unsigned)(s+1); p[0x1d]=(unsigned)(s+1); }

unsigned int * fn_82516410(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x88);
  if (puVar1 != (unsigned int *)0x0) {
    fn_828AA9B8(puVar1,param_1,param_2,param_3);
    init_sub(puVar1);
    *puVar1 = &lbl_82197C88;
    puVar1[0x1c] = &lbl_82197CDC;
    puVar1[0x20] = 0;
    return puVar1;
  }
  return 0;
}

