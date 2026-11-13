extern int fn_8268EA40();
extern int fn_8270AD88();
extern int fn_8270AFD8();


unsigned __int64 fn_8270B4A0(unsigned int *param_1,int param_2)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  int iVar8;
  int *piVar9;
  
  piVar1 = *(int **)(param_2 + 0xc);
  uVar6 = 1;
  if (param_1[2] + (int)piVar1 != *(int *)(param_2 + 0x10)) {
    fn_8270AFD8(param_1 + 0x11);
    uVar2 = param_1[0xb];
    *(unsigned int **)(param_2 + 4) = param_1 + 9;
    *(unsigned int *)(param_2 + 8) = uVar2;
    *(int *)(param_1[0xb] + 4) = param_2;
    param_1[0xb] = param_2;
    piVar1[2] = piVar1[2] + -1;
    uVar6 = fn_8270AD88(param_1,param_2);
    fn_8268EA40(param_1 + 0x13,param_2);
    param_1[0x12] = param_1[0x12] - (int)uVar6;
    uVar6 = (**(int (***)())(*(int *)*param_1 + 8))
                      ((int *)*param_1,
                       ((unsigned __int64)*(unsigned int *)(param_2 + 0x10) -
                       (unsigned __int64)*(unsigned short *)(param_2 + 0x1e)) -
                       (-(unsigned __int64)
                         ((unsigned __int64)*(unsigned int *)(param_2 + 0x10) ==
                         (unsigned __int64)(unsigned int)param_1[2] + (unsigned __int64)*(unsigned int *)(param_2 + 0xc)) &
                       (unsigned __int64)(unsigned int)param_1[2]),uVar6,1 << (*(unsigned short *)(param_2 + 0x1c) & 0x3f))
    ;
  }
  if (piVar1[2] == 1) {
    iVar8 = param_1[2] + (int)piVar1;
    for (iVar3 = param_1[0x11]; (iVar3 != 0 && (*(int *)(iVar3 + 0x10) != param_1[2] + (int)piVar1))
        ; iVar3 = *(int *)((1 - iVar5) * 4 + iVar3)) {
      iVar5 = iVar8 >> 0x1f;
      iVar8 = iVar8 << 1;
    }
    if (*(int *)(iVar3 + 0x18) == 0) {
      fn_8270AFD8(param_1 + 0x11,iVar3);
      uVar2 = param_1[0xb];
      uVar7 = 0;
      *(unsigned int **)(iVar3 + 4) = param_1 + 9;
      *(unsigned int *)(iVar3 + 8) = uVar2;
      *(int *)(param_1[0xb] + 4) = iVar3;
      param_1[0xb] = iVar3;
      if (param_1[3] != 0) {
        piVar9 = piVar1 + 2;
        do {
          uVar7 = uVar7 + 1;
          *(int *)(piVar9[7] + 8) = piVar9[8];
          piVar4 = piVar9 + 7;
          piVar9 = piVar9 + 8;
          *(int *)(*piVar9 + 4) = *piVar4;
        } while (uVar7 < (unsigned int)param_1[3]);
      }
      *(int *)(*piVar1 + 4) = piVar1[1];
      *(int *)piVar1[1] = *piVar1;
      uVar6 = fn_8270AD88(param_1,iVar3);
      fn_8268EA40(param_1 + 0x13,iVar3);
      param_1[0x12] = param_1[0x12] - (int)uVar6;
      uVar6 = (**(int (***)())(*(int *)*param_1 + 8))
                        ((int *)*param_1,
                         ((unsigned __int64)*(unsigned int *)(iVar3 + 0x10) - (unsigned __int64)*(unsigned short *)(iVar3 + 0x1e))
                         - (-(unsigned __int64)
                             ((unsigned __int64)*(unsigned int *)(iVar3 + 0x10) ==
                             (unsigned __int64)*(unsigned int *)(iVar3 + 0xc) + (unsigned __int64)(unsigned int)param_1[2]) &
                           (unsigned __int64)(unsigned int)param_1[2]),uVar6,
                         1 << (*(unsigned short *)(iVar3 + 0x1c) & 0x3f));
    }
  }
  return uVar6;
}

