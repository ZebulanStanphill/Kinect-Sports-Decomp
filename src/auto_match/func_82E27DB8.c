#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82E25E88();
extern int fn_82E25F80();
extern int fn_82E26138();
extern int fn_82E26360();
extern int fn_82E26630();
extern int fn_82E26C90();
extern unsigned int lbl_8208E054;
extern unsigned int lbl_8208E058;
extern unsigned int lbl_8208E05C;
extern unsigned int lbl_83187510;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__int64 fn_82E27DB8(int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int param_4,int param_5)

{
  unsigned short uVar1;
  int iVar4;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned int auStack_b0 [4];
  unsigned char auStack_a0 [4];
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned char auStack_90 [4];
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  
  auStack_b0[0] = 0;
  iVar10 = 0;
  iVar12 = 0;
  uVar13 = 0;
  uVar16 = 0;
  puVar9 = (unsigned int *)0x0;
  iVar11 = 0;
  lVar14 = 0x28;
  if (param_4 < *param_3) {
    return -0x7ff8ffa9;
  }
  if (param_5 == 0) {
LAB_82e27e58:
    lVar3 = fn_82E26C90(param_3,param_4,auStack_b0,0);
    if (lVar3 < 0) {
      return lVar3;
    }
    uVar2 = (unsigned __int64)auStack_b0[0];
    if (uVar2 != 0) goto LAB_82e27e80;
    if (param_5 == 0) {
      return -0x7ff8ffa9;
    }
    uStack_8c = *(unsigned int *)(param_5 + 4);
    uStack_88 = *(unsigned int *)(param_5 + 8);
    uStack_84 = *(unsigned int *)(param_5 + 0xc);
  }
  else {
    iVar4 = fn_82E25E88(auStack_a0,param_5);
    uStack_8c = *(unsigned int *)(iVar4 + 4);
    uStack_88 = *(unsigned int *)(iVar4 + 8);
    uStack_84 = *(unsigned int *)(iVar4 + 0xc);
    uVar2 = fn_82E25F80(auStack_90);
    auStack_b0[0] = (unsigned int)uVar2;
    if (uVar2 == 0) goto LAB_82e27e58;
LAB_82e27e80:
    uStack_94 = lbl_8208E05C;
    uStack_9c = lbl_8208E054;
    uStack_98 = lbl_8208E058;
    uStack_8c = lbl_8208E054;
    uStack_88 = lbl_8208E058;
    uStack_84 = lbl_8208E05C;
    if (param_3[4] == 3) {
      if ((*(short *)((int)param_3 + 0xe) != 0x10) && (*(short *)((int)param_3 + 0xe) != 0x20)) {
        return -0x3ff2c94c;
      }
      lVar14 = 0x34;
    }
  }
  lVar3 = (**(int (***)())(*param_1 + 0x60))(param_1,0xffffffff82153488,auStack_90);
  if (lVar3 < 0) {
    return lVar3;
  }
  uVar1 = *(unsigned short *)((int)param_3 + 0xe);
  if ((uVar1 < 9) && (uVar1 != 0)) {
    if ((param_3[4] == 0) && (param_3[8] == 0)) {
      uVar5 = 0;
      uVar6 = 1 << (uVar1 & 0x3f);
    }
    else {
      uVar5 = param_3[8];
      uVar6 = uVar5;
    }
    if (uVar6 == 0) goto LAB_82e27ff0;
    if (0x100 < uVar6) {
      return -0x3ff2c94c;
    }
    iVar12 = uVar6 * 4;
    iVar11 = *param_3 + (int)param_3;
    if (param_4 < *param_3 + iVar12) {
      if (uVar5 != 0) {
        return -0x3ff2c94c;
      }
      iVar12 = 0;
      iVar11 = 0;
      goto LAB_82e27ff0;
    }
    if (iVar12 == 0) goto LAB_82e27ff0;
  }
  else {
LAB_82e27ff0:
    if ((lVar14 == 0x28) && ((uVar5 = *param_3, 0x28 < uVar5 || (uVar5 = param_4, 0x28 < param_4))))
    {
      iVar10 = uVar5 - 0x28;
      puVar9 = param_3 + 10;
    }
  }
  uVar5 = param_3[1];
  if (uVar5 != 0) {
    uVar6 = param_3[2];
    if (uVar6 != 0) {
      uVar17 = (unsigned __int64)param_2[2] - (unsigned __int64)*param_2;
      uVar7 = ((unsigned __int64)uVar6 ^ (__int64)((int)uVar6 >> 0x1f)) - (__int64)((int)uVar6 >> 0x1f);
      uVar15 = (unsigned __int64)param_2[3] - (unsigned __int64)param_2[1];
      uVar13 = uVar7;
      uVar16 = (unsigned __int64)uVar5;
      if (((uVar17 != 0) && ((uVar15 & 0xffffffff) != 0)) &&
         ((*param_2 != 0 ||
          (((param_2[1] != 0 || ((uVar17 & 0xffffffff) != (unsigned __int64)uVar5)) ||
           (uVar13 = uVar15, uVar16 = uVar17, (uVar15 & 0xffffffff) != (unsigned __int64)uVar6)))))) {
        lVar14 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff82153678,1);
        if (lVar14 < 0) {
          return lVar14;
        }
        uStack_98 = (unsigned int)uVar17;
        uStack_94 = (unsigned int)uVar15;
        uStack_9c = CONCAT22((((unsigned __int64)(uStack_9c) >> 0) & 0xFFFF),(short)param_2[1]);
        lVar14 = (**(int (***)())(*param_1 + 0x68))(param_1,0xffffffff82153668,auStack_a0,0x10);
        if (lVar14 < 0) {
          return lVar14;
        }
        lVar14 = (**(int (***)())(*param_1 + 0x68))(param_1,0xffffffff82153658,auStack_a0,0x10);
        if (lVar14 < 0) {
          return lVar14;
        }
        uVar5 = param_3[1];
        uVar13 = uVar7;
        uVar16 = (unsigned __int64)uVar5;
        if ((uVar5 == 0x300) && ((uVar17 & 0xffffffff) == 0x21c)) {
          uVar16 = 0x2d0;
        }
      }
      lVar3 = (**(int (***)())(*param_1 + 0x58))
                        (param_1,0xffffffff82153578,uVar16 << 0x20 | uVar13 & 0xffffffff);
      if (lVar3 < 0) {
        return lVar3;
      }
      if ((((uVar2 & 0xffffffff) != 0) &&
          (lVar14 = fn_82E26360(uVar2,param_3[1],param_3[2]), lVar14 != 0)) &&
         (lVar3 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff821536b8), lVar3 < 0)) {
        return lVar3;
      }
    }
  }
  uVar7 = 0;
  puVar8 = &lbl_83187510;
  do {
    if ((uVar2 & 0xffffffff) == (unsigned __int64)*puVar8) {
      lVar3 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff82153498,1);
      if (lVar3 < 0) {
        return lVar3;
      }
      break;
    }
    uVar7 = uVar7 + 0x24;
    puVar8 = puVar8 + 9;
  } while ((uVar7 & 0xffffffff) != 0x804);
  iVar4 = fn_82E26138(uVar2,0);
  if (iVar4 == 0) {
    uVar5 = param_3[5];
LAB_82e2827c:
    if (uVar5 == 0) goto LAB_82e282a8;
  }
  else {
    lVar3 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff821534a8,1);
    if (lVar3 < 0) {
      return lVar3;
    }
    if (param_3[5] == 0) {
      uVar5 = fn_82E26630(uVar2,uVar16,uVar13);
      goto LAB_82e2827c;
    }
  }
  lVar3 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff821534b8);
  if (lVar3 < 0) {
    return lVar3;
  }
LAB_82e282a8:
  if (((iVar12 == 0) ||
      (lVar3 = (**(int (***)())(*param_1 + 0x68))(param_1,0xffffffff821536c8,iVar11,iVar12), -1 < lVar3)
      ) && (iVar10 != 0)) {
    lVar3 = (**(int (***)())(*param_1 + 0x68))(param_1,0xffffffff821536d8,puVar9,iVar10);
  }
  return lVar3;
}

