extern int fn_822337D0();
extern int fn_8265C9E0();
extern int fn_8289D6D0();
extern unsigned int lbl_82197100;
extern unsigned int lbl_821AEC0C;
extern unsigned int lbl_821AECA0;


unsigned int * fn_82252C18(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x278);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    fn_822337D0(puVar1,param_1);
    *puVar1 = &lbl_821AECA0;
    puVar1[0x7e] = puVar1 + 0x7d;
    puVar1[0x7f] = 0;
    puVar1[0x7d] = puVar1 + 0x7d;
    puVar1[0x80] = (int)param_1;
    puVar1[0x86] = 0;
    puVar1[0x7c] = &lbl_821AEC0C;
    fn_8289D6D0(puVar1 + 0x88,4);
    puVar1[0x88] = &lbl_82197100;
  }
  return puVar1;
}

