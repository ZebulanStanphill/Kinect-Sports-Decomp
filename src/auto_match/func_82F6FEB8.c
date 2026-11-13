extern int fn_82F63BA0();
extern int fn_82F68240();


unsigned int fn_82F6FEB8(short *param_1,unsigned __int64 param_2,short *param_3,unsigned __int64 param_4)

{
  short sVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  unsigned int uVar6;
  
  iVar3 = (int)param_2;
  if ((param_4 & 0xffffffff) == 0) {
    if (param_1 == (short *)0x0) {
      if (iVar3 == 0) {
        return 0;
      }
      goto code_r0x82f6ff08;
    }
  }
  else if (param_1 == (short *)0x0) goto code_r0x82f6ff08;
  if (iVar3 == 0) {
code_r0x82f6ff08:
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    return 0x16;
  }
  psVar5 = param_1;
  if (((param_4 & 0xffffffff) != 0) && (param_3 == (short *)0x0)) {
    *param_1 = 0;
    goto code_r0x82f6ff08;
  }
  do {
    if (*psVar5 == 0) break;
    param_2 = param_2 - 1;
    psVar5 = psVar5 + 1;
  } while (param_2 != 0);
  if ((param_2 & 0xffffffff) == 0) {
    *param_1 = 0;
    puVar2 = (unsigned int *)fn_82F68240();
    uVar6 = 0x16;
    goto code_r0x82f6ff74;
  }
  if ((int)param_4 == -1) {
    iVar4 = (int)psVar5 - (int)param_3;
    do {
      sVar1 = *param_3;
      *(short *)(iVar4 + (int)param_3) = sVar1;
      param_3 = param_3 + 1;
      if (sVar1 == 0) break;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  else {
    if ((param_4 & 0xffffffff) != 0) {
      iVar4 = (int)param_3 - (int)psVar5;
      do {
        sVar1 = *(short *)(iVar4 + (int)psVar5);
        *psVar5 = sVar1;
        psVar5 = psVar5 + 1;
        if ((sVar1 == 0) || (param_2 = param_2 - 1, param_2 == 0)) break;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
      if ((param_4 & 0xffffffff) != 0) goto code_r0x82f6fff0;
    }
    *psVar5 = 0;
  }
code_r0x82f6fff0:
  if ((param_2 & 0xffffffff) != 0) {
    return 0;
  }
  if ((int)param_4 == -1) {
    param_1[iVar3 + -1] = 0;
    return 0x50;
  }
  *param_1 = 0;
  puVar2 = (unsigned int *)fn_82F68240();
  uVar6 = 0x22;
code_r0x82f6ff74:
  *puVar2 = uVar6;
  fn_82F63BA0();
  return uVar6;
}

