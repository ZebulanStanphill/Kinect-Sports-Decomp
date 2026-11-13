void fn_82CA3B20(unsigned __int64 param_1,unsigned int *param_2,unsigned char *param_3,int param_4,int param_5,
                  int param_6,int param_7,int param_8)

{
  unsigned char *pbVar1;
  unsigned int uVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  __int64 lVar5;
  
  param_8 = param_8 >> 2;
  pbVar3 = (unsigned char *)(param_5 + 2);
  lVar5 = 8;
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
    uVar2 = ((unsigned int)pbVar3[1] << 0x10 | (unsigned int)pbVar4[1]) << 8;
    param_2[3] = (unsigned int)param_3[7] << 0x10 | (unsigned int)param_3[6] | uVar2;
    param_2[param_8 + 3] = (unsigned int)param_3[param_6 + 7] << 0x10 | (unsigned int)param_3[param_6 + 6] | uVar2;
    uVar2 = ((unsigned int)pbVar3[2] << 0x10 | (unsigned int)pbVar4[2]) << 8;
    param_2[4] = (unsigned int)param_3[9] << 0x10 | (unsigned int)param_3[8] | uVar2;
    param_2[param_8 + 4] = (unsigned int)param_3[param_6 + 9] << 0x10 | (unsigned int)param_3[param_6 + 8] | uVar2;
    uVar2 = ((unsigned int)pbVar3[3] << 0x10 | (unsigned int)pbVar4[3]) << 8;
    param_2[5] = (unsigned int)param_3[0xb] << 0x10 | (unsigned int)param_3[10] | uVar2;
    param_2[param_8 + 5] =
         (unsigned int)param_3[param_6 + 0xb] << 0x10 | (unsigned int)param_3[param_6 + 10] | uVar2;
    uVar2 = ((unsigned int)pbVar3[4] << 0x10 | (unsigned int)pbVar4[4]) << 8;
    param_2[6] = (unsigned int)param_3[0xd] << 0x10 | (unsigned int)param_3[0xc] | uVar2;
    param_2[param_8 + 6] =
         (unsigned int)param_3[param_6 + 0xd] << 0x10 | (unsigned int)param_3[param_6 + 0xc] | uVar2;
    pbVar1 = pbVar4 + 5;
    pbVar4 = pbVar4 + param_7;
    uVar2 = ((unsigned int)pbVar3[5] << 0x10 | (unsigned int)*pbVar1) << 8;
    pbVar3 = pbVar3 + param_7;
    param_2[7] = (unsigned int)param_3[0xf] << 0x10 | (unsigned int)param_3[0xe] | uVar2;
    param_2[param_8 + 7] =
         (unsigned int)param_3[param_6 + 0xf] << 0x10 | (unsigned int)param_3[param_6 + 0xe] | uVar2;
    lVar5 = lVar5 + -1;
    param_3 = param_3 + param_6 * 2;
    param_2 = param_2 + param_8 * 2;
  } while (lVar5 != 0);
  return;
}

