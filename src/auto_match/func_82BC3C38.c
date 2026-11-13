extern int fn_82BC33B0();
extern unsigned int lbl_820E42E8;


void fn_82BC3C38(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82BC33B0(param_1,0x7e);
  puVar1[4] = 1;
  *puVar1 = &lbl_820E42E8;
  puVar1[5] = 1;
  return;
}

