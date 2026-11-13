typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_b0;
extern int fn_829680D0();
extern int fn_82969030();
extern int fn_8296CE60();
extern int fn_8296D7F0();
extern int fn_82971580();
extern int fn_829750C8();
extern int fn_8297AE90();


__int64 fn_8297E6F8(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  __int64 lVar8;
  int iVar9;
  unsigned int uVar10;
  int iVar11;
  int iVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned char auStack_b0 [176];
  
  lVar8 = fn_829680D0(param_1,*(unsigned int *)(param_1 + 0x88),3,0x20400);
  if ((int)lVar8 < 0) {
    return lVar8;
  }
  lVar8 = fn_829680D0(param_1,*(unsigned int *)(param_1 + 0x8c),6,0x401);
  if ((int)lVar8 < 0) {
    return lVar8;
  }
  lVar8 = fn_829680D0(param_1,*(unsigned int *)(param_1 + 0x90),10,0x4401);
  if ((int)lVar8 < 0) {
    return lVar8;
  }
  uVar13 = *(unsigned int *)(param_1 + 200) & 0xffff0000;
  if (((uVar13 == 0x46580000) || (uVar13 == 0x54580000)) &&
     (lVar8 = fn_829680D0(param_1,*(unsigned int *)(param_1 + 0x88),2,0x31028), (int)lVar8 < 0))
  {
    return lVar8;
  }
  if (((*(unsigned int *)(param_1 + 200) & 0xffff0000) != 0xfffe0000) &&
     (lVar8 = fn_829680D0(param_1,*(unsigned int *)(param_1 + 0x80),0x10,0x200), (int)lVar8 < 0)
     ) {
    return lVar8;
  }
  lVar8 = fn_829680D0(param_1,*(unsigned int *)(param_1 + 0x84),0x20,0x42000);
  if ((int)lVar8 < 0) {
    return lVar8;
  }
  lVar8 = fn_829680D0(param_1,*(unsigned int *)(param_1 + 0xb4),0x2020,0x40000);
  if ((int)lVar8 < 0) {
    return lVar8;
  }
  lVar8 = fn_829680D0(param_1,*(unsigned int *)(param_1 + 0xb8),0x40020,0x2000);
  if ((int)lVar8 < 0) {
    return lVar8;
  }
  if (((*(unsigned int *)(param_1 + 200) & 0xffff0000) != 0xffff0000) &&
     (lVar8 = fn_829680D0(param_1,*(unsigned int *)(param_1 + 0x94),0x80,0), (int)lVar8 < 0)) {
    return lVar8;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar8 = fn_829750C8(param_1,auStack_b0,*(unsigned int *)(param_1 + 0x8c));
    if ((int)lVar8 < 0) {
      return lVar8;
    }
    iVar9 = fn_8297AE90(param_1,auStack_b0,0);
    if (iVar9 < 0) {
      lVar8 = fn_829680D0(param_1,*(unsigned int *)(param_1 + 0x88),2,0x30028);
      if (lVar8 < 0) goto LAB_8297e8b4;
    }
    else {
      fn_8297AE90(param_1,auStack_b0,1);
    }
    lVar8 = fn_8296CE60(param_1,auStack_b0);
    if ((int)lVar8 < 0) {
      return lVar8;
    }
  }
  lVar8 = fn_829750C8(param_1,auStack_b0,*(unsigned int *)(param_1 + 0x88),
                        *(unsigned int *)(param_1 + 0x2c));
  if (((((-1 < lVar8) && (lVar8 = fn_8297AE90(param_1,auStack_b0,1), -1 < lVar8)) &&
       (lVar8 = fn_8296CE60(param_1,auStack_b0), -1 < lVar8)) &&
      ((lVar8 = fn_829750C8(param_1,auStack_b0,*(unsigned int *)(param_1 + 0x90),
                              *(unsigned int *)(param_1 + 0x34)), -1 < lVar8 &&
       (lVar8 = fn_8297AE90(param_1,auStack_b0,1), -1 < lVar8)))) &&
     (lVar8 = fn_8296CE60(param_1,auStack_b0), -1 < lVar8)) {
    if ((*(unsigned int *)(param_1 + 0xcc) & 4) == 0) {
      bVar7 = false;
      uVar13 = 0;
      if (*(int *)(param_1 + 8) != 0) {
        iVar9 = 0;
        do {
          piVar6 = (int *)(*(int *)(param_1 + 0x14) + iVar9);
          iVar9 = iVar9 + 4;
          *(unsigned int *)(*piVar6 + 0x30) = uVar13;
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(unsigned int *)(param_1 + 8));
      }
      uVar13 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        iVar9 = 0;
        do {
          puVar1 = *(unsigned int **)(iVar9 + *(int *)(param_1 + 0x18));
          if ((*puVar1 & 0xfff00000) == 0x10000000) {
            uVar10 = 0;
            uVar15 = 0;
            if (puVar1[3] != 0) {
              iVar11 = 0;
              iVar12 = 0;
              do {
                iVar2 = *(int *)(iVar12 + puVar1[4]);
                iVar3 = *(int *)(iVar12 + puVar1[2]);
                iVar4 = *(int *)(iVar2 * 4 + *(int *)(param_1 + 0x14));
                iVar5 = *(int *)(iVar3 * 4 + *(int *)(param_1 + 0x14));
                if ((((*(int *)(iVar4 + 4) == *(int *)(iVar5 + 4)) &&
                     (*(int *)(iVar4 + 8) == *(int *)(iVar5 + 8))) &&
                    ((*(int *)(iVar4 + 0xc) == *(int *)(iVar5 + 0xc) &&
                     (((*(int *)(iVar4 + 0x10) == *(int *)(iVar5 + 0x10) &&
                       (*(int *)(iVar4 + 0x14) == *(int *)(iVar5 + 0x14))) &&
                      (*(int *)(iVar4 + 0x18) == *(int *)(iVar5 + 0x18))))))) &&
                   ((*(int *)(iVar4 + 0x3c) == 0 && (*(int *)(iVar5 + 0x3c) == 0)))) {
                  if (iVar3 == -1) {
                    uVar14 = 0xffffffff;
                  }
                  else {
                    uVar14 = *(unsigned int *)(*(int *)(iVar3 * 4 + *(int *)(param_1 + 0x14)) + 0x30);
                  }
                  *(unsigned int *)(iVar4 + 0x30) = uVar14;
                }
                else {
                  *(int *)(iVar11 + puVar1[4]) = iVar2;
                  uVar10 = uVar10 + 1;
                  *(unsigned int *)(iVar11 + puVar1[2]) = *(unsigned int *)(iVar12 + puVar1[2]);
                  iVar11 = iVar11 + 4;
                }
                uVar15 = uVar15 + 1;
                iVar12 = iVar12 + 4;
              } while (uVar15 < puVar1[3]);
            }
            if (uVar10 != puVar1[3]) {
              if (uVar10 == 0) {
                uVar15 = 0;
              }
              else {
                uVar15 = uVar10 & 0xfffff | 0x10000000;
              }
              *puVar1 = uVar15;
              bVar7 = true;
              puVar1[1] = uVar10;
              puVar1[3] = uVar10;
            }
          }
          uVar13 = uVar13 + 1;
          iVar9 = iVar9 + 4;
        } while (uVar13 < *(unsigned int *)(param_1 + 0xc));
        if (bVar7) {
          lVar8 = fn_8296D7F0(param_1);
          if ((int)lVar8 < 0) {
            return lVar8;
          }
          lVar8 = fn_82971580(param_1);
          if ((int)lVar8 < 0) {
            return lVar8;
          }
          lVar8 = fn_82969030(param_1);
          if ((int)lVar8 < 0) {
            return lVar8;
          }
        }
      }
    }
    return 0;
  }
LAB_8297e8b4:
  fn_8296CE60(param_1,auStack_b0);
  return lVar8;
}

