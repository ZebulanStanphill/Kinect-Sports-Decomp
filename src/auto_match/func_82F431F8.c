void fn_82F431F8(int param_1,unsigned char *param_2,unsigned int *param_3,int param_4)

{
  unsigned char *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned int uVar8;
  
  iVar7 = 4;
  *param_3 = (int)((5 - (unsigned int)param_2[2]) * 3 + (unsigned int)*param_2 * 0x22 + (unsigned int)param_2[4]) >> 5;
  param_3[1] = (int)((unsigned int)*param_2 * 0x19 + ((unsigned int)param_2[2] * 8 - (unsigned int)param_2[2]) + 0xf) >> 5;
  param_3[2] = (int)((((unsigned int)*param_2 * 2 - (unsigned int)param_2[4]) + 5) * 3 + (unsigned int)param_2[6] +
                    (unsigned int)param_2[2] * 0x1c) >> 5;
  param_3[3] = (int)((((unsigned int)param_2[4] * 3 + (unsigned int)param_2[2] * 0xe) - (unsigned int)*param_2) * 2 + 0xf)
               >> 5;
  if (4 < param_4 + -4) {
    lVar5 = (unsigned __int64)(param_4 - 9U >> 1) + 1;
    puVar6 = param_3 + 3;
    do {
      puVar6[1] = (int)((((unsigned int)param_2[iVar7 + -2] * 2 - (unsigned int)param_2[iVar7 + 2]) + 5) * 3 +
                        (unsigned int)param_2[iVar7 + 4] + (unsigned int)param_2[iVar7] * 0x1c) >> 5;
      iVar3 = iVar7 + -2;
      pbVar1 = param_2 + iVar7;
      iVar4 = iVar7 + -4;
      iVar2 = iVar7 + 2;
      iVar7 = iVar7 + 2;
      puVar6 = puVar6 + 2;
      *puVar6 = (int)((((unsigned int)param_2[iVar2] * 2 - (unsigned int)param_2[iVar3]) + 5) * 3 +
                      (unsigned int)param_2[iVar4] + (unsigned int)*pbVar1 * 0x1c) >> 5;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  iVar7 = 0;
  param_3[param_4 + -4] =
       (int)((((unsigned int)param_2[param_4 + -6] * 3 + (unsigned int)param_2[param_4 + -4] * 0xe) -
             (unsigned int)param_2[param_4 + -2]) * 2 + 0xf) >> 5;
  param_3[param_4 + -3] =
       (int)((((unsigned int)param_2[param_4 + -2] * 2 - (unsigned int)param_2[param_4 + -6]) + 5) * 3 +
             (unsigned int)param_2[param_4 + -8] + (unsigned int)param_2[param_4 + -4] * 0x1c) >> 5;
  param_3[param_4 + -2] =
       (int)(((unsigned int)param_2[param_4 + -4] * 8 - (unsigned int)param_2[param_4 + -4]) +
             (unsigned int)param_2[param_4 + -2] * 0x19 + 0xf) >> 5;
  param_3[param_4 + -1] =
       (int)((5 - (unsigned int)param_2[param_4 + -4]) * 3 + (unsigned int)param_2[param_4 + -2] * 0x22 +
            (unsigned int)param_2[param_4 + -6]) >> 5;
  if (0 < param_4) {
    do {
      uVar8 = *param_3;
      if (0xff < uVar8) {
        uVar8 = 0xffffffffU - ((int)uVar8 >> 0x1f) & 0xff;
      }
      *(char *)(iVar7 + param_1) = (char)uVar8;
      param_3 = param_3 + 1;
      iVar7 = iVar7 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

