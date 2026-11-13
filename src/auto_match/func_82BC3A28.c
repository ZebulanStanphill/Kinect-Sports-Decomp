extern int fn_82BC33B0();
extern unsigned int lbl_820E40A0;


void fn_82BC3A28(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82BC33B0(param_1,0x76);
  puVar1[4] = 1;
  *puVar1 = &lbl_820E40A0;
  puVar1[0x14] = *(unsigned int *)(param_2 + 0x20);
  puVar1[0xe] = *(unsigned int *)(param_2 + 0xc);
  puVar1[7] = param_2;
  *(unsigned char *)(param_2 + 0x1c) = 1;
  puVar1[5] = 0;
  return;
}

