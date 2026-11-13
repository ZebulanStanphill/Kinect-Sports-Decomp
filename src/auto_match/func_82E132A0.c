extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82CFBBF0();
extern unsigned int iStack_80;
extern unsigned int iStack_90;
extern unsigned int iStack_a0;
extern unsigned int iStack_b0;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;


unsigned __int64 fn_82E132A0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  int iVar10;
  __int64 lVar11;
  int iVar12;
  struct { int first; unsigned int second; } stack_pair_b0;

  unsigned int uStack_a8;
  struct { int first; unsigned int second; } stack_pair_a0;

  unsigned int uStack_98;
  int iStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  int iStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;

  iVar3 = fn_82CFBBF0(param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  uVar9 = *(unsigned int *)(param_1 + 0xc);
  iStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0x80000000;
  iVar3 = fn_82CE5410();
  if ((int)(uStack_78 & 0x3fffffff) < (int)uVar9) {
    uVar8 = ((unsigned __int64)uStack_78 & 0x3fffffff) << 1;
    if ((int)uVar8 <= (int)uVar9) {
      uVar8 = (unsigned __int64)uVar9;
    }
    fn_82CE6310(*(unsigned int *)(iVar3 + 0xc),&iStack_80,uVar8,4);
  }
  uVar8 = (unsigned __int64)uVar9 - (unsigned __int64)uStack_7c;
  if (0 < (__int64)uVar8) {
    puVar7 = (unsigned int *)(uStack_7c * 4 + iStack_80 + -4);
    uVar1 = uVar8 & 0xffffffff;
    while (uVar1 != 0) {
      puVar7 = puVar7 + 1;
      *puVar7 = 0xffffffff;
      uVar8 = uVar8 - 1;
      uVar1 = uVar8;
    }
  }
  iVar3 = 0;
  stack_pair_a0.first = 0;
  stack_pair_a0.second = 0;
  uStack_98 = 0x80000000;
  stack_pair_b0.first = 0;
  stack_pair_b0.second = 0;
  uStack_a8 = 0x80000000;
  uStack_7c = uVar9;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar10 = 0;
    do {
      iVar4 = fn_82CFBBF0(param_3,*(unsigned int *)(*(int *)(iVar10 + *(int *)(param_1 + 8)) + 4));
      if (iVar4 == 0) {
        iVar4 = fn_82CFBBF0(param_2,**(unsigned int **)(iVar10 + *(int *)(param_1 + 8)));
        if (iVar4 == 0) {
          iVar10 = *(int *)(param_1 + 8);
          iVar4 = fn_82CE5410();
          if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(unsigned int *)(iVar4 + 0xc),param_4,4);
          }
          *(unsigned int *)(param_4[1] * 4 + *param_4) = *(unsigned int *)(iVar3 * 4 + iVar10);
          param_4[1] = param_4[1] + 1;
          iVar3 = fn_82CE5410();
          stack_pair_b0.second = 0;
          if ((uStack_a8 & 0x80000000) == 0) {
            (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
                      (*(int **)(iVar3 + 0xc),stack_pair_b0.first,uStack_a8 & 0x3fffffff,4);
          }
          stack_pair_b0.first = 0;
          uStack_a8 = 0x80000000;
          iVar3 = fn_82CE5410();
          stack_pair_a0.second = 0;
          if ((uStack_98 & 0x80000000) == 0) {
            (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
                      (*(int **)(iVar3 + 0xc),stack_pair_a0.first,uStack_98 & 0x3fffffff,4);
          }
          stack_pair_a0.first = 0;
          uStack_98 = 0x80000000;
          iVar3 = fn_82CE5410();
          uStack_7c = 0;
          if ((uStack_78 & 0x80000000) != 0) {
            return 0;
          }
          (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
                    (*(int **)(iVar3 + 0xc),iStack_80,uStack_78 & 0x3fffffff,4);
          return 0;
        }
        iVar4 = fn_82CE5410();
        if (stack_pair_b0.second == (uStack_a8 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar4 + 0xc),&stack_pair_b0.first,4);
        }
        *(int *)(stack_pair_b0.second * 4 + stack_pair_b0.first) = iVar3;
        stack_pair_b0.second = stack_pair_b0.second + 1;
      }
      else {
        iVar4 = fn_82CE5410();
        if (stack_pair_a0.second == (uStack_98 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar4 + 0xc),&stack_pair_a0.first,4);
        }
        *(int *)(stack_pair_a0.second * 4 + stack_pair_a0.first) = iVar3;
        stack_pair_a0.second = stack_pair_a0.second + 1;
      }
      iVar3 = iVar3 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar3 < *(int *)(param_1 + 0xc));
    while (stack_pair_b0.second != 0) {
      iStack_90 = 0;
      uVar8 = (unsigned __int64)stack_pair_a0.second - 1;
      uStack_8c = 0;
      uStack_88 = 0x80000000;
      uVar9 = stack_pair_b0.second;
      if (-1 < (__int64)uVar8) {
        lVar11 = (uVar8 & 0x3fffffff) << 2;
        do {
          iVar10 = 0;
          iVar3 = *(int *)((int)lVar11 + stack_pair_a0.first);
          if (0 < (int)uVar9) {
            iVar4 = iVar3 * 4;
            iVar12 = 0;
            do {
              iVar6 = *(int *)(iVar12 + stack_pair_b0.first);
              iVar5 = fn_82CFBBF0(*(unsigned int *)(*(int *)(iVar4 + *(int *)(param_1 + 8)) + 4),
                                   **(unsigned int **)(iVar6 * 4 + *(int *)(param_1 + 8)));
              if (iVar5 == 0) {
                *(int *)(iVar4 + iStack_80) = iVar6;
                iVar6 = fn_82CFBBF0(**(unsigned int **)(*(int *)(param_1 + 8) + iVar4),param_2);
                if (iVar6 == 0) {
                  for (; iVar3 != -1; iVar3 = *(int *)(iVar3 * 4 + iStack_80)) {
                    iVar10 = *(int *)(param_1 + 8);
                    iVar4 = fn_82CE5410();
                    if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                      fn_82CE63B0(*(unsigned int *)(iVar4 + 0xc),param_4,4);
                    }
                    *(unsigned int *)(param_4[1] * 4 + *param_4) = *(unsigned int *)(iVar10 + iVar3 * 4)
                    ;
                    param_4[1] = param_4[1] + 1;
                  }
                  iVar3 = fn_82CE5410();
                  uStack_8c = 0;
                  if ((uStack_88 & 0x80000000) == 0) {
                    (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
                              (*(int **)(iVar3 + 0xc),iStack_90,uStack_88 & 0x3fffffff,4);
                  }
                  iStack_90 = 0;
                  uStack_88 = 0x80000000;
                  iVar3 = fn_82CE5410();
                  stack_pair_b0.second = 0;
                  if ((uStack_a8 & 0x80000000) == 0) {
                    (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
                              (*(int **)(iVar3 + 0xc),stack_pair_b0.first,uStack_a8 & 0x3fffffff,4);
                  }
                  stack_pair_b0.first = 0;
                  uStack_a8 = 0x80000000;
                  iVar3 = fn_82CE5410();
                  stack_pair_a0.second = 0;
                  if ((uStack_98 & 0x80000000) == 0) {
                    (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
                              (*(int **)(iVar3 + 0xc),stack_pair_a0.first,uStack_98 & 0x3fffffff,4);
                  }
                  stack_pair_a0.first = 0;
                  uStack_98 = 0x80000000;
                  iVar3 = fn_82CE5410();
                  uStack_7c = 0;
                  if ((uStack_78 & 0x80000000) != 0) {
                    return 0;
                  }
                  (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
                            (*(int **)(iVar3 + 0xc),iStack_80,uStack_78 & 0x3fffffff,4);
                  return 0;
                }
                iVar6 = fn_82CE5410();
                if (uStack_8c == (uStack_88 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(unsigned int *)(iVar6 + 0xc),&iStack_90,4);
                }
                *(int *)(uStack_8c * 4 + iStack_90) = iVar3;
                uStack_8c = uStack_8c + 1;
                stack_pair_a0.second = stack_pair_a0.second - 1;
                if (stack_pair_a0.second != (unsigned int)uVar8) {
                  *(unsigned int *)((int)lVar11 + stack_pair_a0.first) =
                       *(unsigned int *)(stack_pair_a0.second * 4 + stack_pair_a0.first);
                }
              }
              iVar10 = iVar10 + 1;
              iVar12 = iVar12 + 4;
              uVar9 = stack_pair_b0.second;
            } while (iVar10 < (int)stack_pair_b0.second);
          }
          uVar8 = uVar8 - 1;
          lVar11 = lVar11 + -4;
        } while (-1 < (__int64)uVar8);
      }
      iVar3 = iStack_90;
      uVar2 = uStack_a8;
      iStack_90 = stack_pair_b0.first;
      stack_pair_b0.first = iVar3;
      stack_pair_b0.second = uStack_8c;
      uStack_a8 = uStack_88;
      uStack_88 = uVar2;
      uStack_8c = uVar9;
      iVar3 = fn_82CE5410();
      uStack_8c = 0;
      if ((uStack_88 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
                  (*(int **)(iVar3 + 0xc),iStack_90,uStack_88 & 0x3fffffff,4);
      }
      iStack_90 = 0;
      uStack_88 = 0x80000000;
    }
  }
  iVar3 = fn_82CE5410();
  stack_pair_b0.second = 0;
  if ((uStack_a8 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
              (*(int **)(iVar3 + 0xc),stack_pair_b0.first,uStack_a8 & 0x3fffffff,4);
  }
  stack_pair_b0.first = 0;
  uStack_a8 = 0x80000000;
  iVar3 = fn_82CE5410();
  stack_pair_a0.second = 0;
  if ((uStack_98 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
              (*(int **)(iVar3 + 0xc),stack_pair_a0.first,uStack_98 & 0x3fffffff,4);
  }
  stack_pair_a0.first = 0;
  uStack_98 = 0x80000000;
  iVar3 = fn_82CE5410();
  uStack_7c = 0;
  if ((uStack_78 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
              (*(int **)(iVar3 + 0xc),iStack_80,uStack_78 & 0x3fffffff,4);
  }
  return 1;
}
