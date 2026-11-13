extern int fn_82F63BA0();
extern int fn_82F68240();


unsigned int fn_82F69960(short *param_1,short *param_2,unsigned int *param_3)

{
  short sVar1;
  unsigned int *puVar2;
  short *psVar3;
  unsigned int uVar4;
  short *psVar5;
  short sVar6;
  
  if (((param_3 == (unsigned int *)0x0) || (param_2 == (short *)0x0)) ||
     ((param_1 == (short *)0x0 && (param_1 = (short *)*param_3, param_1 == (short *)0x0)))) {
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    uVar4 = 0;
  }
  else {
    sVar6 = *param_1;
    if (sVar6 != 0) {
      sVar1 = *param_2;
      psVar3 = param_2;
      do {
        while ((sVar1 != 0 && (sVar1 != sVar6))) {
          sVar1 = psVar3[1];
          psVar3 = psVar3 + 1;
        }
        if (*psVar3 == 0) break;
        param_1 = param_1 + 1;
        sVar6 = *param_1;
        sVar1 = *param_2;
        psVar3 = param_2;
      } while (sVar6 != 0);
    }
    psVar3 = param_1;
    if (*param_1 != 0) {
      do {
        psVar5 = param_2;
        if (*param_2 != 0) {
          sVar6 = *param_2;
          do {
            if (sVar6 == *psVar3) break;
            psVar5 = psVar5 + 1;
            sVar6 = *psVar5;
          } while (sVar6 != 0);
        }
        if (*psVar5 != 0) {
          *psVar3 = 0;
          psVar3 = psVar3 + 1;
          break;
        }
        psVar3 = psVar3 + 1;
      } while (*psVar3 != 0);
    }
    *param_3 = psVar3;
    uVar4 = -(unsigned int)(psVar3 != param_1) & (unsigned int)param_1;
  }
  return uVar4;
}

