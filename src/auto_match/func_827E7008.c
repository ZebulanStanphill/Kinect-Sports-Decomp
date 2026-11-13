extern int fn_82517A50();
extern int fn_827D50C0();
extern int fn_827D9DC0();
extern int fn_827D9DD8();
extern int fn_827E3808();
extern int fn_827E4218();


unsigned __int64 fn_827E7008(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  
  if (param_1[0xe] == 0) {
    uVar4 = fn_827D9DC0(param_1[2]);
    if ((uVar4 & 1) != 0) {
      return 0x3e4;
    }
    uVar4 = fn_827D9DC0(param_1[2]);
    if ((uVar4 & 2) == 0) {
      fn_827D50C0(param_1[5],6);
      uVar4 = 6;
      goto LAB_827e7154;
    }
    fn_827D50C0(param_1[5],0x3e5);
  }
  (**(int (***)())(*param_1 + 0x1c))(param_1);
  lVar5 = fn_827E3808();
  uVar1 = param_1[0xe];
  lVar9 = (unsigned __int64)(unsigned int)param_1[0xd] - (unsigned __int64)uVar1;
  if ((int)lVar5 < (int)((unsigned __int64)(unsigned int)param_1[0xd] - (unsigned __int64)uVar1)) {
    lVar9 = lVar5;
  }
  iVar7 = param_1[0x10];
  iVar2 = param_1[0xc];
  uVar6 = (**(int (***)())(*param_1 + 0x20))(param_1);
  fn_827E4218(uVar6,param_2);
  *(int **)(*param_2 + 0x24) = param_1;
  *(int *)(*param_2 + 0x10) = (int)lVar9;
  *(int *)*param_2 = param_1[2];
  fn_82517A50((unsigned __int64)*param_2 + 4,param_1 + 5);
  *(unsigned int *)(*param_2 + 0xc) = iVar2 + uVar1;
  *(unsigned int *)(*param_2 + 0x14) = iVar7 + uVar1;
  piVar3 = *(int **)(param_1[1] * 0x28 + param_1[8] + 0x74);
  uVar4 = (**(int (***)())(*piVar3 + 0x28))(piVar3,*param_2);
  iVar7 = (int)uVar4;
  uVar8 = lVar9 + (unsigned __int64)(unsigned int)param_1[0xe];
  param_1[0xe] = (int)uVar8;
  if (((iVar7 == 0x3e5) || (iVar7 == 0x3e4)) || (iVar7 == 0)) {
    return (unsigned __int64)((unsigned int)param_1[0xd] >> 0x1f) -
           (((uVar8 & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar8 < (unsigned int)param_1[0xd])) & 0x3e5;
  }
LAB_827e7154:
  fn_827D9DD8(param_1[2]);
  return uVar4;
}

