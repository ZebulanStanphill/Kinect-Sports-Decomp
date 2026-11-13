typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82250A18();
extern int fn_8229E090();
extern int fn_822A0D08();
extern int fn_822A0EB8();
extern int fn_822ABA88();
extern int fn_822E8178();
extern int fn_822E8240();
extern int fn_82359698();
extern int fn_823980B0();
extern int fn_823A4048();
extern int fn_823A4208();
extern int fn_824D78A0();
extern int fn_824E3740();
extern int fn_8288B760();
extern int fn_82A1E1A8();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917B0;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832975B0;


void fn_823A3B90(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  __int64 lVar5;
  int iVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned int *puVar12;
  unsigned __int64 uVar13;
  double dVar14;
  double dVar15;
  
  uVar7 = *(unsigned int *)(param_2 + 0x14);
  if (uVar7 == 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x10) - param_1);
    *(float *)(param_2 + 0x10) = fVar1;
    if (ltcg_pool_0_0f <= fVar1) {
      return;
    }
    fn_823A4048(param_2,(*(int *)(*(int *)(param_2 + 8) + 0x178) == 2) + '\x01');
    return;
  }
  if (uVar7 != 1) {
    if (2 < uVar7) {
      return;
    }
    iVar9 = *(int *)(param_2 + 8);
    if (*(int *)(*(int *)(*(int *)(iVar9 + 0xd4) + 0x18) + 0xc) != 0) {
      return;
    }
    if (*(int *)(iVar9 + 0x178) == 2) {
      uVar10 = 0x11;
    }
    else {
      uVar10 = 4;
      *(float *)(iVar9 + 0x208) = ltcg_pool_0_0f;
      iVar9 = *(int *)(param_2 + 8);
    }
    fn_82359698(iVar9,uVar10);
    return;
  }
  *(float *)(param_2 + 0x18) = (float)((double)*(float *)(param_2 + 0x18) - param_1);
  bVar3 = true;
  piVar2 = *(int **)(*(int *)(param_2 + 8) + 8);
  dVar15 = (double)ltcg_pool_0_0f;
  bVar4 = true;
  lVar11 = 0;
  if ((piVar2[1] - *piVar2 & 0xfffffffcU) != 0) {
    puVar12 = (unsigned int *)(param_2 + 0x1c);
    iVar9 = -0x1c - param_2;
    dVar14 = (double)lbl_821917B0;
    do {
      uVar13 = 0;
      piVar2 = *(int **)((int)puVar12 + **(int **)(*(int *)(param_2 + 8) + 8) + iVar9);
      if (*(int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8) != 0) {
        do {
          piVar2 = *(int **)((int)puVar12 + **(int **)(*(int *)(param_2 + 8) + 8) + iVar9);
          iVar6 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),uVar13);
          piVar2 = *(int **)(iVar6 + 0x168);
          if ((*(int *)(iVar6 + 0x278) == 0) && (*(int *)(iVar6 + 0x24) != 0)) {
            bVar3 = false;
            if (piVar2 == (int *)0x0) {
              uVar7 = *(unsigned int *)(iVar6 + 0x16c);
            }
            else {
              uVar7 = fn_8288B760(piVar2);
              uVar7 = uVar7 & 0xff;
            }
            if (uVar7 == 0) {
              if (piVar2 != (int *)0x0) {
                lVar5 = (**(int (***)())(*piVar2 + 8))(piVar2);
                uVar10 = fn_822E8178(lVar5 + 0x1ec,1);
                iVar8 = fn_822E8178(lVar5 + 0x1ec,0);
                if (iVar8 != 0) {
                  *(int *)(iVar6 + 0x214) = (int)uVar10;
                  *(unsigned int *)(iVar6 + 0x278) = 1;
                  if (*(int *)(iVar6 + 0x24) != 0) {
                    fn_824D78A0(*(int *)(iVar6 + 0x24),uVar10);
                  }
                }
              }
            }
            else {
              bVar4 = false;
              if ((unsigned __int64)*puVar12 == (uVar13 & 0xffffffff)) {
                iVar8 = lbl_832975B0;
                if (lbl_832975B0 == 0) {
                  iVar8 = fn_82250A18();
                }
                if ((dVar15 < (double)*(float *)(param_2 + 0x18)) ||
                   (uVar10 = 1, *(char *)(iVar8 + 4) == '\0')) {
                  uVar10 = 0;
                }
                iVar8 = fn_823A4208(param_2,lVar11,uVar13,uVar10);
                if (iVar8 != 0) {
                  if (piVar2 != (int *)0x0) {
                    iVar6 = *(int *)(iVar6 + 0x214);
                    lVar5 = (**(int (***)())(*piVar2 + 8))(piVar2);
                    fn_822E8240(lVar5 + 0x1ec,1,0);
                    fn_822E8240(lVar5 + 0x1ec,iVar6 != 0,1);
                  }
                  if (((uVar13 & 0xffffffff) == 0) &&
                     (piVar2 = *(int **)((int)puVar12 +
                                        **(int **)(*(int *)(param_2 + 8) + 8) + iVar9),
                     1 < *(unsigned int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8))) {
                    *puVar12 = *puVar12 + 1;
                    if (*(int *)(param_2 + 0x14) == 1) {
                      fn_823980B0(*(unsigned int *)(param_2 + 8),0,0);
                      fn_823980B0(*(unsigned int *)(param_2 + 8),1,0);
                      fn_822A0EB8(*(unsigned int *)(*(int *)(param_2 + 8) + 0xd4));
                      *(float *)(param_2 + 0x10) = (float)dVar14;
                    }
                    *(unsigned int *)(param_2 + 0x14) = 0;
                    break;
                  }
                }
              }
            }
          }
          uVar13 = uVar13 + 1;
          piVar2 = *(int **)((int)puVar12 + **(int **)(*(int *)(param_2 + 8) + 8) + iVar9);
        } while ((uVar13 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8)
                );
      }
      lVar11 = lVar11 + 1;
      puVar12 = puVar12 + 1;
      piVar2 = *(int **)(*(int *)(param_2 + 8) + 8);
    } while ((int)lVar11 < piVar2[1] - *piVar2 >> 2);
  }
  if (bVar3) {
    fn_823A4048(param_2,2);
    iVar9 = *(int *)(*(int *)(param_2 + 8) + 0xd4);
    iVar6 = *(int *)(iVar9 + 0xd0);
    if (iVar6 == 0) {
      return;
    }
    fn_8229E090(iVar6,0,1);
    *(unsigned int *)(iVar9 + 0xd0) = 0;
    return;
  }
  if (!bVar4) {
    fVar1 = (float)((double)*(float *)(param_2 + 0xc) - param_1);
    *(float *)(param_2 + 0xc) = fVar1;
    if (dVar15 < (double)fVar1) {
      return;
    }
    fn_82A1E1A8(2000);
    *(unsigned int *)(param_2 + 0xc) = lbl_821916FC;
    return;
  }
  fn_823980B0(*(unsigned int *)(param_2 + 8),0,0);
  fn_823980B0(*(unsigned int *)(param_2 + 8),1,0);
  iVar9 = fn_824E3740();
  if (*(int *)(iVar9 + 0x18) == 0) {
    iVar9 = *(int *)(param_2 + 8);
    iVar6 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar6 = fn_82250A18();
    }
    if (*(char *)(iVar6 + 4) != '\0') {
      fn_822A0D08(*(unsigned int *)(iVar9 + 0xd4));
      goto LAB_823a3fbc;
    }
    iVar9 = *(int *)(iVar9 + 0xd4);
  }
  else {
    iVar9 = *(int *)(*(int *)(param_2 + 8) + 0xd4);
  }
  if (*(int *)(iVar9 + 0xd0) != 0) {
    fn_8229E090(*(int *)(iVar9 + 0xd0),0,1);
    *(unsigned int *)(iVar9 + 0xd0) = 0;
  }
LAB_823a3fbc:
  fn_822A0EB8(*(unsigned int *)(*(int *)(param_2 + 8) + 0xd4));
  return;
}

