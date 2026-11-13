extern int fn_82BC33B0();
extern unsigned int lbl_820E4028;


void fn_82BC38E0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82BC33B0(param_1,0x75,param_2);
  puVar1[0x14] = 1;
  *puVar1 = &lbl_820E4028;
  puVar1[4] = 1;
  puVar1[5] = 0;
  return;
}

