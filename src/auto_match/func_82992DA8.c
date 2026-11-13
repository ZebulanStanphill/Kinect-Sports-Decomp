extern int fn_8294B7A8();
extern int fn_8294BDC8();
extern int fn_8294C648();
extern int fn_8294C7E0();
extern int fn_8294C890();
extern int fn_8294CF28();
extern int fn_8294DBD8();
extern int fn_82950808();
extern int fn_8294E2C8();
extern int fn_82950048();
extern int fn_829501E8();
extern int fn_82950DB8();
extern int fn_8294DF88();
extern int fn_82950DB8();
extern int fn_8294DBD8();
extern int fn_8294E2C8();
extern int fn_82956318();
extern int fn_82950E98();
extern int fn_82957790();
extern int fn_8294B7A8();
extern int fn_82968960();
extern int fn_82969030();
extern int fn_8296D7F0();
extern int fn_8296E438();
extern int fn_8296EB38();
extern int fn_82971580();


__int64 fn_82992DA8(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  __int64 lVar3;
  int iVar4;
  unsigned int uVar5;
  __int64 lVar6;

  lVar6 = 0;
  if ((*(unsigned int *)(param_1 + 0xcc) & 4) != 0) {
    fn_82968960();
    uVar5 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        *(unsigned int *)(param_1 + 0x100) = uVar5;
        puVar1 = *(unsigned int **)(iVar4 + *(int *)(param_1 + 0x18));
        *(unsigned int **)(param_1 + 0x104) = puVar1;
        if ((*puVar1 & 0xfff00000) == 0x10000000) {
          fn_8294C7E0(param_1);
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < *(unsigned int *)(param_1 + 0xc));
    }
    fn_8296D7F0(param_1);
  }
  if ((*(unsigned int *)(param_1 + 0xcc) & 4) == 0) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        *(unsigned int *)(param_1 + 0x100) = uVar5;
        puVar1 = *(unsigned int **)(iVar4 + *(int *)(param_1 + 0x18));
        *(unsigned int **)(param_1 + 0x104) = puVar1;
        uVar2 = *puVar1 & 0xfff00000;
        if (uVar2 == 0x10100000) {
          lVar6 = fn_8294B7A8(param_1,1);
LAB_82992ec0:
          if ((int)lVar6 < 0) {
            return lVar6;
          }
        }
        else {
          if (((uVar2 == 0x20000000) || (uVar2 == 0x20100000)) || (uVar2 == 0x30000000)) {
            lVar6 = fn_82956318(param_1);
            fn_8294B7A8(param_1);
            goto LAB_82992ec0;
          }
          lVar6 = 1;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < *(unsigned int *)(param_1 + 0xc));
    }
    uVar5 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        *(unsigned int *)(param_1 + 0x100) = uVar5;
        puVar1 = *(unsigned int **)(iVar4 + *(int *)(param_1 + 0x18));
        *(unsigned int **)(param_1 + 0x104) = puVar1;
        if ((*puVar1 & 0xfff00000) == 0x30000000) {
          if ((int)lVar6 < 0) {
            return lVar6;
          }
          lVar6 = fn_8294C890(param_1,0,0,0);
          if (lVar6 < 0) {
            return lVar6;
          }
          lVar6 = fn_8294CF28(param_1,0,0,0);
          if (lVar6 < 0) {
            return lVar6;
          }
        }
        else {
          lVar6 = 1;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < *(unsigned int *)(param_1 + 0xc));
    }
    lVar6 = fn_8296E438(param_1);
    if (lVar6 < 0) {
      return lVar6;
    }
    fn_8294B7A8(param_1);
    uVar5 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        *(unsigned int *)(param_1 + 0x100) = uVar5;
        puVar1 = *(unsigned int **)(iVar4 + *(int *)(param_1 + 0x18));
        *(unsigned int **)(param_1 + 0x104) = puVar1;
        uVar2 = *puVar1 & 0xfff00000;
        if ((uVar2 == 0x20000000) || (uVar2 == 0x70b00000)) {
          lVar6 = fn_82956318(param_1);
          fn_8294B7A8(param_1);
          if ((int)lVar6 < 0) {
            return lVar6;
          }
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < *(unsigned int *)(param_1 + 0xc));
    }
    uVar5 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        *(unsigned int *)(param_1 + 0x100) = uVar5;
        puVar1 = *(unsigned int **)(iVar4 + *(int *)(param_1 + 0x18));
        *(unsigned int **)(param_1 + 0x104) = puVar1;
        uVar2 = *puVar1 & 0xfff00000;
        if (uVar2 == 0x10500000) {
          lVar6 = fn_8294C648(param_1);
LAB_829930b8:
          if ((int)lVar6 < 0) {
            return lVar6;
          }
        }
        else {
          if (uVar2 == 0x10f00000) {
            lVar6 = fn_8294DBD8(param_1);
            goto LAB_829930b8;
          }
          if (uVar2 == 0x20400000) {
            lVar3 = fn_82950DB8(param_1);
            lVar6 = 0;
            if (lVar3 != 0) {
              lVar6 = fn_82950E98(param_1,1);
            }
            goto LAB_829930b8;
          }
          if (uVar2 == 0x20500000) {
            lVar6 = fn_82950048(param_1);
            goto LAB_829930b8;
          }
          if (uVar2 == 0x30000000) {
            lVar3 = fn_82950DB8(param_1);
            lVar6 = 0;
            if (lVar3 != 0) {
              lVar6 = fn_8294DBD8(param_1);
            }
            goto LAB_829930b8;
          }
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < *(unsigned int *)(param_1 + 0xc));
    }
    lVar6 = fn_8296E438(param_1);
    if (lVar6 < 0) {
      return lVar6;
    }
    fn_8294B7A8(param_1);
    uVar5 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        *(unsigned int *)(param_1 + 0x100) = uVar5;
        puVar1 = *(unsigned int **)(iVar4 + *(int *)(param_1 + 0x18));
        *(unsigned int **)(param_1 + 0x104) = puVar1;
        uVar2 = *puVar1 & 0xfff00000;
        if (uVar2 == 0x20500000) {
          lVar6 = fn_829501E8(param_1);
LAB_82993180:
          if ((int)lVar6 < 0) {
            return lVar6;
          }
        }
        else {
          if (uVar2 == 0x50000000) {
            lVar6 = fn_8294DF88(param_1);
            goto LAB_82993180;
          }
          if (uVar2 == 0x70300000) {
            lVar6 = fn_8294E2C8(param_1,0);
            goto LAB_82993180;
          }
          if ((uVar2 == 0x73500000) || (uVar2 == 0x73600000)) {
            lVar6 = fn_82950808(param_1);
            goto LAB_82993180;
          }
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < *(unsigned int *)(param_1 + 0xc));
    }
    fn_8294B7A8(param_1);
    uVar5 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        *(unsigned int *)(param_1 + 0x100) = uVar5;
        puVar1 = *(unsigned int **)(iVar4 + *(int *)(param_1 + 0x18));
        *(unsigned int **)(param_1 + 0x104) = puVar1;
        if ((*puVar1 & 0xfff00000) == 0x70300000) {
          fn_82957790(param_1);
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < *(unsigned int *)(param_1 + 0xc));
    }
    fn_8294B7A8(param_1);
    uVar5 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        *(unsigned int *)(param_1 + 0x100) = uVar5;
        puVar1 = *(unsigned int **)(iVar4 + *(int *)(param_1 + 0x18));
        *(unsigned int **)(param_1 + 0x104) = puVar1;
        uVar2 = *puVar1 & 0xfff00000;
        if (uVar2 == 0x70300000) {
          lVar6 = fn_8294E2C8(param_1,0);
LAB_82993274:
          if ((int)lVar6 < 0) {
            return lVar6;
          }
        }
        else if ((((uVar2 == 0x73500000) || (uVar2 == 0x73600000)) || (uVar2 == 0x73700000)) ||
                (uVar2 == 0x73800000)) {
          lVar6 = fn_8294E2C8(param_1);
          goto LAB_82993274;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < *(unsigned int *)(param_1 + 0xc));
    }
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar4 = 0;
    do {
      *(unsigned int *)(param_1 + 0x100) = uVar5;
      puVar1 = *(unsigned int **)(iVar4 + *(int *)(param_1 + 0x18));
      *(unsigned int **)(param_1 + 0x104) = puVar1;
      if (((*puVar1 & 0xfff00000) == 0x50300000) && (lVar6 = fn_8294BDC8(param_1), lVar6 < 0)) {
        return lVar6;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < *(unsigned int *)(param_1 + 0xc));
  }
  lVar6 = fn_8296E438(param_1);
  if (((-1 < lVar6) && (lVar6 = fn_8296EB38(param_1), -1 < lVar6)) &&
     ((lVar6 = fn_82969030(param_1), -1 < lVar6 &&
      (lVar6 = fn_82971580(param_1), -1 < lVar6)))) {
    fn_8294B7A8(param_1);
    lVar6 = 0;
  }
  return lVar6;
}
