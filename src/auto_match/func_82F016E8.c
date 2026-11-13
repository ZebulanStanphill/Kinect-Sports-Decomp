void fn_82F016E8(int param_1,unsigned char *param_2,unsigned char *param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  
  iVar5 = 3;
  *param_3 = *param_2;
  param_3[1] = param_2[1];
  param_3[2] = param_2[2];
  if (3 < param_4 + -3) {
    iVar3 = param_4 + -6;
    do {
      uVar4 = (int)(((unsigned int)(unsigned char)param_2[iVar5 + -3] + (unsigned int)(unsigned char)param_2[iVar5 + 3]) *
                    *(int *)(param_1 + 0x5318) +
                    ((unsigned int)(unsigned char)param_2[iVar5 + -2] + (unsigned int)(unsigned char)param_2[iVar5 + 2]) *
                    *(int *)(param_1 + 0x5314) +
                    ((unsigned int)(unsigned char)param_2[iVar5 + -1] + (unsigned int)(unsigned char)param_2[iVar5 + 1]) *
                    *(int *)(param_1 + 0x5310) +
                   (unsigned int)(unsigned char)param_2[iVar5] * *(int *)(param_1 + 0x530c)) >> 7;
      uVar2 = (unsigned char)param_2[iVar5] - uVar4;
      uVar1 = (int)uVar2 >> 0x1f;
      if ((int)((uVar2 ^ uVar1) - uVar1) < 0x10) {
        if ((int)uVar4 < 0) {
          uVar4 = 0;
        }
        else if (0xff < (int)uVar4) {
          uVar4 = 0xff;
        }
      }
      else {
        uVar4 = (unsigned int)(unsigned char)param_2[iVar5];
      }
      (param_2 + iVar5)[(int)param_3 - (int)param_2] = (unsigned char)uVar4;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_3[param_4 + -1] = param_2[param_4 + -1];
  param_3[param_4 + -2] = param_2[param_4 + -2];
  param_3[param_4 + -3] = param_2[param_4 + -3];
  return;
}

