typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D2B688();
extern unsigned int iStack_60;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


void fn_82D20D08(int param_1,int *param_2,int *param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar7;
  __int64 lVar6;
  unsigned int uVar9;
  __int64 lVar8;
  bool bVar10;
  unsigned int uVar12;
  unsigned __int64 uVar11;
  __int64 lVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  __int64 lVar17;
  struct { int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  
  puVar1 = *(unsigned int **)(param_1 + 0x2c);
  stack_pair_60.first = 0;
  uStack_58 = 0x80000000;
  stack_pair_60.second = 0;
  uVar9 = 0;
  do {
    if (puVar1 == (unsigned int *)0x0) {
      if (0 < (int)uVar9) {
        iVar15 = 0;
        iVar3 = 1;
        do {
          uVar2 = *(unsigned int *)(iVar15 + stack_pair_60.first);
          uVar5 = (unsigned __int64)uVar2;
          if (iVar3 < (int)uVar9) {
            lVar13 = 1 - uVar5;
            iVar16 = iVar3;
            iVar4 = iVar15;
            do {
              iVar4 = iVar4 + 4;
              lVar8 = 0;
              uVar9 = *(unsigned int *)(iVar4 + stack_pair_60.first);
              lVar17 = 3;
              lVar6 = uVar5 + 0x14;
              uVar11 = uVar5;
              do {
                puVar7 = (unsigned int *)lVar6;
                if ((*puVar7 & 0xfffffffc) == 0) {
                  uVar12 = (unsigned int)uVar11;
                  if ((*(unsigned int *)(uVar9 + 0x14) & 0xfffffffc) == 0) {
                    if ((puVar7[-3] == *(unsigned int *)(uVar9 + 0xc)) &&
                       (*(int *)((int)(((-(unsigned __int64)(lVar8 != 2) & uVar11 + lVar13) + 2 &
                                       0xffffffff) << 2) + uVar2) == *(int *)(uVar9 + 8))) {
                      bVar10 = true;
                    }
                    else {
                      bVar10 = false;
                    }
                    if (bVar10) {
                      *puVar7 = uVar9;
                      *(unsigned int *)(uVar9 + 0x14) = uVar12;
                    }
                  }
                  if ((*(unsigned int *)(uVar9 + 0x18) & 0xfffffffc) == 0) {
                    if ((puVar7[-3] == *(unsigned int *)(uVar9 + 0x10)) &&
                       (*(int *)((int)(((-(unsigned __int64)(lVar8 != 2) & uVar11 + lVar13) + 2 &
                                       0xffffffff) << 2) + uVar2) == *(int *)(uVar9 + 0xc))) {
                      bVar10 = true;
                    }
                    else {
                      bVar10 = false;
                    }
                    if (bVar10) {
                      *puVar7 = uVar9 + 1;
                      *(unsigned int *)(uVar9 + 0x18) = uVar12;
                    }
                  }
                  if ((*(unsigned int *)(uVar9 + 0x1c) & 0xfffffffc) == 0) {
                    if ((puVar7[-3] == *(unsigned int *)(uVar9 + 8)) &&
                       (*(int *)((int)(((-(unsigned __int64)(lVar8 != 2) & uVar11 + lVar13) + 2 &
                                       0xffffffff) << 2) + uVar2) == *(int *)(uVar9 + 0x10))) {
                      bVar10 = true;
                    }
                    else {
                      bVar10 = false;
                    }
                    if (bVar10) {
                      *puVar7 = uVar9 + 2;
                      *(unsigned int *)(uVar9 + 0x1c) = uVar12;
                    }
                  }
                }
                lVar8 = lVar8 + 1;
                lVar6 = lVar6 + 4;
                uVar11 = uVar11 + 1;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
              iVar16 = iVar16 + 1;
              uVar9 = stack_pair_60.second;
            } while (iVar16 < (int)stack_pair_60.second);
          }
          iVar15 = iVar15 + 4;
          bVar10 = iVar3 < (int)uVar9;
          iVar3 = iVar3 + 1;
        } while (bVar10);
      }
      iVar3 = *param_2;
      piVar14 = (int *)param_2[1];
      if (iVar3 != 0) {
        *(int **)(iVar3 + 4) = piVar14;
      }
      if (piVar14 == (int *)0x0) {
        *(int *)(param_1 + 0x14) = iVar3;
      }
      else {
        *piVar14 = iVar3;
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      fn_82D2B688(param_1 + 8,param_2);
      iVar3 = fn_82CE5410();
      stack_pair_60.second = 0;
      if ((uStack_58 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar3 + 0x10) + 0x10))
                  (*(int **)(iVar3 + 0x10),stack_pair_60.first,uStack_58 & 0x3fffffff,4);
      }
      return;
    }
    piVar14 = puVar1 + 2;
    lVar13 = 3;
    do {
      if ((int *)*piVar14 == param_2) {
        iVar3 = fn_82CE5410();
        if (stack_pair_60.second == (uStack_58 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),&stack_pair_60.first,4);
        }
        *(unsigned int **)(stack_pair_60.second * 4 + stack_pair_60.first) = puVar1;
        uVar9 = stack_pair_60.second + 1;
        *piVar14 = (int)param_3;
        stack_pair_60.second = uVar9;
      }
      else if ((int *)*piVar14 == param_3) {
        iVar3 = fn_82CE5410();
        if (stack_pair_60.second == (uStack_58 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),&stack_pair_60.first,4);
        }
        *(unsigned int **)(stack_pair_60.second * 4 + stack_pair_60.first) = puVar1;
        uVar9 = stack_pair_60.second + 1;
        stack_pair_60.second = uVar9;
      }
      lVar13 = lVar13 + -1;
      piVar14 = piVar14 + 1;
    } while (lVar13 != 0);
    puVar1 = (unsigned int *)*puVar1;
  } while( true );
}

