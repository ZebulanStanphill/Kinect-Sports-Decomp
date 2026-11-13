extern int fn_82BA0690();
extern int fn_82BC33B0();
extern unsigned int lbl_820E4278;


unsigned __int64 fn_82BC3BB8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82BC33B0(param_1,0x7d);
  puVar1[4] = 1;
  *puVar1 = &lbl_820E4278;
  puVar1[0x39] = puVar1[0x39] | 0x18;
  fn_82BA0690(*(unsigned int *)(param_3 + 0xab0),puVar1);
  return param_1;
}

