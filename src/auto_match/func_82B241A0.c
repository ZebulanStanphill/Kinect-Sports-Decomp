typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_d0;
extern int fn_82ACB180();
extern int fn_82AEFC28();
extern int fn_82B20868();
extern int fn_82B208B8();
extern unsigned int iStack_a0;
extern unsigned int iStack_a8;
extern unsigned int iStack_b0;
extern unsigned int iStack_b8;
extern unsigned int iStack_c0;
extern unsigned int iStack_c8;
extern unsigned int uStack_a4;
extern unsigned int uStack_b4;
extern unsigned int uStack_c4;


__int64 fn_82B241A0(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  char cVar5;
  __int64 lVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  int iVar15;
  int iVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned __int64 uVar20;
  unsigned int uVar21;
  unsigned int auStack_d0 [2];
  struct { int first; unsigned int second; } stack_pair_c8;

  int iStack_c0;
  struct { int first; unsigned int second; } stack_pair_b8;

  int iStack_b0;
  struct { int first; unsigned int second; } stack_pair_a8;

  int iStack_a0;

  lVar6 = 0;
  for (uVar11 = *(unsigned int *)(param_2 + 4); ((uVar11 & 1) == 0 && (uVar11 != 0));
      uVar11 = *(unsigned int *)((uVar11 & 0xfffffffe) + 4)) {
    lVar6 = (unsigned __int64)*(unsigned int *)(uVar11 + 8) + lVar6;
  }
  lVar14 = 0;
  uVar13 = 0;
  fn_82AEFC28(auStack_d0,lVar6,0xffffffff82af07e8,param_1);
  uVar12 = 0;
  iStack_a0 = 0;
  stack_pair_a8.second = -(unsigned int)((*(unsigned int *)(param_2 + 4) & 1) == 0) & *(unsigned int *)(param_2 + 4);
  uVar11 = auStack_d0[0];
  stack_pair_a8.first = param_2;
LAB_82b24234:
  do {
    do {
      if ((stack_pair_a8.second == 0) || (bVar2 = false, iStack_a0 == *(int *)(stack_pair_a8.second + 8))) {
        bVar2 = true;
      }
      if (bVar2) {
        uVar12 = lVar14 - 1;
        iVar15 = 0;
        if ((uVar12 & 0xffffffff) < (uVar13 & 0xffffffff)) {
          uVar20 = uVar13 - uVar12;
        }
        else {
          uVar20 = 0;
          lVar14 = (uVar12 - uVar13) + lVar14;
        }
        bVar2 = false;
        iStack_b0 = 0;
        uVar21 = 0;
        stack_pair_b8.second = -(unsigned int)((*(unsigned int *)(param_2 + 4) & 1) == 0) & *(unsigned int *)(param_2 + 4);
        stack_pair_b8.first = param_2;
        while( true ) {
          if ((stack_pair_b8.second == 0) || (bVar3 = false, iStack_b0 == *(int *)(stack_pair_b8.second + 8))) {
            bVar3 = true;
          }
          if (bVar3) break;
          piVar4 = (int *)fn_82ACB180(&stack_pair_b8.first);
          uVar21 = uVar21 + 1;
          puVar10 = (unsigned int *)(uVar11 + 4);
          if ((~uVar11 & 1) == 0) {
            puVar10 = auStack_d0;
          }
          if ((*(unsigned int *)((uVar21 >> 3 & 0x1ffffffc) + (int)puVar10) >> (uVar21 & 0x1f) & 1) == 0) {
            uVar12 = 0;
            for (uVar17 = *(unsigned int *)(*piVar4 + 4); ((uVar17 & 1) == 0 && (uVar17 != 0));
                uVar17 = *(unsigned int *)((uVar17 & 0xfffffffe) + 4)) {
              uVar12 = *(unsigned int *)(uVar17 + 8) + uVar12;
            }
            if (2 < (uVar12 & 0xffffffff)) {
              lVar6 = uVar12 - 2;
              lVar14 = lVar6 + lVar14;
              do {
                uVar12 = uVar12 - 1;
                lVar6 = lVar6 + -1;
              } while (lVar6 != 0);
            }
            if ((uVar12 & 0xffffffff) == 2) {
              iVar15 = iVar15 + 1;
              lVar14 = lVar14 + 1;
            }
            if (bVar2) {
              if ((uVar20 & 0xffffffff) == 0) {
                if (iVar15 == 0) {
                  lVar14 = lVar14 + 1;
                }
                else {
                  iVar15 = iVar15 + -1;
                }
              }
              else {
                uVar20 = uVar20 - 1;
              }
            }
            bVar2 = true;
          }
        }
        return lVar14;
      }
      piVar4 = (int *)fn_82ACB180(&stack_pair_a8.first);
      iVar15 = *piVar4;
      uVar12 = uVar12 + 1;
      puVar10 = (unsigned int *)(uVar11 + 4);
      if ((~uVar11 & 1) == 0) {
        puVar10 = auStack_d0;
      }
    } while ((*(unsigned int *)(((unsigned int)((uVar12 & 0xffffffff) >> 3) & 0x1ffffffc) + (int)puVar10) >>
              ((unsigned int)uVar12 & 0x1f) & 1) != 0);
    cVar5 = fn_82B20868(iVar15);
    if (cVar5 == '\0') {
LAB_82b24400:
      cVar5 = fn_82B208B8(iVar15);
      if (cVar5 != '\0') {
        uVar21 = *(unsigned int *)(iVar15 + 4);
        iVar15 = 1;
        uVar17 = -(unsigned int)((uVar21 & 1) == 0) & uVar21;
        uVar21 = -(unsigned int)((uVar21 & 1) == 0) & uVar21;
        do {
          uVar18 = 0;
          iStack_b0 = 0;
          uVar19 = 0;
          stack_pair_b8.second = -(unsigned int)((*(unsigned int *)(param_2 + 4) & 1) == 0) & *(unsigned int *)(param_2 + 4);
          stack_pair_b8.first = param_2;
          do {
            do {
              do {
                if ((stack_pair_b8.second == 0) || (bVar2 = false, iStack_b0 == *(int *)(stack_pair_b8.second + 8))) {
                  bVar2 = true;
                }
                if (bVar2) goto LAB_82b24570;
                piVar4 = (int *)fn_82ACB180(&stack_pair_b8.first);
                iVar16 = *piVar4;
                uVar19 = uVar19 + 1;
                puVar10 = (unsigned int *)(uVar11 + 4);
                if ((~uVar11 & 1) == 0) {
                  puVar10 = auStack_d0;
                }
                uVar8 = uVar19 >> 3 & 0x1ffffffc;
              } while (((*(unsigned int *)(uVar8 + (int)puVar10) >> (uVar19 & 0x1f) & 1) != 0) ||
                      (cVar5 = fn_82B208B8(iVar16), cVar5 == '\0'));
              uVar7 = *(unsigned int *)(iVar16 + 4);
              uVar9 = -(unsigned int)((uVar7 & 1) == 0) & uVar7;
              uVar7 = -(unsigned int)((uVar7 & 1) == 0) & uVar7;
            } while (((*(int *)(uVar9 + 0x10) != *(int *)(uVar17 + 0x10)) ||
                     (((*(int *)(uVar9 + 0x18) != *(int *)(uVar17 + 0x18) ||
                       (*(int *)(uVar7 + 0x1c) != *(int *)(uVar21 + 0x1c))) ||
                      (*(int *)(uVar7 + 0x24) != *(int *)(uVar21 + 0x24))))) ||
                    (uVar18 = uVar18 + 1, iVar15 != 2));
            puVar10 = (unsigned int *)(uVar11 + 4);
            if ((~uVar11 & 1) == 0) {
              puVar10 = auStack_d0;
            }
            *(unsigned int *)(uVar8 + (int)puVar10) = 1 << (uVar19 & 0x1f) | *(unsigned int *)(uVar8 + (int)puVar10)
            ;
            uVar11 = auStack_d0[0];
          } while (uVar18 != 4);
LAB_82b24570:
          if (uVar18 < 2) goto LAB_82b24234;
          iVar15 = iVar15 + 1;
        } while (iVar15 < 3);
        lVar14 = lVar14 + 1;
        if (uVar18 == 2) {
          uVar13 = uVar13 + 1;
        }
      }
      goto LAB_82b24234;
    }
    bVar2 = false;
    iVar16 = 1;
    uVar21 = -(unsigned int)((*(unsigned int *)(iVar15 + 4) & 1) == 0) & *(unsigned int *)(iVar15 + 4);
    do {
      uVar17 = 0;
      iStack_c0 = 0;
      uVar18 = 0;
      stack_pair_c8.second = -(unsigned int)((*(unsigned int *)(param_2 + 4) & 1) == 0) & *(unsigned int *)(param_2 + 4);
      stack_pair_c8.first = param_2;
      do {
        do {
          if ((stack_pair_c8.second == 0) || (bVar3 = false, iStack_c0 == *(int *)(stack_pair_c8.second + 8))) {
            bVar3 = true;
          }
          if (bVar3) goto LAB_82b243d8;
          piVar4 = (int *)fn_82ACB180(&stack_pair_c8.first);
          iVar1 = *piVar4;
          uVar18 = uVar18 + 1;
          puVar10 = (unsigned int *)(uVar11 + 4);
          if ((~uVar11 & 1) == 0) {
            puVar10 = auStack_d0;
          }
          uVar19 = uVar18 >> 3 & 0x1ffffffc;
        } while (((((*(unsigned int *)(uVar19 + (int)puVar10) >> (uVar18 & 0x1f) & 1) != 0) ||
                  (cVar5 = fn_82B20868(iVar1), cVar5 == '\0')) ||
                 (uVar8 = *(unsigned int *)(iVar1 + 4), uVar8 = -(unsigned int)((uVar8 & 1) == 0) & uVar8,
                 *(int *)(uVar21 + 0x10) != *(int *)(uVar8 + 0x10))) ||
                ((*(int *)(uVar21 + 0x18) != *(int *)(uVar8 + 0x18) ||
                 (uVar17 = uVar17 + 1, iVar16 != 2))));
        puVar10 = (unsigned int *)(uVar11 + 4);
        if ((~uVar11 & 1) == 0) {
          puVar10 = auStack_d0;
        }
        *(unsigned int *)(uVar19 + (int)puVar10) = 1 << (uVar18 & 0x1f) | *(unsigned int *)(uVar19 + (int)puVar10);
        uVar11 = auStack_d0[0];
      } while (uVar17 != 4);
LAB_82b243d8:
      if (uVar17 < 3) break;
      iVar16 = iVar16 + 1;
      bVar2 = true;
    } while (iVar16 < 3);
    if (!bVar2) goto LAB_82b24400;
    lVar14 = lVar14 + 1;
  } while( true );
}
