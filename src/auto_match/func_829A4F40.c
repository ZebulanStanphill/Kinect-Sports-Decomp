typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8265C940();
extern int fn_8294B7A8();
extern int fn_8294D3A8();
extern int fn_82950048();
extern int fn_82951540();
extern int fn_82956318();
extern int fn_82957790();
extern int fn_82957DF8();
extern int fn_829597C8();
extern int fn_829598F0();
extern int fn_82959CA0();
extern int fn_82959E40();
extern int fn_8295A028();
extern int fn_8295A108();
extern int fn_82964588();
extern int fn_82964628();
extern int fn_8296E438();
extern int fn_82975B00();
extern int fn_82996B40();
extern int fn_82996C58();
extern int fn_82997208();
extern int fn_82997370();
extern int fn_829975C8();
extern int fn_829978F8();
extern int fn_82997B30();
extern int fn_82997F00();
extern int fn_82998500();
extern int fn_82998BB8();
extern int fn_829992D0();
extern int fn_82999808();
extern int fn_82999AD0();
extern int fn_82999EC0();
extern int fn_8299D770();
extern int fn_8299E598();
extern int fn_829A1818();
extern int fn_829A20D0();
extern int fn_829A2C90();
extern int fn_829A3388();
extern int fn_829A4190();
extern int fn_82F691F0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


__int64 fn_829A4F40(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  int *piVar5;
  bool bVar6;
  unsigned __int64 uVar7;
  unsigned int uVar9;
  __int64 lVar8;
  int iVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  
  uVar7 = fn_82964588(param_1,0xffffffff8201261c,0x311,1,4);
  uVar9 = fn_82964628(lbl_82005710,param_1,uVar7,0,0);
  *(unsigned int *)(param_1 + 0x444) = uVar9;
  uVar9 = fn_82964628(lbl_82005758,param_1,uVar7,0,1);
  *(unsigned int *)(param_1 + 0x448) = uVar9;
  *(unsigned int *)(param_1 + 0x450) = 0;
  if (*(short *)(param_1 + 0xca) == 0x104) {
    uVar12 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar10 = 0;
      do {
        *(unsigned int *)(param_1 + 0x100) = uVar12;
        puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar10);
        *(unsigned int **)(param_1 + 0x104) = puVar2;
        if (((*puVar2 & 0xfff00000) == 0x60700000) && (lVar8 = fn_82996C58(param_1), lVar8 < 0))
        {
          return lVar8;
        }
        uVar12 = uVar12 + 1;
        iVar10 = iVar10 + 4;
      } while (uVar12 < *(unsigned int *)(param_1 + 0xc));
    }
    fn_8294B7A8(param_1);
    fn_8296E438(param_1);
  }
  bVar6 = false;
  uVar12 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar10 = 0;
    do {
      uVar13 = 0;
      puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar10);
      *(unsigned int **)(param_1 + 0x104) = puVar2;
      if (puVar2[1] != 0) {
        iVar11 = 0;
        do {
          iVar3 = *(int *)(*(int *)(puVar2[2] + iVar11) * 4 + *(int *)(param_1 + 0x14));
          uVar1 = *(unsigned int *)(*(int *)(*(int *)(iVar3 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4);
          if ((((((uVar1 & 0x10) != 0) && ((uVar1 & 0x200) == 0)) && (*(int *)(iVar3 + 0x10) == 3))
              && (*(char *)(iVar3 + 0x6f) == '\x03')) &&
             (((*puVar2 & 0xfff00000) != 0x60700000 || (iVar11 != 0x1c)))) {
            bVar6 = true;
            fn_82975B00(param_1,puVar2[0xf],0x11a0,0xffffffff82051b18,
                              *(unsigned char *)(param_1 + 0xcb));
            break;
          }
          uVar13 = uVar13 + 1;
          iVar11 = iVar11 + 4;
        } while (uVar13 < *(unsigned int *)(*(int *)(param_1 + 0x104) + 4));
      }
      uVar13 = **(unsigned int **)(param_1 + 0x104) & 0xfff00000;
      if (((uVar13 == 0x60600000) || (uVar13 == 0x60b00000)) ||
         ((uVar13 == 0x60100000 || (uVar13 == 0x61000000)))) {
        fn_82975B00(param_1,(*(unsigned int **)(param_1 + 0x104))[0xf],0x11b4,0xffffffff82034330);
        bVar6 = true;
      }
      uVar12 = uVar12 + 1;
      iVar10 = iVar10 + 4;
    } while (uVar12 < *(unsigned int *)(param_1 + 0xc));
    if (bVar6) {
      return -0x7fffbffb;
    }
  }
  uVar12 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar10 = 0;
    do {
      *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x14) + iVar10) + 0x38) = 0xffffffff;
      puVar4 = *(unsigned int **)(*(int *)(param_1 + 0x14) + iVar10);
      if (puVar4[1] == *(int *)(param_1 + 0x80)) {
        if (*(char *)((int)puVar4 + 0x6f) == '\x01') {
          *puVar4 = 0x14;
        }
        if ((*(unsigned short *)(param_1 + 0xca) < 0x104) &&
           (puVar4 = *(unsigned int **)(*(int *)(param_1 + 0x14) + iVar10),
           *(char *)((int)puVar4 + 0x6f) == '\x03')) {
          *puVar4 = 0x14;
        }
      }
      uVar12 = uVar12 + 1;
      iVar10 = iVar10 + 4;
    } while (uVar12 < *(unsigned int *)(param_1 + 8));
  }
  uVar12 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar10 = 0;
    do {
      *(unsigned int *)(param_1 + 0x100) = uVar12;
      puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar10);
      *(unsigned int **)(param_1 + 0x104) = puVar2;
      uVar13 = *puVar2 & 0xfff00000;
      if (((((uVar13 == 0x60000000) || (uVar13 == 0x60500000)) || (uVar13 == 0x60a00000)) ||
          (uVar13 == 0x60f00000)) && (uVar13 = 0, puVar2[3] != 0)) {
        iVar11 = 0;
        do {
          uVar13 = uVar13 + 1;
          piVar5 = (int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar11);
          iVar11 = iVar11 + 4;
          **(unsigned int **)(*piVar5 * 4 + *(int *)(param_1 + 0x14)) = 0x14;
        } while (uVar13 < *(unsigned int *)(*(int *)(param_1 + 0x104) + 0xc));
      }
      uVar12 = uVar12 + 1;
      iVar10 = iVar10 + 4;
      *(unsigned int *)(*(int *)(param_1 + 0x104) + 0x24) = 0;
    } while (uVar12 < *(unsigned int *)(param_1 + 0xc));
  }
  uVar12 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar10 = 0;
    do {
      *(unsigned int *)(param_1 + 0x100) = uVar12;
      puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar10);
      *(unsigned int **)(param_1 + 0x104) = puVar2;
      uVar13 = *puVar2 & 0xfff00000;
      if ((((uVar13 == 0x20000000) || (uVar13 == 0x20100000)) || (uVar13 == 0x30000000)) &&
         (lVar8 = fn_82956318(param_1), (int)lVar8 < 0)) {
        return lVar8;
      }
      uVar12 = uVar12 + 1;
      iVar10 = iVar10 + 4;
    } while (uVar12 < *(unsigned int *)(param_1 + 0xc));
  }
  uVar12 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar10 = 0;
    do {
      *(unsigned int *)(param_1 + 0x100) = uVar12;
      puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar10);
      *(unsigned int **)(param_1 + 0x104) = puVar2;
      if (((*puVar2 & 0xfff00000) == 0x30000000) && (lVar8 = fn_82999AD0(param_1), lVar8 < 0)) {
        return lVar8;
      }
      uVar12 = uVar12 + 1;
      iVar10 = iVar10 + 4;
    } while (uVar12 < *(unsigned int *)(param_1 + 0xc));
  }
  uVar12 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar10 = 0;
    do {
      *(unsigned int *)(param_1 + 0x100) = uVar12;
      puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar10);
      *(unsigned int **)(param_1 + 0x104) = puVar2;
      uVar13 = *puVar2 & 0xfff00000;
      if (uVar13 == 0x10000000) {
        lVar8 = fn_82997208(param_1);
LAB_829a53fc:
        if ((int)lVar8 < 0) {
          return lVar8;
        }
      }
      else if (uVar13 == 0x10100000) {
        lVar8 = fn_82997370(param_1);
        goto LAB_829a53fc;
      }
      uVar12 = uVar12 + 1;
      iVar10 = iVar10 + 4;
    } while (uVar12 < *(unsigned int *)(param_1 + 0xc));
  }
  fn_8294B7A8(param_1);
  uVar12 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar10 = 0;
    do {
      *(unsigned int *)(param_1 + 0x100) = uVar12;
      puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar10);
      *(unsigned int **)(param_1 + 0x104) = puVar2;
      uVar13 = *puVar2 & 0xfff00000;
      if (uVar13 == 0x10100000) {
        fn_829597C8(param_1,0);
LAB_829a54c8:
        lVar8 = fn_8295A028(param_1);
LAB_829a54d0:
        if ((int)lVar8 < 0) {
          return lVar8;
        }
      }
      else {
        if (uVar13 == 0x20400000) {
          fn_8295A108(param_1);
          fn_829598F0(param_1);
          fn_82959E40(param_1,0);
          lVar8 = fn_82959CA0(param_1);
          goto LAB_829a54d0;
        }
        if (uVar13 == 0x20500000) {
          fn_82959CA0(param_1);
          goto LAB_829a54c8;
        }
        if (uVar13 == 0x50000000) {
          lVar8 = fn_8294D3A8(param_1);
          goto LAB_829a54d0;
        }
      }
      uVar12 = uVar12 + 1;
      iVar10 = iVar10 + 4;
    } while (uVar12 < *(unsigned int *)(param_1 + 0xc));
  }
  fn_8294B7A8(param_1);
  uVar12 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar10 = 0;
    do {
      *(unsigned int *)(param_1 + 0x100) = uVar12;
      puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar10);
      *(unsigned int **)(param_1 + 0x104) = puVar2;
      uVar13 = *puVar2 & 0xfff00000;
      if (((uVar13 == 0x20400000) || (uVar13 == 0x20500000)) &&
         (lVar8 = fn_829A2C90(param_1), (int)lVar8 < 0)) {
        return lVar8;
      }
      uVar12 = uVar12 + 1;
      iVar10 = iVar10 + 4;
    } while (uVar12 < *(unsigned int *)(param_1 + 0xc));
  }
  fn_8294B7A8(param_1);
  uVar12 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar10 = 0;
    do {
      *(unsigned int *)(param_1 + 0x100) = uVar12;
      puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar10);
      *(unsigned int **)(param_1 + 0x104) = puVar2;
      if ((*puVar2 & 0xfff00000) == 0x60f00000) {
        lVar8 = fn_829992D0(param_1,1);
        if (lVar8 < 0) {
          return lVar8;
        }
        lVar8 = fn_829992D0(param_1,0);
        if (lVar8 < 0) {
          return lVar8;
        }
      }
      uVar12 = uVar12 + 1;
      iVar10 = iVar10 + 4;
    } while (uVar12 < *(unsigned int *)(param_1 + 0xc));
  }
  fn_8294B7A8(param_1);
  uVar12 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar10 = 0;
    do {
      *(unsigned int *)(param_1 + 0x100) = uVar12;
      puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar10);
      *(unsigned int **)(param_1 + 0x104) = puVar2;
      if (((*puVar2 & 0xfff00000) == 0x20400000) && (lVar8 = fn_82999EC0(param_1), lVar8 < 0))
      {
        return lVar8;
      }
      uVar12 = uVar12 + 1;
      iVar10 = iVar10 + 4;
    } while (uVar12 < *(unsigned int *)(param_1 + 0xc));
  }
  fn_8294B7A8(param_1);
  uVar12 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar10 = 0;
    do {
      *(unsigned int *)(param_1 + 0x100) = uVar12;
      puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar10);
      *(unsigned int **)(param_1 + 0x104) = puVar2;
      uVar13 = *puVar2 & 0xfff00000;
      if (uVar13 == 0x20500000) {
        lVar8 = fn_82950048(param_1);
LAB_829a569c:
        if ((int)lVar8 < 0) {
          return lVar8;
        }
      }
      else if (uVar13 == 0x70300000) {
        fn_82957790(param_1);
        lVar8 = fn_82951540(param_1,0);
        goto LAB_829a569c;
      }
      uVar12 = uVar12 + 1;
      iVar10 = iVar10 + 4;
    } while (uVar12 < *(unsigned int *)(param_1 + 0xc));
  }
  uVar12 = *(unsigned int *)(param_1 + 0xc);
  uVar13 = 0;
  if (uVar12 != 0) {
    iVar10 = 0;
    do {
      *(unsigned int *)(param_1 + 0x100) = uVar13;
      *(unsigned int *)(param_1 + 0x104) = *(unsigned int *)(*(int *)(param_1 + 0x18) + iVar10);
      lVar8 = fn_82998BB8(param_1);
      if (lVar8 < 0) {
        return lVar8;
      }
      uVar13 = uVar13 + 1;
      iVar10 = iVar10 + 4;
    } while (uVar13 < uVar12);
  }
  fn_8294B7A8(param_1);
  lVar8 = fn_82957DF8(param_1);
  if (lVar8 < 0) {
    return lVar8;
  }
  lVar8 = fn_82999808(param_1);
  if (lVar8 < 0) {
    return lVar8;
  }
  lVar8 = fn_82997B30(param_1);
  if (lVar8 < 0) {
    return lVar8;
  }
  if ((*(unsigned int *)(param_1 + 200) & 0xffff) == 0x104) {
    iVar10 = fn_8265C940(0x800,0x24810000);
    *(int *)(param_1 + 0x230) = iVar10;
    if (iVar10 != 0) {
      iVar10 = fn_8265C940(0x800,0x24810000);
      *(int *)(param_1 + 0x234) = iVar10;
      if (iVar10 != 0) {
        *(unsigned int *)(param_1 + 0x228) = 0;
        *(unsigned int *)(param_1 + 0x224) = 0;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(unsigned int *)(param_1 + 0x230),0,0x800);
      }
    }
    return -0x7ff8fff2;
  }
  if (0x80 < *(unsigned int *)(param_1 + 0xc)) {
    fn_82975B00(param_1,0,0x1194,0xffffffff82051a6c,*(unsigned int *)(param_1 + 200) & 0xff);
    return -0x7fffbffb;
  }
  lVar8 = fn_829A3388(param_1);
  if (lVar8 < 0) {
    return lVar8;
  }
  if ((*(int *)(param_1 + 0x230) != 0) && (lVar8 = fn_829978F8(param_1), lVar8 < 0)) {
    return lVar8;
  }
  if (((*(int *)(param_1 + 0x230) != 0) && (*(short *)(param_1 + 0xca) != 0x104)) &&
     (lVar8 = fn_829A4190(param_1), lVar8 < 0)) {
    return lVar8;
  }
  if ((*(int *)(param_1 + 0x234) != 0) && (*(short *)(param_1 + 0xca) != 0x104)) {
    lVar8 = fn_82997F00(param_1);
    if (lVar8 < 0) {
      return lVar8;
    }
    lVar8 = fn_829A20D0(param_1);
    if (lVar8 < 0) {
      return lVar8;
    }
    lVar8 = fn_82998500(param_1);
    if (lVar8 < 0) {
      return lVar8;
    }
  }
  *(unsigned int *)(param_1 + 0xdc) = 0;
  lVar8 = fn_8299E598(param_1,0,0);
  if (lVar8 < 0) {
    return lVar8;
  }
  *(unsigned int *)(param_1 + 0xdc) = 1;
  lVar8 = fn_8299D770(param_1);
  if (lVar8 < 0) {
    return lVar8;
  }
  lVar8 = fn_829A1818(param_1,*(unsigned int *)(param_1 + 0x230),0,*(unsigned int *)(param_1 + 0x224),
                        0);
  if (lVar8 < 0) {
    return lVar8;
  }
  lVar8 = fn_829A1818(param_1,*(unsigned int *)(param_1 + 0x234),0,*(unsigned int *)(param_1 + 0x228),
                        0);
  if (lVar8 < 0) {
    return lVar8;
  }
  lVar8 = fn_829975C8(param_1);
  if (lVar8 < 0) {
    return lVar8;
  }
  if (((*(int *)(param_1 + 0x234) != 0) && (*(short *)(param_1 + 0xca) != 0x104)) &&
     (lVar8 = fn_82996B40(param_1), lVar8 < 0)) {
    return lVar8;
  }
  return 0;
}

