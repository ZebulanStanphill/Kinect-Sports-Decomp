extern int fn_82F63BA0();
extern int fn_82F68240();


unsigned int fn_82F64840(short *param_1,unsigned __int64 param_2,short *param_3,unsigned __int64 param_4)

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
      if (iVar3 != 0) goto LAB_82f64894;
    }
    else {
LAB_82f6488c:
      if (iVar3 == 0) goto LAB_82f64894;
      if ((param_4 & 0xffffffff) == 0) {
        *param_1 = 0;
      }
      else {
        if (param_3 == (short *)0x0) {
          *param_1 = 0;
          puVar2 = (unsigned int *)fn_82F68240();
          uVar6 = 0x16;
LAB_82f648d8:
          *puVar2 = uVar6;
          fn_82F63BA0();
          return uVar6;
        }
        if ((int)param_4 == -1) {
          iVar4 = (int)param_1 - (int)param_3;
          do {
            sVar1 = *param_3;
            *(short *)(iVar4 + (int)param_3) = sVar1;
            param_3 = param_3 + 1;
            if (sVar1 == 0) break;
            param_2 = param_2 - 1;
          } while (param_2 != 0);
        }
        else {
          psVar5 = param_1;
          do {
            sVar1 = *(short *)(((int)param_3 - (int)param_1) + (int)psVar5);
            *psVar5 = sVar1;
            psVar5 = psVar5 + 1;
            if ((sVar1 == 0) || (param_2 = param_2 - 1, param_2 == 0)) break;
            param_4 = param_4 - 1;
          } while (param_4 != 0);
          if ((param_4 & 0xffffffff) == 0) {
            *psVar5 = 0;
          }
        }
        if ((param_2 & 0xffffffff) == 0) {
          if ((int)param_4 == -1) {
            param_1[iVar3 + -1] = 0;
            return 0x50;
          }
          *param_1 = 0;
          puVar2 = (unsigned int *)fn_82F68240();
          uVar6 = 0x22;
          goto LAB_82f648d8;
        }
      }
    }
    uVar6 = 0;
  }
  else {
    if (param_1 != (short *)0x0) goto LAB_82f6488c;
LAB_82f64894:
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    uVar6 = 0x16;
  }
  return uVar6;
}

