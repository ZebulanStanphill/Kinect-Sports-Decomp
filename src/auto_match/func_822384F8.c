extern int fn_8265C9E0();
extern int fn_828AAAA0();
extern unsigned int lbl_82197CE0;
extern unsigned int lbl_82197D40;
extern unsigned int lbl_82197D94;


unsigned int * fn_822384F8(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x88);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    fn_828AAAA0(puVar1,param_1);
    puVar1[0x1c] = &lbl_82197CE0;
    puVar1[0x1f] = 0;
    puVar1[0x1e] = puVar1 + 0x1d;
    puVar1[0x1d] = puVar1 + 0x1d;
    *puVar1 = &lbl_82197D40;
    puVar1[0x20] = 0;
    puVar1[0x1c] = &lbl_82197D94;
  }
  return puVar1;
}

