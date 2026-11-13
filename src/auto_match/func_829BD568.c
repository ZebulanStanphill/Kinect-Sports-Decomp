extern unsigned int *auStack_84;
extern int fn_829BCB40();
extern int fn_829BCCA8();
extern int fn_829BD4C0();
extern unsigned int iStack_90;
extern unsigned int iStack_98;
extern unsigned int lbl_820550C8;
extern unsigned int lbl_82055108;
extern unsigned int uStack_94;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


unsigned __int64 fn_829BD568(int param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned short *puVar4;
  int iVar5;
  int iVar7;
  unsigned __int64 uVar6;
  unsigned int uVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  int iVar13;
  int *piVar14;
  unsigned int uVar15;
  __int64 lVar16;
  struct { unsigned int first; unsigned int second; } stack_pair_a0;

  int iStack_98;
  unsigned int uStack_94;
  int iStack_90;
  unsigned int auStack_84 [2];
  int aiStack_7c [31];
  
  iVar1 = *(int *)(param_1 + 0x1c0);
  uVar2 = *(unsigned int *)(param_1 + 0x1a0);
  if (((*(int *)(param_1 + 0x118) == 0) || (*(int *)(iVar1 + 0x28) != 0)) ||
     (iVar7 = fn_829BD4C0(), iVar7 != 0)) {
    if (*(int *)(iVar1 + 8) == 0) {
      puVar12 = auStack_84;
      puVar11 = (unsigned int *)(iVar1 + 0x10);
      stack_pair_a0.first = **(unsigned int **)(param_1 + 0x18);
      lVar16 = 5;
      stack_pair_a0.second = (*(unsigned int **)(param_1 + 0x18))[1];
      iVar7 = *(int *)(iVar1 + 0xc);
      uVar10 = *(unsigned int *)(iVar1 + 0x10);
      do {
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
        *puVar12 = *puVar11;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      iVar13 = 0;
      if (0 < *(int *)(param_1 + 0x168)) {
        piVar14 = (int *)(param_1 + 0x16c);
        iStack_90 = param_1;
        do {
          iVar3 = *piVar14;
          puVar4 = (unsigned short *)*param_2;
          iVar9 = *(int *)((*(int *)(*(int *)((iVar3 + 0x54) * 4 + param_1) + 0x14) + 0xb) * 4 +
                          iVar1);
          if ((int)uVar10 < 8) {
            iVar7 = fn_829BCB40(&stack_pair_a0.first,iVar7,uVar10,0);
            if (iVar7 == 0) goto LAB_829bd5a8;
            iVar7 = iStack_98;
            uVar10 = uStack_94;
            if (7 < (int)uStack_94) goto LAB_829bd67c;
            uVar6 = 1;
LAB_829bd6b0:
            uVar8 = fn_829BCCA8(&stack_pair_a0.first,iVar7,uVar10,iVar9,uVar6);
            iVar7 = iStack_98;
            uVar10 = uStack_94;
            if ((int)uVar8 < 0) goto LAB_829bd5a8;
          }
          else {
LAB_829bd67c:
            uVar8 = iVar7 >> (uVar10 - 8 & 0x3f) & 0xff;
            iVar5 = *(int *)((uVar8 + 0x24) * 4 + iVar9);
            if (iVar5 == 0) {
              uVar6 = 9;
              goto LAB_829bd6b0;
            }
            uVar8 = (unsigned int)*(unsigned char *)(uVar8 + iVar9 + 0x490);
            uVar10 = uVar10 - iVar5;
          }
          uVar15 = 0;
          if (uVar8 != 0) {
            if (((int)uVar10 < (int)uVar8) &&
               (iVar9 = fn_829BCB40(&stack_pair_a0.first,iVar7,uVar10,uVar8), iVar7 = iStack_98,
               uVar10 = uStack_94, iVar9 == 0)) goto LAB_829bd5a8;
            uVar10 = uVar10 - uVar8;
            uVar15 = (1 << (uVar8 & 0x3f)) - 1U & iVar7 >> (uVar10 & 0x3f);
            if ((int)uVar15 < *(int *)(&lbl_820550C8 + uVar8 * 4)) {
              uVar15 = *(int *)(&lbl_82055108 + uVar8 * 4) + uVar15;
            }
          }
          iVar13 = iVar13 + 1;
          param_2 = param_2 + 1;
          piVar14 = piVar14 + 1;
          iVar9 = aiStack_7c[iVar3];
          aiStack_7c[iVar3] = iVar9 + uVar15;
          *puVar4 = (short)(iVar9 + uVar15 << (uVar2 & 0x3f));
        } while (iVar13 < *(int *)(param_1 + 0x168));
      }
      puVar11 = auStack_84;
      puVar12 = (unsigned int *)(iVar1 + 0x10);
      lVar16 = 5;
      **(unsigned int **)(param_1 + 0x18) = stack_pair_a0.first;
      *(unsigned int *)(*(int *)(param_1 + 0x18) + 4) = stack_pair_a0.second;
      *(int *)(iVar1 + 0xc) = iVar7;
      *(unsigned int *)(iVar1 + 0x10) = uVar10;
      do {
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
        *puVar12 = *puVar11;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    uVar6 = 1;
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
  }
  else {
LAB_829bd5a8:
    uVar6 = 0;
  }
  return uVar6;
}

