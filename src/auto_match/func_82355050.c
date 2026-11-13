extern unsigned int *auStack_b0;
extern unsigned int fStack_68;
extern int fn_8225F160();
extern int fn_822ABA88();
extern int fn_82356BF0();
extern int fn_82357010();
extern int fn_8265C9E0();
extern int fn_82F64988();
extern unsigned int iStack_c0;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_70;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;


void fn_82355050(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  double dVar12;
  struct { int first; unsigned int second; } stack_pair_c0;

  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned char auStack_b0 [64];
  unsigned int uStack_70;
  float fStack_68;
  
  puVar3 = (unsigned int *)fn_8265C9E0(0x10);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  *(unsigned int **)(param_1 + 0x298) = puVar3;
  lVar6 = 0;
  iVar4 = fn_8225F160();
  piVar1 = *(int **)(param_1 + 0x1c);
  if (*(int *)(iVar4 + 8) == 2) {
    uVar9 = 0;
    piVar1 = *(int **)*piVar1;
    iVar4 = *piVar1;
    if (piVar1[1] - iVar4 >> 2 != 0) {
      iVar7 = 0;
      dVar12 = (double)ltcg_pool_0_0f;
      do {
        uVar11 = 0;
        if (*(int *)(*(int *)(iVar7 + iVar4) + 8) != 0) {
          do {
            iVar4 = fn_822ABA88(*(unsigned int *)(iVar7 + iVar4),uVar11);
            if (*(int *)(iVar4 + 0x70) != 0) {
              uStack_70 = 0;
              fn_82F64988(auStack_b0,0x20,iVar4 + 0x30);
              uStack_b4 = *(unsigned int *)(iVar4 + 0x74);
              fStack_68 = (float)dVar12;
              uStack_b8 = (unsigned int)uVar11;
              stack_pair_c0.first = 0;
              stack_pair_c0.second = (unsigned int)uVar9;
              fn_82356BF0(piVar1,lVar6,uVar9,&stack_pair_c0.first);
              *(unsigned int *)(param_1 + 0x29c) = 2;
              fn_82357010(*(unsigned int *)(param_1 + 0x298),&stack_pair_c0.first);
              lVar6 = lVar6 + 1;
            }
            iVar4 = *piVar1;
            uVar11 = uVar11 + 1;
          } while ((uVar11 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(*(int *)(iVar7 + iVar4) + 8));
        }
        uVar9 = uVar9 + 1;
        iVar7 = iVar7 + 4;
      } while ((uVar9 & 0xffffffff) < (unsigned __int64)(unsigned int)(piVar1[1] - iVar4 >> 2));
    }
  }
  else {
    iVar4 = 0;
    if ((piVar1[1] - *piVar1 & 0xfffffffcU) != 0) {
      iVar7 = 0;
      dVar12 = (double)ltcg_pool_0_0f;
      do {
        uVar10 = 0;
        piVar1 = *(int **)(**(int **)(param_1 + 0x1c) + iVar7);
        iVar5 = *piVar1;
        if (piVar1[1] - iVar5 >> 2 != 0) {
          iVar8 = 0;
          do {
            iVar2 = *(int *)(iVar8 + iVar5);
            uVar9 = 0;
            if (*(int *)(iVar2 + 8) != 0) {
              do {
                iVar5 = fn_822ABA88(iVar2,uVar9);
                if (*(int *)(iVar5 + 0x70) != 0) {
                  fn_82F64988(auStack_b0,0x20,iVar5 + 0x30);
                  uStack_b4 = *(unsigned int *)(iVar5 + 0x74);
                  fStack_68 = (float)dVar12;
                  uStack_b8 = (unsigned int)uVar9;
                  uStack_70 = 0;
                  stack_pair_c0.first = iVar4;
                  stack_pair_c0.second = uVar10;
                  fn_82356BF0(piVar1,lVar6,0,&stack_pair_c0.first);
                  *(unsigned int *)(param_1 + 0x29c) = 2;
                  fn_82357010(*(unsigned int *)(param_1 + 0x298),&stack_pair_c0.first);
                  lVar6 = lVar6 + 1;
                }
                iVar5 = *piVar1;
                uVar9 = uVar9 + 1;
                iVar2 = *(int *)(iVar8 + iVar5);
              } while ((uVar9 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar2 + 8));
            }
            uVar10 = uVar10 + 1;
            iVar8 = iVar8 + 4;
          } while (uVar10 < (unsigned int)(piVar1[1] - iVar5 >> 2));
        }
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar4 < (*(int **)(param_1 + 0x1c))[1] - **(int **)(param_1 + 0x1c) >> 2);
    }
  }
  return;
}

