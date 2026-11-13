void fn_82CA3D88(unsigned __int64 param_1,unsigned int *param_2,unsigned char *param_3,int param_4,int param_5,
                  int param_6,int param_7,int param_8)

{
  unsigned char *pbVar1;
  unsigned int uVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  __int64 lVar5;
  
  param_8 = param_8 >> 2;
  pbVar3 = (unsigned char *)(param_5 + 2);
  lVar5 = 4;
  pbVar4 = (unsigned char *)(param_4 + 2);
  do {
    uVar2 = ((unsigned int)pbVar4[(param_5 - param_4) + -2] << 0x10 | (unsigned int)pbVar4[-2]) << 8;
    *param_2 = (unsigned int)param_3[1] << 0x10 | (unsigned int)*param_3 | uVar2;
    param_2[param_8] = (unsigned int)param_3[param_6 + 1] << 0x10 | (unsigned int)param_3[param_6] | uVar2;
    uVar2 = ((unsigned int)pbVar3[-1] << 0x10 | (unsigned int)pbVar4[-1]) << 8;
    param_2[1] = (unsigned int)param_3[3] << 0x10 | (unsigned int)param_3[2] | uVar2;
    param_2[param_8 + 1] = (unsigned int)param_3[param_6 + 3] << 0x10 | (unsigned int)param_3[param_6 + 2] | uVar2;
    uVar2 = ((unsigned int)*pbVar3 << 0x10 | (unsigned int)*pbVar4) << 8;
    param_2[2] = (unsigned int)param_3[5] << 0x10 | (unsigned int)param_3[4] | uVar2;
    param_2[param_8 + 2] = (unsigned int)param_3[param_6 + 5] << 0x10 | (unsigned int)param_3[param_6 + 4] | uVar2;
    pbVar1 = pbVar4 + 1;
    pbVar4 = pbVar4 + param_7;
    uVar2 = ((unsigned int)pbVar3[1] << 0x10 | (unsigned int)*pbVar1) << 8;
    pbVar3 = pbVar3 + param_7;
    param_2[3] = (unsigned int)param_3[7] << 0x10 | (unsigned int)param_3[6] | uVar2;
    param_2[param_8 + 3] = (unsigned int)param_3[param_6 + 7] << 0x10 | (unsigned int)param_3[param_6 + 6] | uVar2;
    lVar5 = lVar5 + -1;
    param_3 = param_3 + param_6 * 2;
    param_2 = param_2 + param_8 * 2;
  } while (lVar5 != 0);
  return;
}

