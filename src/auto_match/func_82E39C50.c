extern int fn_82F68CC0();


void fn_82E39C50(unsigned int *param_1,unsigned int *param_2)

{
  unsigned short uVar1;
  unsigned char *pbVar2;
  unsigned int uVar3;
  
  pbVar2 = (unsigned char *)*param_2;
  *param_1 = (unsigned int)pbVar2[3] << 0x18 | (unsigned int)pbVar2[2] << 0x10 | (unsigned int)pbVar2[1] << 8 |
             (unsigned int)*pbVar2;
  uVar3 = *param_2;
  *param_2 = uVar3 + 4;
  uVar1 = *(unsigned short *)(uVar3 + 4);
  *(unsigned short *)(param_1 + 1) = uVar1 << 8 | uVar1 >> 8;
  uVar3 = *param_2;
  *param_2 = uVar3 + 2;
  uVar1 = *(unsigned short *)(uVar3 + 2);
  *(unsigned short *)((int)param_1 + 6) = uVar1 << 8 | uVar1 >> 8;
  uVar3 = *param_2;
  *param_2 = (unsigned int)((unsigned __int64)uVar3 + 2);
  fn_82F68CC0(param_1 + 2,(unsigned __int64)uVar3 + 2,8);
  *param_2 = *param_2 + 8;
  return;
}

