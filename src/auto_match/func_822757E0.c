#define true 1
extern int fn_82275530();
extern int fn_82275C58();
extern int fn_82275D00();
extern int fn_82275DB0();
extern int fn_8265CA20();
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_822757E0(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,int param_6)

{
  unsigned int *puVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 *puVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  int iVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int *puVar12;
  unsigned __int64 uVar13;
  unsigned int *puVar14;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  int aiStack_80 [32];
  unsigned int *puVar15;
  
  while( true ) {
    iVar9 = (int)param_4;
    iVar4 = (int)param_5;
    puVar2 = (unsigned __int64 *)param_2;
    puVar3 = (unsigned __int64 *)param_1;
    if (iVar9 + iVar4 == 2) {
      if (*(int *)((int)puVar3 + 4) <= *(int *)((int)puVar2 + 4)) {
        return;
      }
      uVar11 = *puVar3;
      *(unsigned int *)puVar3 = *(unsigned int *)puVar2;
      *(unsigned int *)((int)puVar3 + 4) = *(unsigned int *)((int)puVar2 + 4);
      *puVar2 = uVar11;
      return;
    }
    if ((iVar9 <= iVar4) && (iVar5 = fn_82275530(param_6), iVar9 <= iVar5)) break;
    iVar5 = fn_82275530(param_6);
    if (iVar4 <= iVar5) {
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      (*(unsigned int **)(param_6 + 0x10))[1] = **(unsigned int **)(param_6 + 0x10);
      uStack_90 = *(unsigned int *)(param_6 + 0x10);
      fn_82275C58(aiStack_80,param_2,param_3,&uStack_a0);
      if (aiStack_80[0] != 0) {
        fn_8265CA20();
      }
      puVar1 = (unsigned int *)**(int **)(param_6 + 0x10);
      puVar12 = (unsigned int *)(*(int **)(param_6 + 0x10))[1];
      puVar14 = puVar12;
      iVar9 = param_3;
      if ((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
        do {
          iVar4 = (int)param_2;
          if (puVar1 == puVar14) {
            if ((param_1 & 0xffffffff) == (param_2 & 0xffffffff)) {
              return;
            }
            do {
              uVar16 = param_2 - 8;
              puVar1 = (unsigned int *)uVar16;
              *(unsigned int *)((iVar9 - iVar4) + (int)puVar1) = *puVar1;
              *(unsigned int *)((int)puVar1 + (iVar9 - iVar4) + 4) =
                   *(unsigned int *)((int)param_2 + -4);
              param_2 = uVar16;
            } while ((uVar16 & 0xffffffff) != (param_1 & 0xffffffff));
            return;
          }
          puVar12 = puVar14 + -2;
          if ((int)puVar14[-1] < *(int *)(iVar4 + -4)) {
            *(unsigned int *)(iVar9 + -8) = *(unsigned int *)(param_2 - 8);
            uVar6 = *(unsigned int *)(iVar4 + -4);
            param_2 = param_2 - 8;
            puVar12 = puVar14;
          }
          else {
            *(unsigned int *)(iVar9 + -8) = *puVar12;
            uVar6 = puVar14[-1];
          }
          param_3 = iVar9 + -8;
          *(unsigned int *)(iVar9 + -4) = uVar6;
          puVar14 = puVar12;
          iVar9 = param_3;
        } while ((param_1 & 0xffffffff) != (param_2 & 0xffffffff));
      }
      if (puVar1 != puVar12) {
        puVar14 = puVar12;
        do {
          puVar15 = puVar14 + -2;
          *(unsigned int *)((param_3 - (int)puVar12) + (int)puVar15) = *puVar15;
          *(unsigned int *)((int)puVar15 + (param_3 - (int)puVar12) + 4) = puVar14[-1];
          puVar14 = puVar15;
        } while (puVar15 != puVar1);
      }
      return;
    }
    if (iVar4 < iVar9) {
      uVar17 = (__int64)(iVar9 >> 1) + (unsigned __int64)(iVar9 < 0 && (param_4 & 1) != 0);
      uVar13 = (unsigned __int64)(param_3 - (int)puVar2 >> 3);
      uVar16 = (uVar17 & 0x1fffffff) * 8 + param_1;
      uVar10 = param_2;
      if (0 < (__int64)uVar13) {
        do {
          uVar8 = (__int64)((int)uVar13 >> 1) + (unsigned __int64)((int)uVar13 < 0 && (uVar13 & 1) != 0);
          lVar7 = (uVar8 & 0x1fffffff) * 8 + uVar10;
          if (*(int *)((int)lVar7 + 4) < *(int *)((int)uVar16 + 4)) {
            uVar10 = lVar7 + 8;
            uVar8 = (uVar13 - uVar8) - 1;
          }
          uVar13 = uVar8;
        } while (0 < (int)uVar8);
      }
      uVar13 = (unsigned __int64)((int)uVar10 - (int)puVar2 >> 3);
    }
    else {
      uVar13 = (__int64)(iVar4 >> 1) + (unsigned __int64)(iVar4 < 0 && (param_5 & 1) != 0);
      uVar17 = (unsigned __int64)((int)puVar2 - (int)puVar3 >> 3);
      uVar10 = (uVar13 & 0x1fffffff) * 8 + param_2;
      uVar16 = param_1;
      if (0 < (__int64)uVar17) {
        do {
          uVar8 = (__int64)((int)uVar17 >> 1) + (unsigned __int64)((int)uVar17 < 0 && (uVar17 & 1) != 0);
          lVar7 = (uVar8 & 0x1fffffff) * 8 + uVar16;
          if (*(int *)((int)lVar7 + 4) <= *(int *)((int)uVar10 + 4)) {
            uVar16 = lVar7 + 8;
            uVar8 = (uVar17 - uVar8) - 1;
          }
          uVar17 = uVar8;
        } while (0 < (int)uVar8);
      }
      uVar17 = (unsigned __int64)((int)uVar16 - (int)puVar3 >> 3);
    }
    param_4 = param_4 - uVar17;
    uVar8 = fn_82275DB0(uVar16,param_2,uVar10,param_4,uVar13,param_6);
    fn_822757E0(param_1,uVar16,uVar8,uVar17,uVar13,param_6);
    param_5 = param_5 - uVar13;
    param_1 = uVar8;
    param_2 = uVar10;
  }
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  (*(unsigned int **)(param_6 + 0x10))[1] = **(unsigned int **)(param_6 + 0x10);
  uStack_90 = *(unsigned int *)(param_6 + 0x10);
  fn_82275C58(aiStack_80,param_1,param_2,&uStack_a0);
  if (aiStack_80[0] != 0) {
    fn_8265CA20();
  }
  fn_82275D00(**(unsigned int **)(param_6 + 0x10),(*(unsigned int **)(param_6 + 0x10))[1],param_2,
                  param_3,param_1);
  return;
}

