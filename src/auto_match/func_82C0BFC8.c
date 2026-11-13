extern int fn_8265C940();
extern int fn_8265C9E0();
extern int fn_82C04BC8();
extern int fn_82C04BE8();
extern int fn_82C04E40();


unsigned __int64 fn_82C0BFC8(int *param_1,unsigned __int64 param_2,__int64 param_3,__int64 param_4)

{
  unsigned __int64 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  int iVar7;
  __int64 lVar6;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  
  uVar1 = (**(int (***)())(*param_1 + 0x30))();
  if (-1 < (int)uVar1) {
    uVar5 = (param_3 + param_4) - 1U & ~(param_4 - 1U);
    iVar7 = (int)param_2;
    iVar2 = fn_8265C940((__int64)(int)uVar5 * (__int64)iVar7 + param_4 + -1,0x208c800e);
    param_1[0xb] = iVar2;
    if ((param_2 & 0xffffffff) == 0) {
      piVar3 = (int *)fn_8265C9E0(4);
    }
    else {
      if ((0x4444444 < (param_2 & 0xffffffff)) ||
         (lVar6 = param_2 * 0x3c + 4, 0xfffffffb < (param_2 * 0x3c & 0xffffffff))) {
        lVar6 = -1;
      }
      piVar3 = (int *)fn_82C04BC8(lVar6);
    }
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      uVar8 = param_2;
      piVar3 = piVar4;
      while (uVar8 = uVar8 - 1, -1 < (__int64)uVar8) {
        fn_82C04E40(piVar3);
        piVar3 = piVar3 + 0xf;
      }
    }
    param_1[0xc] = (int)piVar4;
    if (((unsigned __int64)(unsigned int)param_1[0xb] != 0) && (piVar4 != (int *)0x0)) {
      param_1[0xd] = iVar7;
      uVar9 = 0;
      uVar8 = ((unsigned __int64)(unsigned int)param_1[0xb] + param_4) - 1 & ~(param_4 - 1U);
      if ((param_2 & 0xffffffff) == 0) {
        return uVar1;
      }
      lVar6 = 0;
      do {
        fn_82C04BE8(lVar6 + (unsigned __int64)(unsigned int)param_1[0xc],uVar8,uVar5);
        uVar9 = uVar9 + 1;
        uVar8 = uVar8 + uVar5;
        lVar6 = lVar6 + 0x3c;
      } while (uVar9 < (unsigned int)param_1[0xd]);
      return uVar1;
    }
    uVar1 = 0xffffffff8007000e;
  }
  (**(int (***)())(*param_1 + 0x30))(param_1);
  return uVar1;
}

