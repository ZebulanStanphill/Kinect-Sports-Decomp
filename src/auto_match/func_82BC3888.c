extern int fn_82BC33B0();
extern unsigned int lbl_820E3FB8;


void fn_82BC3888(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82BC33B0(param_1,0x83,param_2);
  puVar1[4] = 0;
  *puVar1 = &lbl_820E3FB8;
  return;
}

