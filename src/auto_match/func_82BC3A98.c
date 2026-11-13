extern int fn_82BC33B0();
extern unsigned int lbl_820E4118;


void fn_82BC3A98(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82BC33B0(param_1,0x7a,param_2);
  puVar1[4] = 1;
  *puVar1 = &lbl_820E4118;
  puVar1[5] = 0;
  puVar1[0x39] = puVar1[0x39] | 0x40;
  return;
}

