extern int fn_82A81528();
extern int fn_82A81780();
extern int fn_82F68CC0();


unsigned __int64 fn_82C374B0(int *param_1,__int64 param_2,int *param_3,unsigned __int64 param_4,int param_5)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  __int64 lVar8;
  __int64 lVar9;
  
  iVar2 = *param_1;
  fn_82F68CC0(param_3,param_4,param_5 * 4);
  iVar4 = (int)param_2;
  lVar9 = (__int64)*(short *)(iVar4 + 0xb6) + -1;
  if (-1 < lVar9) {
    lVar8 = lVar9 * 0x38 + param_2 + 200;
    do {
      (*(int (**)())param_1[0x35])(iVar2,lVar8,param_3,param_5);
      lVar9 = lVar9 + -1;
      lVar8 = lVar8 + -0x38;
    } while (-1 < lVar9);
  }
  if (*(int *)(iVar2 + 0x78) == 1) {
    uVar1 = *(unsigned short *)(iVar2 + 0xa8);
    fn_82A81780(param_3,param_5,*(unsigned short *)(iVar2 + 0xae));
    if (*(int *)(iVar2 + 0xa4) == 1) {
      fn_82A81528(iVar2,param_3,param_2 + 0x650,param_3,param_2 + 0x5b0,param_5,uVar1);
    }
  }
  else {
    if (*(int *)(iVar2 + 0xc0) != 1) {
      *param_3 = (*(int *)(iVar2 + 0x278) * *(int *)(iVar4 + 0x1d4) + 0x20 >> 6) + *param_3;
    }
    if (1 < param_5) {
      iVar6 = param_5 + -1;
      piVar7 = param_3;
      do {
        iVar3 = *piVar7;
        piVar5 = piVar7 + 1;
        piVar7 = piVar7 + 1;
        *piVar7 = (iVar3 * *(int *)(iVar2 + 0x278) + 0x20 >> 6) + *piVar5;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(int *)(iVar4 + 0x1d4) = param_3[param_5 + -1];
  }
  lVar9 = (__int64)(param_5 >> 1);
  if (0 < lVar9) {
    piVar7 = param_3 + -1;
    param_3 = param_3 + param_5;
    do {
      iVar2 = param_3[-1];
      param_3 = param_3 + -1;
      *param_3 = piVar7[1];
      piVar7 = piVar7 + 1;
      *piVar7 = iVar2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return 1;
}

