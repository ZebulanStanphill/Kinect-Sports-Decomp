extern unsigned int *auStack_88;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E577A0();
extern unsigned int uStack_8a;
extern unsigned int uStack_8c;
extern unsigned int uStack_8e;
extern unsigned int uStack_90;


__int64 fn_82F3F698(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  unsigned short uVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  __int64 lVar16;
  int *piVar17;
  unsigned short uStack_90;
  unsigned short uStack_8e;
  unsigned short uStack_8c;
  unsigned short uStack_8a;
  unsigned short auStack_88;
  
  if (param_1[3] == 0) {
    return -0x3ff2c94a;
  }
  if (param_2 == (unsigned int *)0x0) {
    return -0x7ff8ffa9;
  }
  uVar1 = param_1[0x10];
  if ((unsigned __int64)uVar1 < 0x22) {
    uVar15 = 0x22;
LAB_82f3f6e8:
    *param_2 = uVar15;
    return -0x3ff2c94f;
  }
  piVar17 = param_1 + 10;
  uStack_90 = 0;
  uStack_8e = 0;
  uStack_8c = 0;
  uStack_8a = 0;
  auStack_88 = 0;
  fn_82E57620(param_1 + 4,piVar17);
  fn_82E576A8(param_1 + 8,piVar17);
  lVar7 = fn_82E57738(&uStack_90,piVar17);
  uVar2 = uStack_90;
  lVar16 = -0x3ff2c566;
  lVar8 = lVar16;
  if (lVar7 < 0) goto LAB_82f3fab8;
  uVar10 = (unsigned __int64)uStack_90;
  if ((uStack_90 & 1) != 0) goto LAB_82f3fac8;
  *(unsigned short *)(param_1 + 0x17) = uStack_90 >> 1;
  lVar7 = fn_82E57738(&uStack_8e,piVar17);
  uVar3 = uStack_8e;
  if (lVar7 < 0) goto LAB_82f3fab8;
  uVar11 = (unsigned __int64)uStack_8e;
  if ((uStack_8e & 1) != 0) goto LAB_82f3fac8;
  *(unsigned short *)((int)param_1 + 0x5e) = uStack_8e >> 1;
  lVar7 = fn_82E57738(&uStack_8c,piVar17);
  uVar4 = uStack_8c;
  if (lVar7 < 0) goto LAB_82f3fab8;
  uVar12 = (unsigned __int64)uStack_8c;
  if ((uStack_8c & 1) != 0) goto LAB_82f3fac8;
  *(unsigned short *)(param_1 + 0x18) = uStack_8c >> 1;
  lVar7 = fn_82E57738(&uStack_8a,piVar17);
  uVar5 = uStack_8a;
  if (lVar7 < 0) goto LAB_82f3fab8;
  uVar13 = (unsigned __int64)uStack_8a;
  if ((uStack_8a & 1) != 0) goto LAB_82f3fac8;
  *(unsigned short *)((int)param_1 + 0x62) = uStack_8a >> 1;
  lVar7 = fn_82E57738(&auStack_88,piVar17);
  uVar6 = auStack_88;
  if (lVar7 < 0) goto LAB_82f3fab8;
  uVar9 = (unsigned __int64)auStack_88;
  if ((auStack_88 & 1) != 0) goto LAB_82f3fac8;
  *(unsigned short *)(param_1 + 0x19) = auStack_88 >> 1;
  uVar14 = uVar9 + uVar13 + uVar12 + uVar11 + uVar10 + 0x22;
  uVar15 = (unsigned int)uVar14;
  if (uVar1 < uVar14) goto LAB_82f3f6e8;
  if (param_1[0x12] != 0) {
    fn_82E4FE40();
  }
  param_1[0x12] = 0;
  if (uVar10 == 0) {
LAB_82f3f8c8:
    if (param_1[0x13] != 0) {
      fn_82E4FE40();
    }
    param_1[0x13] = 0;
    if (uVar11 != 0) {
      uVar10 = uVar11 + 1 >> 1;
      uVar11 = uVar10 + 1;
      lVar8 = uVar11 * 2;
      if (0x7fffffff < uVar11) {
        lVar8 = -1;
      }
      uVar11 = fn_82E50BE8(lVar8,0,0,0,0);
      param_1[0x13] = (int)uVar11;
      if ((uVar11 & 0xffffffff) == 0) goto LAB_82f3f89c;
      lVar7 = fn_82E577A0(uVar11,piVar17,uVar3 >> 1);
      if (lVar7 < 0) goto LAB_82f3fab8;
      *(unsigned short *)((int)(uVar10 << 1) + param_1[0x13]) = 0;
    }
    if (param_1[0x14] != 0) {
      fn_82E4FE40();
    }
    param_1[0x14] = 0;
    if (uVar12 != 0) {
      uVar10 = uVar12 + 1 >> 1;
      uVar11 = uVar10 + 1;
      lVar8 = uVar11 * 2;
      if (0x7fffffff < uVar11) {
        lVar8 = -1;
      }
      uVar11 = fn_82E50BE8(lVar8,0,0,0,0);
      param_1[0x14] = (int)uVar11;
      if ((uVar11 & 0xffffffff) == 0) goto LAB_82f3f89c;
      lVar7 = fn_82E577A0(uVar11,piVar17,uVar4 >> 1);
      if (lVar7 < 0) goto LAB_82f3fab8;
      *(unsigned short *)((int)(uVar10 << 1) + param_1[0x14]) = 0;
    }
    if (param_1[0x15] != 0) {
      fn_82E4FE40();
    }
    param_1[0x15] = 0;
    if (uVar13 != 0) {
      uVar10 = uVar13 + 1 >> 1;
      uVar11 = uVar10 + 1;
      lVar8 = uVar11 * 2;
      if (0x7fffffff < uVar11) {
        lVar8 = -1;
      }
      uVar11 = fn_82E50BE8(lVar8,0,0,0,0);
      param_1[0x15] = (int)uVar11;
      if ((uVar11 & 0xffffffff) == 0) goto LAB_82f3f89c;
      lVar7 = fn_82E577A0(uVar11,piVar17,uVar5 >> 1);
      if (lVar7 < 0) goto LAB_82f3fab8;
      *(unsigned short *)((int)(uVar10 << 1) + param_1[0x15]) = 0;
    }
    if (param_1[0x16] != 0) {
      fn_82E4FE40();
    }
    param_1[0x16] = 0;
    if (uVar9 != 0) {
      uVar10 = uVar9 + 1 >> 1;
      uVar11 = uVar10 + 1;
      lVar8 = uVar11 * 2;
      if (0x7fffffff < uVar11) {
        lVar8 = -1;
      }
      uVar11 = fn_82E50BE8(lVar8,0,0,0,0);
      param_1[0x16] = (int)uVar11;
      if ((uVar11 & 0xffffffff) == 0) goto LAB_82f3f89c;
      lVar7 = fn_82E577A0(uVar11,piVar17,uVar6 >> 1);
      if (-1 < lVar7) {
        *(unsigned short *)((int)(uVar10 << 1) + param_1[0x16]) = 0;
      }
    }
LAB_82f3fab8:
    lVar8 = lVar7;
    if ((int)lVar7 == -0x3ff2c94f) {
      return lVar7;
    }
  }
  else {
    uVar10 = uVar10 + 1 >> 1;
    uVar14 = uVar10 + 1;
    lVar8 = uVar14 * 2;
    if (0x7fffffff < uVar14) {
      lVar8 = -1;
    }
    uVar14 = fn_82E50BE8(lVar8,0,0,0,0);
    param_1[0x12] = (int)uVar14;
    if ((uVar14 & 0xffffffff) != 0) {
      lVar7 = fn_82E577A0(uVar14,piVar17,uVar2 >> 1);
      if (lVar7 < 0) goto LAB_82f3fab8;
      *(unsigned short *)((int)(uVar10 << 1) + param_1[0x12]) = 0;
      goto LAB_82f3f8c8;
    }
LAB_82f3f89c:
    lVar8 = -0x7ff8fff2;
  }
LAB_82f3fac8:
  *param_2 = uVar1 - param_1[0x10];
  if ((-1 < (int)lVar8) && (uVar10 = (**(int (***)())(*param_1 + 0x2c))(param_1), uVar10 != *param_2)) {
    lVar8 = lVar16;
  }
  return lVar8;
}

