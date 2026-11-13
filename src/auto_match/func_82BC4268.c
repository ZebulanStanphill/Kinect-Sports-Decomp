extern int fn_82BC33B0();
extern unsigned int lbl_820E49A8;


void fn_82BC4268(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82BC33B0(param_1,0x8a,param_4);
  puVar1[0x2a] = param_2;
  puVar1[0x2b] = param_3;
  puVar1[4] = 0;
  *puVar1 = &lbl_820E49A8;
  puVar1[0x39] = puVar1[0x39] | 0x100;
  return;
}

