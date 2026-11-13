#define true 1
extern int fn_8258B170();
extern int fn_8258B3F8();
extern int fn_826237C0();
extern int fn_82A1EFC0();
extern unsigned int iStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_8258AF18(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar14;
  unsigned __int64 uVar13;
  int iVar15;
  int iVar16;
  __int64 lVar17;
  int *piVar18;
  int *piVar19;
  unsigned int *puVar20;
  unsigned int uStack_b0;
  struct { unsigned int first; int second; } stack_pair_ac;

  unsigned int *puStack_a4;
  
  fn_8258B3F8(param_1 + 8,param_2,param_2 + 0x10,&uStack_b0,&stack_pair_ac.first);
  puVar20 = (unsigned int *)(param_2 + 0x20);
  puStack_a4 = puVar20;
  fn_8258B170(param_1,param_2,puVar20,(unsigned int *)(param_2 + 0x24));
  uVar8 = uStack_b0;
  stack_pair_ac.second = *(int *)(param_1 + 0x24);
  iVar4 = (int)(uStack_b0 << 0xb | uStack_b0 >> 0x15) >> 0x16;
  iVar5 = (int)uStack_b0 >> 0x15;
  iVar16 = (int)(stack_pair_ac.first << 0x15 | stack_pair_ac.first >> 0xb) >> 0x15;
  iVar6 = (int)(stack_pair_ac.first << 0xb | stack_pair_ac.first >> 0x15) >> 0x16;
  uVar7 = (int)stack_pair_ac.first >> 0x15;
  iVar10 = (int)(uStack_b0 << 0x15 | uStack_b0 >> 0xb) >> 0x15;
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar10 <= iVar16) {
    iVar15 = iVar10 * stack_pair_ac.second;
    uStack_b0 = (iVar16 - iVar10) + 1;
    do {
      if (iVar4 <= iVar6) {
        lVar17 = ((__int64)iVar6 - (__int64)iVar4) + 1;
        piVar19 = (int *)((iVar2 * iVar4 + iVar15 + iVar5) * 4 + iVar1);
        do {
          if (iVar5 <= (int)uVar7) {
            iVar16 = (uVar7 - iVar5) + 1;
            piVar18 = piVar19;
LAB_8258affc:
            piVar14 = (int *)*piVar18;
            if (piVar14 == (int *)0x0) {
LAB_8258b068:
              puVar9 = *(unsigned int **)(param_1 + 0x78);
              if (puVar9 == *(unsigned int **)(param_1 + 0x7c)) {
                *(unsigned int *)(param_1 + 0x7c) = 0;
              }
              stack_pair_ac.first = uVar7;
              if (puVar9 == (unsigned int *)0x0) {
                puVar9 = (unsigned int *)
                         fn_826237C0(param_1 + 0x4c,*(unsigned int *)(param_1 + 0x40),
                                         *(unsigned int *)(param_1 + 0x48));
              }
              else {
                uVar3 = *puVar9;
                *puVar9 = 0;
                *(unsigned int *)(param_1 + 0x78) = uVar3;
                puVar9 = puVar9 + -1;
                *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
              }
                    /* WARNING: Subroutine does not return */
              fn_82A1EFC0(puVar9,0,0x80);
            }
            iVar10 = *piVar14;
            if (iVar10 == 0) {
              piVar14 = (int *)piVar14[0x1f];
              while( true ) {
                if (piVar14 == (int *)0x0) goto LAB_8258b068;
                iVar10 = *piVar14;
                if (iVar10 != 0) break;
                piVar14 = (int *)piVar14[0x1f];
              }
              iVar12 = 0;
              piVar11 = piVar14;
              do {
                piVar11 = piVar11 + 1;
                iVar12 = iVar12 + 1;
                if (*piVar11 == 0) goto LAB_8258b0e4;
              } while (iVar12 < 0x1e);
            }
            else {
              iVar12 = 0;
              piVar11 = piVar14;
              do {
                piVar11 = piVar11 + 1;
                iVar12 = iVar12 + 1;
                if (*piVar11 == 0) goto LAB_8258b0e4;
              } while (iVar12 < 0x1e);
            }
            goto LAB_8258b0ec;
          }
LAB_8258b140:
          lVar17 = lVar17 + -1;
          piVar19 = piVar19 + iVar2;
        } while (lVar17 != 0);
      }
      uVar13 = (unsigned __int64)uStack_b0;
      iVar15 = iVar15 + stack_pair_ac.second;
      uStack_b0 = (unsigned int)(uVar13 - 1);
    } while (uVar13 - 1 != 0);
  }
  *puVar20 = uVar8;
  *(unsigned int *)(param_2 + 0x24) = stack_pair_ac.first;
  return;
LAB_8258b0e4:
  piVar14[iVar12] = param_2;
LAB_8258b0ec:
  *piVar14 = iVar10 + -1;
  iVar16 = iVar16 + -1;
  piVar18 = piVar18 + 1;
  puVar20 = puStack_a4;
  if (iVar16 == 0) goto LAB_8258b140;
  goto LAB_8258affc;
}

