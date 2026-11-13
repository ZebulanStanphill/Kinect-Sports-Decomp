extern int fn_829ECDB8();
extern int fn_829ECEE8();
extern unsigned int lbl_821AAD20;


int * fn_829ED760(unsigned __int64 param_1,int *param_2,__int64 param_3,unsigned short param_4,unsigned int *param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  __int64 lVar5;
  __int64 lVar6;
  int *piVar7;
  int iVar8;
  
  iVar3 = (int)param_3;
  if (iVar3 == 1) {
    *param_5 = (unsigned int)(lbl_821AAD20 < (float)(__int64)*param_2);
    fn_829ECEE8(param_1,param_2,1);
    iVar3 = (*param_2 * 10000) / 0xffff;
    param_2[1] = iVar3;
    *param_2 = 10000 - iVar3;
  }
  else {
    if (param_4 == 0) {
      param_4 = 1;
    }
    iVar8 = 0;
    iVar1 = *param_2 / (int)(unsigned int)param_4;
    lVar5 = (__int64)iVar1;
    *param_2 = iVar1;
    if (param_5 != (unsigned int *)0x0) {
      *param_5 = 0;
    }
    uVar4 = 1;
    if (1 < iVar3) {
      lVar6 = param_3 + -1;
      piVar7 = param_2;
      do {
        piVar7 = piVar7 + 1;
        iVar1 = *piVar7 / (int)(unsigned int)param_4;
        *piVar7 = iVar1;
        if (((int)lVar5 < iVar1) && (lVar5 = (__int64)iVar1, param_5 != (unsigned int *)0x0)) {
          *param_5 = uVar4;
        }
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (0 < iVar3) {
      piVar7 = param_2 + -1;
      lVar6 = param_3;
      do {
        iVar3 = fn_829ECDB8(param_1,(unsigned __int64)(unsigned int)piVar7[1] - lVar5);
        lVar6 = lVar6 + -1;
        piVar7 = piVar7 + 1;
        *piVar7 = iVar3;
        iVar8 = iVar3 + iVar8;
      } while (lVar6 != 0);
      if (0 < iVar8) {
        piVar7 = param_2 + -1;
        do {
          piVar2 = piVar7 + 1;
          piVar7 = piVar7 + 1;
          *piVar7 = (*piVar2 * 10000) / iVar8;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        return param_2;
      }
    }
    param_2 = (int *)0x0;
  }
  return param_2;
}

