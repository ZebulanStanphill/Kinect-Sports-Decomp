extern int fn_82381C38();
extern int fn_82381D68();
extern int fn_8265C9E0();
extern unsigned int lbl_821B8558;


unsigned int * fn_82252A78(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x238);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    fn_82381C38(puVar1,param_1);
    *puVar1 = &lbl_821B8558;
    fn_82381D68(puVar1 + 0x3c,param_1,1);
  }
  return puVar1;
}

