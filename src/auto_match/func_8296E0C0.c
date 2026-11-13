extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_829632F0();
extern int fn_82964628();
extern int fn_829646C8();
extern int fn_82965280();
extern int fn_8296CF68();
extern int fn_8296D7F0();
extern unsigned int lbl_82005710;


__int64 fn_8296E0C0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  int *piVar9;
  int *piVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar14;
  __int64 lVar13;
  unsigned __int64 uVar15;
  
  iVar2 = 0;
  fn_8296CF68();
  uVar12 = 0;
  uVar14 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = 0;
    uVar15 = lbl_82005710;
    do {
      iVar7 = *(int *)(iVar3 + *(int *)(param_1 + 0x14));
      if ((*(unsigned int *)(*(int *)(*(int *)(iVar7 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x20) == 0)
      {
        *(unsigned int *)(iVar7 + 0x30) = uVar14;
      }
      else {
        iVar1 = fn_82964628(uVar15,param_1,*(unsigned int *)(param_1 + 0x88),0,0);
        *(int *)(iVar7 + 0x30) = iVar1;
        if (iVar1 == -1) goto LAB_8296e42c;
        uVar12 = uVar12 + 1;
        *(unsigned int *)(*(int *)(iVar1 * 4 + *(int *)(param_1 + 0x14)) + 0x14) =
             *(unsigned int *)(iVar7 + 0x14);
        *(unsigned int *)(*(int *)(*(int *)(iVar7 + 0x30) * 4 + *(int *)(param_1 + 0x14)) + 0x18) =
             *(unsigned int *)(iVar7 + 0x18);
      }
      uVar14 = uVar14 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar14 < *(unsigned int *)(param_1 + 8));
    if ((uVar12 & 0xffffffff) != 0) {
      fn_8296D7F0(param_1);
      iVar2 = fn_8265C940((uVar12 & 0x3fffffff) << 2,0x24810000);
      if (iVar2 == 0) {
LAB_8296e42c:
        lVar13 = -0x7ff8fff2;
        goto LAB_8296e410;
      }
      uVar8 = 0;
      uVar14 = 0;
      if (*(int *)(param_1 + 8) != 0) {
        iVar3 = 0;
        puVar4 = (unsigned int *)(iVar2 + -4);
        do {
          if ((*(unsigned int *)(*(int *)(*(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x14)) + 4) * 4 +
                                 *(int *)(param_1 + 0x10)) + 4) & 0x20) != 0) {
            puVar4 = puVar4 + 1;
            *puVar4 = uVar14;
            uVar8 = uVar8 + 1;
          }
          uVar14 = uVar14 + 1;
          iVar3 = iVar3 + 4;
        } while (uVar14 < *(unsigned int *)(param_1 + 8));
      }
      fn_82965280(0xffffffff82964d38,iVar2,uVar8,param_1);
      uVar14 = 0;
      if (uVar8 != 0) {
        do {
          uVar6 = uVar14 + 1;
          piVar9 = (int *)(uVar14 * 4 + iVar2);
          uVar11 = 1;
          iVar3 = *(int *)(*(int *)(uVar14 * 4 + iVar2) * 4 + *(int *)(param_1 + 0x14));
          if (uVar6 < uVar8) {
            piVar10 = piVar9;
            do {
              piVar10 = piVar10 + 1;
              iVar7 = *(int *)(*piVar10 * 4 + *(int *)(param_1 + 0x14));
              if (((*(int *)(iVar3 + 4) != *(int *)(iVar7 + 4)) ||
                  (*(int *)(iVar3 + 8) != *(int *)(iVar7 + 8))) ||
                 (*(int *)(iVar3 + 0xc) != *(int *)(iVar7 + 0xc))) break;
              uVar6 = uVar6 + 1;
              uVar11 = uVar11 + 1;
            } while (uVar6 < uVar8);
          }
          iVar3 = fn_829646C8(param_1,uVar11 & 0xfffff | 0x10000000,0xffffffffffffffff,
                                0xffffffffffffffff);
          if (iVar3 == -1) goto LAB_8296e42c;
          uVar6 = 0;
          iVar3 = *(int *)(iVar3 * 4 + *(int *)(param_1 + 0x18));
          piVar10 = piVar9;
          if (uVar11 != 0) {
            do {
              iVar7 = *(int *)(*piVar10 * 4 + *(int *)(param_1 + 0x14));
              iVar1 = *(int *)(iVar7 + 0x30);
              iVar7 = *(int *)(iVar7 + 0x48);
              while (iVar7 != -1) {
                puVar4 = *(unsigned int **)(iVar7 * 4 + *(int *)(param_1 + 0x18));
                if ((puVar4[0xf] != 0) && (lVar13 = fn_829632F0(iVar3,puVar4), lVar13 < 0))
                goto LAB_8296e410;
                if ((*puVar4 & 0xfff00000) != 0x10000000) break;
                uVar5 = 0;
                if (puVar4[3] != 0) {
                  iVar7 = 0;
                  do {
                    if (iVar1 == *(int *)(iVar7 + puVar4[4])) break;
                    uVar5 = uVar5 + 1;
                    iVar7 = iVar7 + 4;
                  } while (uVar5 < puVar4[3]);
                }
                iVar1 = *(int *)(uVar5 * 4 + puVar4[2]);
                iVar7 = *(int *)(*(int *)(iVar1 * 4 + *(int *)(param_1 + 0x14)) + 0x48);
              }
              if (*(int *)(iVar3 + 0x3c) != 0) break;
              uVar6 = uVar6 + 1;
              piVar10 = piVar10 + 1;
            } while (uVar6 < uVar11);
            iVar7 = 0;
            piVar9 = piVar9 + -1;
            uVar6 = uVar11;
            do {
              *(unsigned int *)(iVar7 + *(int *)(iVar3 + 8)) =
                   *(unsigned int *)(*(int *)(piVar9[1] * 4 + *(int *)(param_1 + 0x14)) + 0x30);
              piVar9 = piVar9 + 1;
              *(int *)(iVar7 + *(int *)(iVar3 + 0x10)) = *piVar9;
              iVar7 = iVar7 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          uVar14 = uVar11 + uVar14;
        } while (uVar14 < uVar8);
      }
    }
  }
  lVar13 = 0;
LAB_8296e410:
  fn_8265C990(iVar2,0x24810000);
  return lVar13;
}

