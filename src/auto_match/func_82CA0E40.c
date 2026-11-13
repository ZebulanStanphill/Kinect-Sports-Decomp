#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern unsigned int uRam8329f138;
extern unsigned int uStack_a0;


void fn_82CA0E40(unsigned __int64 param_1, __int64 param_2, __int64 param_3, __int64 param_4, unsigned __int64 param_5, __int64 param_6, int param_7, int param_8, unsigned int in_stack_00000054, int in_stack_0000005c, unsigned int in_stack_00000064)

{
  unsigned char uVar1;
  unsigned char uVar2;
  int iVar3;
  unsigned int *puVar4;
  int iVar5;
  int iVar6;
  unsigned short uVar7;
  unsigned short uVar8;
  unsigned short uVar9;
  unsigned short uVar10;
  __int64 lVar11;
  int iVar12;
  int iVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  __int64 lVar17;
  unsigned int uVar18;
  __int64 lVar19;
  __int64 lVar20;
  __int64 lVar21;
  __int64 lVar22;
  unsigned __int64 uVar23;



  unsigned int uStack_a0;
  
  iVar12 = (int)param_3;
  lVar16 = param_2 + param_6;
  uVar23 = (unsigned __int64)in_stack_00000064;
  param_3 = param_3 + param_6;
  uVar14 = (unsigned __int64)uRam8329f138;
  lVar19 = lVar16 - uVar14;
  uStack_a0 = 0;
  lVar20 = param_3 - uVar14;
  lVar21 = param_3 + (unsigned __int64)in_stack_00000054 + -1;
  lVar22 = lVar16 + (unsigned __int64)in_stack_00000054 + -1;
  uVar15 = uVar14;
  uVar18 = in_stack_00000064;
  if (in_stack_00000064 - in_stack_0000005c != 0x10) {
    uVar15 = (__int64)((int)uRam8329f138 >> 1) + 1;
    uVar18 = (int)in_stack_00000064 >> 1;
    param_2 = param_2 - uVar23;
    iVar12 = iVar12 - in_stack_00000064;
    if ((param_5 & 7) != 0) {
      uStack_a0 = 8 - ((unsigned int)param_5 & 7);
    }
  }
  iVar6 = (int)lVar20;
  iVar5 = (int)lVar19;
  lVar11 = lVar20;
  if ((int)param_4 < (int)(unsigned int)param_5) {
    param_4 = param_5 - param_4;
    do {
      iVar3 = (int)lVar11;
      uVar1 = *(unsigned char *)(((int)lVar16 - iVar6) + iVar3);
      iVar13 = 0;
      uVar2 = *(unsigned char *)(((int)param_3 - iVar6) + iVar3);
      uVar7 = CONCAT11(uVar1,uVar1);
      uVar8 = CONCAT11(*(unsigned char *)lVar21,*(unsigned char *)lVar21);
      uVar9 = CONCAT11(uVar2,uVar2);
      uVar10 = CONCAT11(*(unsigned char *)lVar22,*(unsigned char *)lVar22);
      if (0 < (int)uVar14) {
        lVar17 = lVar11;
        do {
          puVar4 = (unsigned int *)lVar17;
          *(unsigned int *)(((int)lVar19 - iVar3) + (int)puVar4) = CONCAT22(uVar7,uVar7);
          iVar13 = iVar13 + 4;
          *puVar4 = CONCAT22(uVar9,uVar9);
          *(unsigned int *)(((iVar5 - iVar6) - iVar3) + iVar3 + in_stack_0000005c + (int)puVar4) =
               CONCAT22(uVar10,uVar10);
          *(unsigned int *)(((iVar3 + in_stack_0000005c) - iVar3) + (int)puVar4) = CONCAT22(uVar8,uVar8);
          lVar17 = lVar17 + 4;
          uVar14 = (unsigned __int64)uRam8329f138;
        } while (iVar13 < (int)uRam8329f138);
      }
      lVar19 = lVar19 + uVar23;
      lVar11 = lVar11 + uVar23;
      lVar22 = lVar22 + uVar23;
      lVar21 = lVar21 + uVar23;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  iVar3 = (int)uVar18 >> 2;
  if ((param_7 != 0) && (0 < (int)uVar15)) {
    lVar20 = lVar20 - param_2;
    iVar13 = (int)param_2;
    uVar14 = uVar15;
    do {
      if (0 < iVar3) {
        lVar16 = param_2;
        lVar21 = (__int64)iVar3;
        do {
          puVar4 = (unsigned int *)lVar16;
          *puVar4 = *(unsigned int *)((int)lVar20 + (iVar5 - iVar6) + (int)puVar4);
          *(unsigned int *)((iVar12 - iVar13) + (int)puVar4) =
               *(unsigned int *)((int)lVar20 + (int)puVar4);
          lVar16 = lVar16 + 4;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      uVar14 = uVar14 - 1;
      param_2 = param_2 + uVar23;
      lVar20 = lVar20 - uVar23;
    } while (uVar14 != 0);
  }
  if (param_8 != 0) {
    iVar12 = (int)lVar19;
    lVar16 = lVar11 - uVar23;
    lVar20 = uVar15 + uStack_a0;
    if (0 < lVar20) {
      lVar21 = lVar16 - lVar19;
      do {
        if (0 < iVar3) {
          lVar22 = lVar19;
          lVar17 = (__int64)iVar3;
          do {
            puVar4 = (unsigned int *)lVar22;
            *puVar4 = *(unsigned int *)
                       ((int)puVar4 + ((iVar12 - in_stack_00000064) - (int)lVar16) + (int)lVar21);
            *(unsigned int *)((int)puVar4 + ((int)lVar11 - (int)lVar19)) =
                 *(unsigned int *)((int)puVar4 + (int)lVar21);
            lVar22 = lVar22 + 4;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        lVar20 = lVar20 + -1;
        lVar19 = lVar19 + uVar23;
        lVar21 = lVar21 - uVar23;
        lVar11 = lVar11 + uVar23;
      } while (lVar20 != 0);
    }
  }
  return;
}

