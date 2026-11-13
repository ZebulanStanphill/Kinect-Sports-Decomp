extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D0D770();
extern int fn_82D0FE70();
extern int fn_82D14790();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int iStack_90;
extern unsigned int iStack_a0;
extern unsigned int lbl_821344F4;
extern unsigned int uStack_78;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


unsigned __int64 fn_82D0FF18(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3,int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  char cVar8;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int *puVar11;
  int iVar12;
  double dVar13;
  struct { int first; unsigned int second; } stack_pair_a0;

  unsigned int uStack_98;
  struct { int first; unsigned int second; } stack_pair_90;

  unsigned int uStack_88;
  int iStack_80;
  int iStack_7c;
  unsigned int uStack_78;

  stack_pair_90.first = 0;
  stack_pair_90.second = 0;
  uStack_88 = 0x80000000;
  stack_pair_a0.first = 0;
  stack_pair_a0.second = 0;
  uStack_98 = 0x80000000;
  iStack_80 = 0;
  iStack_7c = 0;
  uStack_78 = 0x80000000;
  uVar3 = fn_82D0D770();
  iVar4 = fn_82CE5410();
  if (stack_pair_90.second == (uStack_88 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar4 + 0x10),&stack_pair_90.first,4);
  }
  iVar4 = 0;
  *(unsigned int *)(stack_pair_90.second * 4 + stack_pair_90.first) = uVar3;
  uVar9 = (unsigned __int64)stack_pair_90.second + 1;
  stack_pair_90.second = (unsigned int)uVar9;
  if (0 < param_3[1]) {
    dVar13 = (double)lbl_821344F4;
    do {
      if (0 < (int)uVar9) {
        iVar12 = 0;
        do {
          iStack_7c = 0;
          cVar8 = fn_82D0FE70(param_1,*(unsigned int *)(iVar12 + stack_pair_90.first),
                                *(unsigned int *)(iVar4 * 4 + *param_3),&iStack_80);
          iVar7 = stack_pair_90.first;
          if (cVar8 == '\0') {
            iVar6 = fn_82CE5410();
            if (stack_pair_a0.second == (uStack_98 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
              fn_82CE63B0(*(unsigned int *)(iVar6 + 0x10),&stack_pair_a0.first,4);
            }
            *(unsigned int *)(stack_pair_a0.second * 4 + stack_pair_a0.first) = *(unsigned int *)(iVar12 + iVar7);
            stack_pair_a0.second = stack_pair_a0.second + 1;
          }
          else {
            puVar11 = *(unsigned int **)(iVar12 + stack_pair_90.first);
            if (puVar11 != (unsigned int *)0x0) {
              (**(int (***)())*puVar11)(puVar11,1);
            }
            iVar7 = 0;
            if (0 < iStack_7c) {
              iVar6 = 0;
              do {
                iVar2 = iStack_80;
                iVar5 = fn_82CE5410();
                if (stack_pair_a0.second == (uStack_98 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(unsigned int *)(iVar5 + 0x10),&stack_pair_a0.first,4);
                }
                *(unsigned int *)(stack_pair_a0.second * 4 + stack_pair_a0.first) = *(unsigned int *)(iVar6 + iVar2);
                stack_pair_a0.second = stack_pair_a0.second + 1;
                iVar2 = *(int *)(iVar6 + iStack_80);
                *(float *)(*(int *)(iVar2 + 8) + 4) = (float)dVar13;
                fn_82D14790(*(unsigned int *)(iVar2 + 8));
                iVar7 = iVar7 + 1;
                iVar6 = iVar6 + 4;
              } while (iVar7 < iStack_7c);
            }
          }
          uVar9 = uVar9 - 1;
          iVar12 = iVar12 + 4;
        } while (uVar9 != 0);
      }
      uVar1 = uStack_88;
      iVar7 = stack_pair_a0.first;
      iVar12 = stack_pair_90.first;
      iVar4 = iVar4 + 1;
      uVar9 = (unsigned __int64)stack_pair_a0.second;
      uStack_88 = uStack_98;
      stack_pair_a0.first = stack_pair_90.first;
      stack_pair_90.first = iVar7;
      stack_pair_90.second = stack_pair_a0.second;
      uStack_98 = uVar1;
      stack_pair_a0.second = 0;
    } while (iVar4 < param_3[1]);
  }
  iVar4 = 0;
  if (0 < (int)uVar9) {
    iVar12 = 0;
    do {
      puVar11 = (unsigned int *)(iVar12 + stack_pair_90.first);
      iVar7 = fn_82CE5410();
      if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar7 + 0x10),param_4,4);
      }
      iVar4 = iVar4 + 1;
      iVar12 = iVar12 + 4;
      *(unsigned int *)(param_4[1] * 4 + *param_4) = *puVar11;
      param_4[1] = param_4[1] + 1;
    } while (iVar4 < (int)stack_pair_90.second);
    uVar10 = 1;
    if (0 < (int)stack_pair_90.second) goto LAB_82d101d4;
  }
  uVar10 = 0;
LAB_82d101d4:
  iVar4 = fn_82CE5410();
  iStack_7c = 0;
  if ((uStack_78 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),iStack_80,uStack_78 & 0x3fffffff,4);
  }
  iStack_80 = 0;
  uStack_78 = 0x80000000;
  iVar4 = fn_82CE5410();
  stack_pair_a0.second = 0;
  if ((uStack_98 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),stack_pair_a0.first,uStack_98 & 0x3fffffff,4);
  }
  stack_pair_a0.first = 0;
  uStack_98 = 0x80000000;
  iVar4 = fn_82CE5410();
  stack_pair_90.second = 0;
  if ((uStack_88 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),stack_pair_90.first,uStack_88 & 0x3fffffff,4);
  }
  return uVar10;
}
