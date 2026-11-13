extern int fn_82BC33B0();
extern unsigned int lbl_820E4190;


void fn_82BC3B08(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82BC33B0(param_1,0x80);
  puVar1[4] = 1;
  *puVar1 = &lbl_820E4190;
  puVar1[5] = 1;
  return;
}

