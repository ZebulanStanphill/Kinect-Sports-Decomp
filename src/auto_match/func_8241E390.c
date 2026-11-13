extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_822ABAF8();
extern int fn_8235D350();
extern int fn_823608F8();
extern int fn_823609C0();
extern int fn_82360A68();
extern int fn_82360B30();
extern int fn_8257A9F0();
extern int fn_8265CA20();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_c0;


void fn_8241E390(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  int *piVar15;
  unsigned __int64 uStack_c0;
  unsigned __int64 uStack_b0;
  unsigned int uStack_a8;
  
  piVar15 = param_1 + 2;
  uVar14 = 0;
  uVar11 = (param_1[3] - param_1[2]) / 0x1ac;
  uVar7 = 0;
  if (uVar11 != 0) {
    iVar2 = 0;
    do {
      uVar1 = *(unsigned int *)(iVar2 + *piVar15 + 0x30);
      if (uVar14 < uVar1) {
        uVar14 = uVar1;
      }
      uVar7 = uVar7 + 1;
      iVar2 = iVar2 + 0x1ac;
    } while (uVar7 < uVar11);
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c0 = ((((unsigned __int64)(uStack_c0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(0)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  puVar9 = (unsigned int *)0x0;
  puVar10 = (unsigned int *)0x0;
  if (uVar11 != 0) {
    do {
      if (*(unsigned int *)((((unsigned __int64)(uStack_c0) >> 0) & 0xFFFFFFFF) * 0x1ac + *piVar15 + 0x30) == uVar14) {
        fn_8257A9F0(&uStack_b0,&uStack_c0);
      }
      uStack_c0 = ((((unsigned __int64)(uStack_c0)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(0)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      uStack_c0 = ((((unsigned __int64)(uStack_c0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((((unsigned __int64)(uStack_c0) >> 0) & 0xFFFFFFFF) + 1)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    } while ((((unsigned __int64)(uStack_c0) >> 0) & 0xFFFFFFFF) < (unsigned int)((param_1[3] - *piVar15) / 0x1ac));
    puVar9 = (((unsigned __int64)(uStack_b0) >> 32) & 0xFFFFFFFF);
    puVar10 = (((unsigned __int64)(uStack_b0) >> 0) & 0xFFFFFFFF);
  }
  iVar2 = *(int *)(*puVar10 * 0x1ac + *piVar15);
  param_1[0xb2] = 1;
  uVar11 = (int)puVar9 - (int)puVar10 >> 2;
  param_1[0xb0] = iVar2;
  param_1[0xb1] = uVar11;
  iVar2 = fn_82360B30(*param_1,iVar2);
  if (iVar2 == 0) {
    uVar14 = 0;
    puVar8 = puVar10;
    if (uVar11 != 0) {
      do {
        uVar7 = *puVar8;
        iVar2 = fn_82360B30(*param_1,*(unsigned int *)(uVar7 * 0x1ac + *piVar15));
        if (iVar2 != 0) {
          iVar2 = *(int *)(uVar7 * 0x1ac + *piVar15);
          goto LAB_8241e4a8;
        }
        uVar14 = uVar14 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar14 < uVar11);
    }
    uVar11 = 0;
    if ((param_1[3] - *piVar15) / 0x1ac != 0) {
      iVar2 = 0;
      do {
        puVar8 = puVar10;
        if (puVar10 == puVar9) {
LAB_8241e538:
          iVar3 = fn_82360B30(*param_1,*(unsigned int *)(iVar2 + *piVar15));
          if (iVar3 != 0) {
            iVar2 = *(int *)(uVar11 * 0x1ac + *piVar15);
            goto LAB_8241e58c;
          }
        }
        else {
          do {
            if (*puVar8 == uVar11) break;
            puVar8 = puVar8 + 1;
          } while (puVar8 != puVar9);
          if (puVar8 == puVar9) goto LAB_8241e538;
        }
        uVar11 = uVar11 + 1;
        iVar2 = iVar2 + 0x1ac;
      } while (uVar11 < (unsigned int)((param_1[3] - *piVar15) / 0x1ac));
    }
  }
  else {
    iVar2 = param_1[0xb0];
LAB_8241e4a8:
    param_1[0xb2] = 0;
LAB_8241e58c:
    param_1[0xaf] = iVar2;
  }
  iVar2 = *param_1;
  uVar11 = 0;
  uVar6 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x1ba8);
  if (uVar6 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x1ba4) + 0x48);
    uVar11 = 0;
    do {
      if ((piVar5[-2] == 4) && (*piVar5 != 0)) {
        uVar11 = uVar11 + 1;
      }
      piVar5 = piVar5 + 0x13;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x1ba8);
  uVar14 = 0;
  if (uVar6 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x1ba4) + 0x48);
    uVar14 = 0;
    do {
      if ((piVar5[-2] == 0) && (*piVar5 != 0)) {
        uVar14 = uVar14 + 1;
      }
      piVar5 = piVar5 + 0x13;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar7 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar13 = 0;
  lbl_83265A28 = uVar7 * 0x19660d + 0x3c6ef35f;
  uVar7 = (unsigned int)(((float)(uVar7 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                (float)(__int64)(int)uVar11);
  uStack_b0 = (__int64)(int)uVar7;
  uVar1 = (unsigned int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                (float)(__int64)(int)uVar14);
  uStack_c0 = (__int64)(int)uVar1;
  uVar6 = (unsigned __int64)uVar7;
  uVar12 = (unsigned __int64)uVar1;
  if ((param_1[3] - *piVar15) / 0x1ac != 0) {
    iVar2 = 0;
    do {
      fn_823608F8(*param_1,*(unsigned int *)(iVar2 + *piVar15),0);
      iVar3 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar3 = fn_82250A18();
      }
      if (*(char *)(iVar3 + 4) != '\0') {
        iVar3 = **(int **)(*param_1 + 8);
        if ((*(int *)(iVar2 + *piVar15) < (*(int **)(*param_1 + 8))[1] - iVar3 >> 2) &&
           (piVar5 = *(int **)(*(int *)(iVar2 + *piVar15) * 4 + iVar3),
           iVar3 = *(int *)(piVar5[4] * 4 + *piVar5), *(int *)(iVar3 + 8) != 0)) {
          iVar3 = fn_822ABA88(iVar3,0);
        }
        else {
          iVar3 = 0;
        }
        if ((iVar3 != 0) && (*(int *)(iVar3 + 0x24) != 0)) {
          *(unsigned int *)(*(int *)(iVar3 + 0x24) + 0x15c) = 1;
        }
      }
      puVar8 = puVar10;
      if (puVar10 == puVar9) {
LAB_8241e89c:
        piVar5 = *(int **)(*(int *)(iVar2 + *piVar15) * 4 + **(int **)(*param_1 + 8));
        fn_822ABAF8(*(unsigned int *)(piVar5[4] * 4 + *piVar5),0xffffffff821b8504);
        if (param_1[0xaf] != *(int *)(iVar2 + *piVar15)) {
          iVar3 = lbl_832975B0;
          if (lbl_832975B0 == 0) {
            iVar3 = fn_82250A18();
          }
          if (*(char *)(iVar3 + 4) == '\0') {
            uVar4 = fn_8235D350(*param_1,0,0,1,uVar12);
            fn_823609C0(*param_1,*(unsigned int *)(iVar2 + *piVar15),uVar4);
            uVar12 = (uVar12 + 1) -
                     (__int64)(int)((uVar12 + 1 & 0xffffffff) / (unsigned __int64)uVar14) *
                     (__int64)(int)uVar14;
            goto LAB_8241e958;
          }
        }
        uVar4 = 0xffffffff821b1ad4;
LAB_8241e948:
        fn_82360A68(*param_1,*(unsigned int *)(iVar2 + *piVar15),uVar4);
      }
      else {
        do {
          if (*puVar8 == uVar13) break;
          puVar8 = puVar8 + 1;
        } while (puVar8 != puVar9);
        if (puVar8 == puVar9) goto LAB_8241e89c;
        piVar5 = *(int **)(**(int **)(*param_1 + 8) + *(int *)(iVar2 + *piVar15) * 4);
        uVar4 = 0xffffffff821b38b8;
        if (param_1[0xb0] != *(int *)(iVar2 + *piVar15)) {
          uVar4 = 0xffffffff821b8504;
        }
        fn_822ABAF8(*(unsigned int *)(piVar5[4] * 4 + *piVar5),uVar4);
        uVar4 = 0xffffffff821b0c44;
        if (param_1[0xaf] == *(int *)(iVar2 + *piVar15)) goto LAB_8241e948;
        iVar3 = lbl_832975B0;
        if (lbl_832975B0 == 0) {
          iVar3 = fn_82250A18();
        }
        if (*(char *)(iVar3 + 4) != '\0') goto LAB_8241e948;
        uVar4 = fn_8235D350(*param_1,4,0,1,uVar6);
        fn_823609C0(*param_1,*(unsigned int *)(iVar2 + *piVar15),uVar4);
        uVar6 = (uVar6 + 1) -
                (__int64)(int)((uVar6 + 1 & 0xffffffff) / (unsigned __int64)uVar11) *
                (__int64)(int)uVar11;
      }
LAB_8241e958:
      uVar13 = uVar13 + 1;
      iVar2 = iVar2 + 0x1ac;
    } while (uVar13 < (unsigned int)((param_1[3] - *piVar15) / 0x1ac));
  }
  fn_8265CA20(puVar10);
  return;
}

