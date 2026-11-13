extern int fn_82A1DDC0();


void fn_82C7FD00(unsigned __int64 param_1,__int64 param_2,__int64 param_3,__int64 param_4,
                  unsigned int param_5,__int64 param_6,unsigned int param_7,__int64 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  int iVar10;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned int uVar13;
  __int64 lVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  int iVar17;
  int iVar18;
  int in_stack_00000054;
  unsigned int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  unsigned int in_stack_00000074;
  int in_stack_0000007c;
  int in_stack_00000084;
  
  iVar5 = 0;
  iVar18 = (int)param_4;
  iVar10 = (int)param_8;
  iVar17 = (int)param_6;
  iVar1 = iVar18 >> 1;
  iVar2 = iVar17 >> 1;
  iVar3 = in_stack_0000006c >> 1;
  iVar4 = (int)in_stack_0000005c >> 1;
  if (0x32323450 < in_stack_0000007c) {
    if (in_stack_0000007c < 0x5655594a) {
      if (in_stack_0000007c == 0x56555949) goto LAB_82c7fdb8;
      if ((in_stack_0000007c != 0x32595559) && (in_stack_0000007c != 0x55595659)) goto LAB_82c7fd60;
    }
    else if (in_stack_0000007c != 0x59565955) goto LAB_82c7fd60;
    if (0 < (int)param_5) {
LAB_82c7ffcc:
      iVar5 = 1;
      goto LAB_82c7fd60;
    }
LAB_82c7fd5c:
    iVar5 = -1;
LAB_82c7fd60:
    lVar12 = (__int64)((int)(iVar18 * in_stack_00000084 + 0x1fU & 0xffffffe0) >> 3) *
             (__int64)iVar5;
    uVar13 = (unsigned int)lVar12;
    if (iVar5 == 1) {
      lVar8 = (__int64)(iVar10 * in_stack_00000084 >> 3);
      lVar6 = (__int64)(int)uVar13 * (__int64)in_stack_00000054;
    }
    else {
      lVar6 = (__int64)(iVar10 * in_stack_00000084 >> 3);
      lVar8 = (__int64)
              (int)(((param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f)) +
                   (-1 - in_stack_00000054)) *
              (__int64)(int)((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f));
    }
    lVar15 = (__int64)((int)(iVar17 * in_stack_00000084 + 0x1fU & 0xffffffe0) >> 3) *
             (__int64)iVar5;
    uVar13 = (unsigned int)lVar15;
    if (iVar5 == 1) {
      lVar9 = (__int64)((int)(in_stack_0000005c * in_stack_00000084) >> 3);
      lVar7 = (__int64)(int)uVar13 * (__int64)in_stack_00000064;
    }
    else {
      lVar9 = (__int64)
              (int)(((param_7 ^ (int)param_7 >> 0x1f) - ((int)param_7 >> 0x1f)) +
                   (-1 - in_stack_00000064)) *
              (__int64)(int)((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f));
      lVar7 = (__int64)((int)(in_stack_0000005c * in_stack_00000084) >> 3);
    }
    param_3 = lVar8 + lVar6 + param_3;
    uVar16 = (unsigned __int64)in_stack_00000074;
    param_2 = lVar9 + lVar7 + param_2;
    if ((int)in_stack_00000074 < 1) {
      return;
    }
    do {
      fn_82A1DDC0(param_2,param_3,
                        (int)(in_stack_0000006c * in_stack_00000084 + 0x1fU & 0xffffffe0) >> 3);
      uVar16 = uVar16 - 1;
      param_3 = lVar12 + param_3;
      param_2 = lVar15 + param_2;
    } while (uVar16 != 0);
    return;
  }
  if (in_stack_0000007c == 0x32323450) {
    lVar12 = (__int64)iVar18 * (__int64)(int)param_5;
    lVar7 = (__int64)iVar17 * (__int64)(int)param_7;
    lVar8 = (__int64)iVar1 * (__int64)in_stack_00000054 + (__int64)(iVar10 >> 1);
    lVar6 = ((int)lVar12 >> 1) + lVar12;
    lVar15 = (__int64)iVar2 * (__int64)in_stack_00000064;
    lVar12 = lVar12 + lVar8;
    iVar5 = (int)lVar7 >> 1;
LAB_82c7fe78:
    uVar16 = (unsigned __int64)in_stack_00000074;
    lVar9 = (__int64)iVar18 * (__int64)in_stack_00000054;
    lVar6 = lVar6 + lVar8;
    lVar8 = (__int64)iVar17 * (__int64)in_stack_00000064;
    lVar15 = lVar15 + iVar4;
    lVar14 = iVar5 + lVar7;
  }
  else {
    if (in_stack_0000007c < 0x3032344a) {
      if (in_stack_0000007c != 0x30323449) {
        if ((in_stack_0000007c != 0) && (in_stack_0000007c != 3)) goto LAB_82c7fd60;
        if ((int)param_5 < 1) goto LAB_82c7ffcc;
        goto LAB_82c7fd5c;
      }
    }
    else {
      if (in_stack_0000007c == 0x31313450) {
        iVar1 = iVar18 >> 2;
        iVar2 = iVar17 >> 2;
        iVar3 = in_stack_0000006c >> 2;
        lVar12 = (__int64)iVar18 * (__int64)(int)param_5;
        lVar7 = (__int64)iVar17 * (__int64)(int)param_7;
        lVar8 = (__int64)iVar1 * (__int64)in_stack_00000054 + (__int64)(iVar10 >> 2);
        iVar4 = (int)in_stack_0000005c >> 2;
        lVar6 = ((int)lVar12 >> 2) + lVar12;
        lVar15 = (__int64)iVar2 * (__int64)in_stack_00000064;
        lVar12 = lVar12 + lVar8;
        iVar5 = (int)lVar7 >> 2;
        goto LAB_82c7fe78;
      }
      if (in_stack_0000007c != 0x32315659) goto LAB_82c7fd60;
    }
LAB_82c7fdb8:
    uVar16 = (unsigned __int64)((int)in_stack_00000074 >> 1);
    lVar8 = (__int64)iVar18 * (__int64)(int)param_5;
    lVar7 = (__int64)iVar17 * (__int64)(int)param_7;
    lVar6 = (__int64)(in_stack_00000054 >> 1) * (__int64)iVar1 + (__int64)(iVar10 >> 1);
    lVar12 = lVar8 + lVar6;
    lVar6 = ((int)lVar8 >> 2) + lVar8 + lVar6;
    lVar15 = (__int64)(in_stack_00000064 >> 1) * (__int64)iVar2 + (__int64)iVar4;
    lVar9 = (__int64)iVar18 * (__int64)in_stack_00000054;
    lVar8 = (__int64)iVar17 * (__int64)in_stack_00000064;
    lVar14 = ((int)lVar7 >> 2) + lVar7;
  }
  uVar11 = (unsigned __int64)in_stack_00000074;
  lVar6 = lVar6 + param_3;
  lVar14 = lVar14 + lVar15 + param_2;
  lVar15 = lVar7 + lVar15 + param_2;
  lVar8 = lVar8 + param_2 + (unsigned __int64)in_stack_0000005c;
  lVar12 = lVar12 + param_3;
  param_8 = lVar9 + param_3 + param_8;
  if (0 < (int)in_stack_00000074) {
    do {
      fn_82A1DDC0(lVar8,param_8,in_stack_0000006c);
      uVar11 = uVar11 - 1;
      param_8 = param_8 + param_4;
      lVar8 = lVar8 + param_6;
    } while (uVar11 != 0);
  }
  if (0 < (int)uVar16) {
    do {
      fn_82A1DDC0(lVar15,lVar12,iVar3);
      lVar12 = iVar1 + lVar12;
      lVar15 = iVar2 + lVar15;
      fn_82A1DDC0(lVar14,lVar6,iVar3);
      uVar16 = uVar16 - 1;
      lVar6 = iVar1 + lVar6;
      lVar14 = iVar2 + lVar14;
    } while (uVar16 != 0);
  }
  return;
}

