void fn_82F10F08(int param_1,int param_2,int param_3,int param_4,__int64 param_5)

{
  int iVar1;
  unsigned char *pbVar2;
  
  if (0 < (int)param_5) {
    pbVar2 = (unsigned char *)(param_1 + -2);
    do {
      iVar1 = (int)(((((unsigned int)*pbVar2 - (unsigned int)pbVar2[3]) * 7 + (unsigned int)pbVar2[1] * 0x25) -
                    ((unsigned int)pbVar2[2] + (unsigned int)pbVar2[2] * 4)) + 0x10) >> 5;
      if (iVar1 < -0x80) {
        iVar1 = -0x80;
      }
      else if (0x17f < iVar1) {
        iVar1 = 0x17f;
      }
      *(short *)(param_2 + -2) = (short)iVar1;
      iVar1 = (int)(((unsigned int)*pbVar2 * 0x25 - ((unsigned int)pbVar2[3] + (unsigned int)pbVar2[3] * 4)) + 0x10) >> 5;
      if (iVar1 < -0x80) {
        iVar1 = -0x80;
      }
      else if (0x17f < iVar1) {
        iVar1 = 0x17f;
      }
      *(short *)(param_2 + -4) = (short)iVar1;
      pbVar2 = pbVar2 + param_3;
      param_2 = param_4 * 2 + param_2;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}

