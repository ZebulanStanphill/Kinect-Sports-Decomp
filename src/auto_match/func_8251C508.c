extern int fn_8265C9E0();
extern int fn_828AAAA0();
extern unsigned int lbl_82197C88;
extern unsigned int lbl_82197CDC;
extern unsigned int lbl_82197CE0;


unsigned int * fn_8251C508(unsigned __int64 param_1)

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
    *puVar1 = &lbl_82197C88;
    puVar1[0x1c] = &lbl_82197CDC;
    puVar1[0x20] = 0;
  }
  return puVar1;
}

