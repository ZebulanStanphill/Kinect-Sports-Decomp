extern unsigned int *auStack_70;
extern int fn_82631E78();
extern int fn_82634898();
extern int fn_82F68CC0();
extern unsigned int iStack_58;
extern unsigned int lbl_831E798C;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_826344A8(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  int *piVar12;
  unsigned int uVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned int *puVar17;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int auStack_70 [3];
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  int iStack_58;
  
  uVar1 = param_3[1] + 0x1f & 0xffffffe0;
  uVar8 = param_1[0x1c];
  uVar13 = param_1[0x19];
  param_3[1] = uVar1;
  uVar2 = uVar8 + 1 >> 1;
  lVar14 = ((unsigned __int64)uVar13 + (unsigned __int64)uVar2 + 1) * 0xc;
  if (param_3[2] == 0) {
    fn_82631E78(param_3,0,lVar14);
  }
  else {
    *param_2 = uVar1;
    param_2[1] = (unsigned int)lVar14;
    uVar13 = param_3[1];
    uVar9 = (unsigned __int64)uVar13 + lVar14;
    param_3[1] = (unsigned int)uVar9;
    if ((unsigned __int64)param_3[3] < (uVar9 & 0xffffffff)) {
      param_3[3] = (unsigned int)uVar9;
    }
    uVar16 = 0;
    uVar6 = param_3[2] - uVar9;
    iVar3 = 0;
    lVar4 = uVar9 + (uVar9 <= param_3[2]);
    uVar15 = uVar9 - lVar4 & (unsigned __int64)uVar13 + (unsigned __int64)*param_3;
    uVar9 = uVar15;
    if (uVar8 != 0) {
      lVar10 = (unsigned __int64)(uVar8 - 1 >> 1) + 1;
      lVar5 = (unsigned __int64)(unsigned int)param_1[0x1b] - 8;
      do {
        uVar6 = *(unsigned __int64 *)((int)lVar5 + 8);
        lVar4 = lVar5 + 8;
        uStack_7c = (unsigned int)uVar6;
        uStack_80 = (unsigned int)(uVar6 >> 0x20);
        uVar13 = uStack_80;
        if ((1 << (uStack_7c >> 0xc & 0xf) & 0x607eU) != 0) {
          uVar13 = uStack_80 & 0xfffff000 | uStack_80 + uVar2 & 0xfff;
        }
        if (iVar3 + 1U < uVar8) {
          lVar4 = lVar5 + 0x10;
          uVar11 = *(unsigned __int64 *)lVar4;
          uStack_7c = (unsigned int)uVar11;
          uVar7 = uVar11 & 0xffffffff;
          uStack_80 = (unsigned int)(uVar11 >> 0x20);
          if ((1 << (uStack_7c >> 0xc & 0xf) & 0x607eU) == 0) {
            uVar11 = (unsigned __int64)uStack_80;
          }
          else {
            uVar11 = (unsigned __int64)uStack_80 & 0xfffff000 |
                     (unsigned __int64)uStack_80 + (unsigned __int64)uVar2 & 0xffffffff00000fff;
          }
        }
        else {
          uVar11 = 0;
          uVar7 = 0;
        }
        puVar17 = (unsigned int *)uVar9;
        *puVar17 = uVar13;
        uVar6 = (uVar11 & 0xffff) << 0x10 | uVar6 & 0xffff;
        puVar17[1] = (unsigned int)uVar6;
        iVar3 = iVar3 + 2;
        puVar17[2] = (unsigned int)(uVar11 >> 0x10) & 0xffff | (unsigned int)(uVar7 << 0x10);
        uVar9 = uVar9 + 0xc;
        lVar10 = lVar10 + -1;
        lVar5 = lVar4;
      } while (lVar10 != 0);
    }
    fn_82F68CC0(uVar9,param_1[0x18],(unsigned __int64)(unsigned int)param_1[0x19] * 0xc,lVar4,uVar8,uVar6);
    param_1[0x40] = (int)uVar15;
    param_1[0x41] = (int)uVar9;
    piVar12 = (int *)(param_1[0x19] * 0xc + (int)uVar9);
    param_1[0x42] = (int)piVar12;
    *piVar12 = param_1[0x55];
    piVar12[1] = param_1[0x56];
    piVar12[2] = param_1[0x57];
    param_2[1] = (unsigned int)lVar14;
    auStack_70[2] = *(unsigned int *)(*param_1 + 0x4db4) >> 2 & 1;
    auStack_70[0] = 0;
    auStack_70[1] = 0xffffffff;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    iStack_58 = 0;
    fn_82634898(param_1,1,1,0xffffffff82634238,auStack_70);
    if (iStack_58 != 0) {
      *(unsigned int *)(*param_1 + 0x4df0) = 1;
    }
    uVar9 = 0;
    param_2[4] = auStack_70[0];
    uVar8 = *(unsigned int *)(*param_1 + 0x4db4);
    if (((uVar8 >> 3 & 1) != 0) && (uVar9 = 0x20000, (uVar8 >> 2 & 1) == 0)) {
      uVar9 = 0x40000;
    }
    uVar13 = 0;
    if ((uVar8 >> 2 & 1) == 0) {
      puVar17 = (unsigned int *)param_1[0x4c];
      uVar9 = ((unsigned __int64)(unsigned int)param_1[0x4d] & 0x1f) << 5 | uVar9;
      uVar8 = (unsigned int)uVar9;
      if ((param_1[0x4d] & 0x1fU) != 0) {
        do {
          uVar8 = 1 << (*puVar17 >> 8 & 0xf) & 0xffffU | uVar13;
          uVar6 = (unsigned __int64)(unsigned char)(&lbl_831E798C)[*puVar17 >> 0xc & 0xf] * 0x400 + uVar9 & 0x1fc00;
          uVar15 = uVar9 & 0xfffe03ff | uVar6;
          if (uVar8 != uVar13) {
            uVar15 = uVar9 & 0xfffe03e0 | uVar6 | uVar15 + 1 & 0xffffffff0000001f;
            uVar13 = uVar8;
          }
          uVar8 = (unsigned int)uVar15;
          uVar16 = uVar16 + 1;
          puVar17 = puVar17 + 1;
          uVar9 = uVar15;
        } while ((uVar16 & 0xffffffff) < (uVar15 >> 5 & 0x1f));
      }
    }
    else {
      puVar17 = (unsigned int *)param_1[0x43];
      uVar9 = ((unsigned __int64)(unsigned int)param_1[0x44] & 0x1f) << 5 | uVar9;
      uVar8 = (unsigned int)uVar9;
      if ((param_1[0x44] & 0x1fU) != 0) {
        do {
          uVar8 = 1 << (*puVar17 >> 0x14 & 0xf) & 0xffffU | uVar13;
          uVar6 = (unsigned __int64)(unsigned char)(&lbl_831E798C)[*puVar17 >> 0x10 & 0xf] * 0x400 + uVar9 & 0x1fc00
          ;
          uVar15 = uVar9 & 0xfffe03ff | uVar6;
          if (uVar8 != uVar13) {
            uVar15 = uVar9 & 0xfffe03e0 | uVar6 | uVar15 + 1 & 0xffffffff0000001f;
            uVar13 = uVar8;
          }
          uVar8 = (unsigned int)uVar15;
          uVar16 = uVar16 + 1;
          puVar17 = puVar17 + 1;
          uVar9 = uVar15;
        } while ((uVar16 & 0xffffffff) < (uVar15 >> 5 & 0x1f));
      }
    }
    param_2[5] = uVar8;
    uVar9 = ~(unsigned __int64)*(unsigned int *)(*param_1 + 0x4db4);
    if ((*(unsigned int *)(*param_1 + 0x4db4) >> 2 & 1) == 0) {
      uVar9 = (uVar9 & 0xffffffff) >> 7 & 1;
      if (uVar9 == 0) {
        uStack_60 = *(unsigned short *)(param_1 + 0x16) & 1;
      }
      uVar8 = (uStack_60 & 1) << 0x10 | param_1[0x16] & 0x87f00000U;
      if (uVar9 == 0) {
        uStack_5c = (unsigned int)param_1[0x17] >> 0x12 & 1;
      }
      uVar13 = (uStack_5c & 1) << 0x12;
    }
    else {
      if (((uVar9 & 0xffffffff) >> 7 & 1) == 0) {
        uStack_60 = (unsigned int)param_1[0x16] >> 0x11 & 1;
      }
      uVar8 = (uStack_60 & 1) << 0x11 | param_1[0x16] & 0x780c0000U;
      uVar13 = (param_1[0x54] & 3U) << 2 | param_1[0x17] & 0xff02U;
    }
    param_2[2] = uVar8;
    param_2[3] = uVar13;
  }
  return;
}

