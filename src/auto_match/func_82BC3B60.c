extern int fn_82BC33B0();
extern unsigned int lbl_820E4208;


void fn_82BC3B60(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82BC33B0(param_1,0x89,param_2);
  puVar1[4] = 1;
  *puVar1 = &lbl_820E4208;
  return;
}

