extern int fn_82AD6090();
extern int fn_82ADD120();
extern int fn_82B16698();
extern int fn_82B255B0();
extern int fn_82B8AC10();


void fn_82B8C970(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned short uVar7;
  int iVar6;
  unsigned int uVar8;
  unsigned int uVar9;
  int *piVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  
  for (puVar1 = *(unsigned int **)(param_2 + 4); puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[2]) {
    uVar13 = puVar1[4];
    if (((uVar13 != 0) && ((*(unsigned int *)(uVar13 + 8) & 0x3f80) == 0x3700)) &&
       ((*puVar1 & 0xe000000) != 0)) goto LAB_82b8c9cc;
  }
  uVar13 = 0;
LAB_82b8c9cc:
  if (uVar13 != 0) {
    uVar4 = 0;
    for (puVar1 = *(unsigned int **)(uVar13 + 4); puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[2]) {
      if (puVar1[4] != 0) {
        uVar12 = *puVar1 >> 0x19 & 7;
        if (uVar12 != 0) {
          uVar8 = 0;
          uVar11 = 0;
          if (uVar12 != 0) {
            uVar9 = 0;
            do {
              uVar11 = uVar11 + 1;
              uVar3 = uVar9 & 0x3f;
              uVar9 = uVar9 + 2;
              uVar8 = 1 << ((*puVar1 >> 5 & 0xff) >> uVar3 & 3) | uVar8;
            } while (uVar11 < uVar12);
          }
          uVar4 = uVar8 | uVar4;
        }
      }
    }
    piVar10 = (int *)(uVar13 + 0x2c);
    for (uVar12 = 0; uVar12 < (*(unsigned int *)(uVar13 + 8) >> 0x13 & 7); uVar12 = uVar12 + 1) {
      if ((((unsigned int *)*piVar10)[3] == param_2) && ((*(unsigned int *)*piVar10 >> 5 & 3) == param_3)) {
        if ((1 << (uVar12 & 0x3f) & uVar4) != 0) {
          return;
        }
        iVar5 = fn_82B255B0(param_1,uVar13,*(unsigned int *)(param_1 + 0x28c));
        if (iVar5 != 0) {
          if ((*(unsigned int *)(uVar13 + 8) >> 0x17 & 1) != 0) {
            *(unsigned int *)(iVar5 + 8) = *(unsigned int *)(iVar5 + 8) | 0x800000;
            uVar7 = fn_82ADD120(uVar13);
            *(unsigned short *)(iVar5 + 0x12) = uVar7;
            puVar1 = *(unsigned int **)(param_1 + 0x294);
            if ((puVar1[1] & 1) == 0) {
              uVar4 = *puVar1 & 0xfffffffe;
              iVar6 = uVar4 - 4;
              if ((iVar6 == 0) || (*(unsigned int *)(uVar4 + 8) < *(int *)(uVar4 + 4) + 1U))
              goto LAB_82b8cb04;
            }
            else {
LAB_82b8cb04:
              iVar6 = fn_82AD6090(puVar1,1);
            }
            iVar2 = *(int *)(iVar6 + 8);
            *(int *)(iVar6 + 8) = iVar2 + 1;
            *(int *)((iVar2 + 4) * 4 + iVar6) = iVar5;
          }
          fn_82B8AC10(param_1,uVar13,*(unsigned int *)(param_1 + 0x28c),1);
        }
        break;
      }
      piVar10 = piVar10 + 1;
    }
  }
  fn_82B16698(param_1,param_2,*(unsigned int *)(param_1 + 0x294));
  return;
}

