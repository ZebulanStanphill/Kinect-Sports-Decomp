extern int fn_8223BBA0();
extern int fn_8265C9E0();
extern int fn_8289D6D0();
extern unsigned int lbl_82196A3C;
extern unsigned int lbl_82197080;


unsigned int * fn_82238590(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x3e4);
  if (puVar1 != (unsigned int *)0x0) {
    fn_8223BBA0(puVar1,param_1);
    *puVar1 = &lbl_82196A3C;
    fn_8289D6D0(puVar1 + 0xba,0);
    puVar1[0xba] = &lbl_82197080;
    fn_8289D6D0(puVar1 + 0xcf,0);
    puVar1[0xcf] = &lbl_82197080;
    fn_8289D6D0(puVar1 + 0xe4,0);
    puVar1[0xe4] = &lbl_82197080;
    return puVar1;
  }
  return 0;
}

