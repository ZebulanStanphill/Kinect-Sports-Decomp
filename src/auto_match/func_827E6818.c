extern int fn_82517978();
extern int fn_827D5070();
extern int fn_827DA588();
extern int fn_827E4020();
extern int fn_82F68CC0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_827E6818(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar5;
  int *piVar6;
  __int64 lVar4;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  
  uVar3 = (**(int (***)())(**(int **)(param_1[1] * 0x28 + param_1[8] + 0x74) + 0x24))();
  iVar5 = (int)uVar3;
  if (iVar5 == 0x3e5) {
    return uVar3;
  }
  if (iVar5 == 0x3e4) {
    return uVar3;
  }
  if (iVar5 == 0) {
    iVar5 = fn_827DA588(param_1[8],param_1[0x15]);
    uVar1 = param_1[0x13];
    if (iVar5 == 0) {
      if (uVar1 == param_2[3] - param_1[0xe]) {
        lVar9 = ((unsigned __int64)(unsigned int)param_1[0xe] - (unsigned __int64)(unsigned int)param_1[0xc]) + (unsigned __int64)uVar1;
        uVar8 = (unsigned __int64)(unsigned int)param_2[5];
        uVar7 = (unsigned __int64)(unsigned int)param_2[4];
        if (uVar1 == 0) {
          lVar9 = 0;
          uVar8 = ((unsigned __int64)(unsigned int)param_1[0xf] - (unsigned __int64)(unsigned int)param_1[0xd]) + uVar8;
          uVar7 = ((unsigned __int64)(unsigned int)param_1[0xd] - (unsigned __int64)(unsigned int)param_1[0xf]) + uVar7;
        }
        lVar4 = fn_827D5070(param_1[5]);
        fn_82F68CC0(lVar4 + lVar9,uVar8,uVar7);
        uVar2 = param_2[5];
        uVar3 = (**(int (***)())(*param_1 + 0x1c))(param_1);
        fn_827E4020(uVar3,uVar2);
        param_2[5] = 0;
        uVar3 = 0;
        param_1[0x13] = param_1[0x13] + param_2[4];
        iVar5 = param_2[6] + param_1[0x14];
        goto LAB_827e6884;
      }
    }
    else if (uVar1 == param_2[3] - param_1[0xe]) {
      uVar8 = (unsigned __int64)(unsigned int)param_2[5];
      uVar7 = (unsigned __int64)(unsigned int)param_2[4];
      if (uVar1 == 0) {
        piVar6 = (int *)fn_827DA588(param_1[8],param_1[0x15]);
        iVar5 = (**(int (***)())(*piVar6 + 0x1c))(piVar6,param_1[4]);
        param_1[0x16] = iVar5;
        piVar6 = (int *)fn_827DA588(param_1[8],param_1[0x15]);
        stack_pair_50.first = 0;
        stack_pair_50.second = 0;
        fn_82517978(&stack_pair_50.first,param_1[5],param_1[6],0);
        (**(int (***)())(*piVar6 + 4))
                  (piVar6,param_1[0x16],param_1[2],param_1[0xd],param_1[4],&stack_pair_50.first);
        uVar8 = ((unsigned __int64)(unsigned int)param_1[0xf] - (unsigned __int64)(unsigned int)param_1[0xd]) +
                (unsigned __int64)(unsigned int)param_2[5];
        uVar7 = ((unsigned __int64)(unsigned int)param_1[0xd] - (unsigned __int64)(unsigned int)param_1[0xf]) +
                (unsigned __int64)(unsigned int)param_2[4];
      }
      piVar6 = (int *)fn_827DA588(param_1[8],param_1[0x15]);
      stack_pair_50.first = 0;
      stack_pair_50.second = 0;
      fn_82517978(&stack_pair_50.first,param_2[1],param_2[2],0);
      (**(int (***)())(*piVar6 + 8))(piVar6,param_1[0x16],uVar8,uVar7,*param_2,&stack_pair_50.first);
      uVar2 = param_2[5];
      uVar3 = (**(int (***)())(*param_1 + 0x1c))(param_1);
      fn_827E4020(uVar3,uVar2);
      param_2[5] = 0;
      param_1[0x13] = param_1[0x13] + param_2[4];
      param_1[0x14] = param_2[6] + param_1[0x14];
      if (param_1[0xf] <= param_1[0x13]) {
        piVar6 = (int *)fn_827DA588(param_1[8],param_1[0x15]);
        stack_pair_50.first = 0;
        stack_pair_50.second = 0;
        fn_82517978(&stack_pair_50.first,param_2[1],param_2[2],0);
        uVar3 = (**(int (***)())(*piVar6 + 0xc))(piVar6,param_1[0x16],*param_2,&stack_pair_50.first);
        piVar6 = (int *)fn_827DA588(param_1[8],param_1[0x15]);
        (**(int (***)())(*piVar6 + 0x20))(piVar6,param_1[0x16]);
        param_1[0x16] = 0;
        return uVar3;
      }
      return 0;
    }
    uVar3 = 0x3e5;
  }
  else {
    param_1[0x13] = param_2[4] + param_1[0x13];
    iVar5 = param_2[6] + param_1[0x14];
LAB_827e6884:
    param_1[0x14] = iVar5;
  }
  return uVar3;
}

