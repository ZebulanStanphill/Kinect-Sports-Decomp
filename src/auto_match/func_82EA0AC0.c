extern unsigned int lbl_831898B8;


void fn_82EA0AC0(int param_1,unsigned __int64 param_2,__int64 param_3,__int64 param_4,
                  unsigned __int64 param_5,int param_6,int param_7,int param_8)

{
  int (**pcVar1)();
  unsigned int uVar2;
  __int64 lVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned int uVar12;
  __int64 lVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  int iVar17;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  int in_stack_00000064;
  unsigned int in_stack_0000006c;
  unsigned int in_stack_00000084;
  unsigned int in_stack_0000008c;
  int in_stack_00000094;
  int in_stack_0000009c;
  unsigned int *in_stack_000000a4;
  unsigned int *in_stack_000000ac;
  int *in_stack_000000b4;
  
  uVar15 = (unsigned __int64)in_stack_00000054;
  pcVar1 = *(int (***)())(in_stack_0000009c + 0xc);
  lVar16 = 0;
  iVar4 = 0xfffffff;
  iVar5 = 0;
  lVar13 = 0;
  lVar11 = 0;
  lVar3 = -uVar15;
  if ((param_7 != 0) && ((int)lVar3 <= (int)in_stack_0000005c)) {
    lVar7 = in_stack_0000005c + uVar15 + 1;
    lVar6 = lVar3;
    do {
      iVar17 = *(int *)((int)((((param_5 & 0x1fffffff) * 8 - param_5) + param_4 + -7 + lVar6 &
                              0xffffffff) << 2) + in_stack_00000064);
      if (iVar17 < iVar4) {
        iVar5 = -1;
        lVar16 = lVar6;
        iVar4 = iVar17;
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if ((in_stack_00000054 != 0) &&
     (iVar17 = *(int *)((int)((((param_5 & 0x1fffffff) * 8 - param_5) + param_4 & 0xffffffff) << 2)
                        + in_stack_00000064 + -4), iVar17 < iVar4)) {
    lVar16 = -1;
    iVar5 = 0;
    iVar4 = iVar17;
  }
  if ((in_stack_0000005c != 0) &&
     (iVar17 = *(int *)((int)((((param_5 & 0x1fffffff) * 8 - param_5) + param_4 + 1 & 0xffffffff) <<
                             2) + in_stack_00000064), iVar17 < iVar4)) {
    lVar16 = 1;
    iVar5 = 0;
    iVar4 = iVar17;
  }
  iVar17 = (int)lVar16;
  if ((param_8 != 0) && ((int)lVar3 <= (int)in_stack_0000005c)) {
    lVar6 = in_stack_0000005c + uVar15 + 1;
    do {
      iVar17 = *(int *)((int)((((param_5 + 1 & 0x1fffffff) * 8 - (param_5 + 1)) + param_4 + lVar3 &
                              0xffffffff) << 2) + in_stack_00000064);
      if (iVar17 < iVar4) {
        iVar5 = 1;
        lVar16 = lVar3;
        iVar4 = iVar17;
      }
      iVar17 = (int)lVar16;
      lVar3 = lVar3 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (iVar17 == 0) {
    iVar4 = (int)in_stack_00000084 >> 0x1f;
    if (iVar5 == -1) {
      uVar9 = (unsigned __int64)in_stack_0000008c;
      uVar15 = (unsigned __int64)in_stack_00000084;
      if (in_stack_00000054 != 0) {
        (**(int (***)())(param_1 + 0x9b8))
                  ((param_3 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564)) + -1,
                   (unsigned __int64)*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,0xffffffffffffffff,
                   0xfffffffffffffffe,*(unsigned int *)(param_1 + 0x904),
                   *(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar8 = (unsigned __int64)((int)(uVar15 - 1) >> 0x1f);
        uVar10 = (unsigned __int64)((int)(uVar9 - 2) >> 0x1f);
        uVar8 = (uVar15 - 1 ^ uVar8) - uVar8;
        uVar10 = (uVar9 - 2 ^ uVar10) - uVar10;
        if (((int)uVar8 < 0x9f) && ((int)uVar10 < 0x9f)) {
          iVar17 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094);
        }
        else {
          iVar17 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar17 + iVar5 < param_6) {
          lVar13 = -1;
          lVar11 = -2;
          param_6 = iVar17 + iVar5;
        }
      }
      lVar16 = -2;
      param_3 = param_3 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564);
      uVar10 = (uVar15 ^ (__int64)iVar4) - (__int64)iVar4;
      do {
        (**(int (***)())(param_1 + 0x9b8))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,0,lVar16,
                   *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
        iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar8 = (unsigned __int64)((int)(lVar16 + uVar9) >> 0x1f);
        uVar8 = (lVar16 + uVar9 ^ uVar8) - uVar8;
        if (((int)uVar10 < 0x9f) && ((int)uVar8 < 0x9f)) {
          iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar5 + iVar4 < param_6) {
          lVar13 = 0;
          lVar11 = lVar16;
          param_6 = iVar5 + iVar4;
        }
        uVar12 = (unsigned int)lVar11;
        uVar14 = (unsigned int)lVar13;
        lVar16 = lVar16 + 1;
      } while (lVar16 < 0);
      (**(int (***)())(param_1 + 0x9b8))
                (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,1,
                 0xfffffffffffffffe,*(unsigned int *)(param_1 + 0x904),
                 *(unsigned int *)(param_1 + 0x618));
      iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar8 = (unsigned __int64)((int)(uVar15 + 1) >> 0x1f);
      uVar10 = (unsigned __int64)((int)(uVar9 - 2) >> 0x1f);
      uVar8 = (uVar15 + 1 ^ uVar8) - uVar8;
      uVar10 = (uVar9 - 2 ^ uVar10) - uVar10;
      if (((int)uVar8 < 0x9f) && ((int)uVar10 < 0x9f)) {
        iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (param_6 <= iVar5 + iVar4) goto LAB_82ea1a1c;
      uVar12 = 0xfffffffe;
      param_6 = iVar5 + iVar4;
    }
    else {
      uVar9 = (unsigned __int64)in_stack_0000008c;
      uVar15 = (unsigned __int64)in_stack_00000084;
      if (in_stack_00000054 != 0) {
        (**(int (***)())(param_1 + 0x9b8))
                  (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,
                   0xffffffffffffffff,2,*(unsigned int *)(param_1 + 0x904),
                   *(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar8 = (unsigned __int64)((int)(uVar15 - 1) >> 0x1f);
        uVar10 = (unsigned __int64)((int)(uVar9 + 2) >> 0x1f);
        uVar8 = (uVar15 - 1 ^ uVar8) - uVar8;
        uVar10 = (uVar9 + 2 ^ uVar10) - uVar10;
        if (((int)uVar8 < 0x9f) && ((int)uVar10 < 0x9f)) {
          iVar17 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094);
        }
        else {
          iVar17 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar17 + iVar5 < param_6) {
          lVar13 = -1;
          lVar11 = 2;
          param_6 = iVar17 + iVar5;
        }
      }
      lVar16 = 1;
      uVar10 = (uVar15 ^ (__int64)iVar4) - (__int64)iVar4;
      do {
        (**(int (***)())(param_1 + 0x9b8))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,0,lVar16,
                   *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
        iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar8 = (unsigned __int64)((int)(lVar16 + uVar9) >> 0x1f);
        uVar8 = (lVar16 + uVar9 ^ uVar8) - uVar8;
        if (((int)uVar10 < 0x9f) && ((int)uVar8 < 0x9f)) {
          iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar5 + iVar4 < param_6) {
          lVar13 = 0;
          lVar11 = lVar16;
          param_6 = iVar5 + iVar4;
        }
        uVar12 = (unsigned int)lVar11;
        uVar14 = (unsigned int)lVar13;
        lVar16 = lVar16 + 1;
      } while ((int)lVar16 < 3);
      (**(int (***)())(param_1 + 0x9b8))
                (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,1,2,
                 *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
      iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar8 = (unsigned __int64)((int)(uVar15 + 1) >> 0x1f);
      uVar10 = (unsigned __int64)((int)(uVar9 + 2) >> 0x1f);
      uVar8 = (uVar15 + 1 ^ uVar8) - uVar8;
      uVar10 = (uVar9 + 2 ^ uVar10) - uVar10;
      if (((int)uVar8 < 0x9f) && ((int)uVar10 < 0x9f)) {
        iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (param_6 <= iVar5 + iVar4) goto LAB_82ea1a1c;
      uVar12 = 2;
      param_6 = iVar5 + iVar4;
    }
    uVar14 = 1;
  }
  else if (iVar5 == 0) {
    iVar4 = (int)in_stack_0000008c >> 0x1f;
    if (iVar17 == -1) {
      uVar15 = (unsigned __int64)in_stack_0000008c;
      uVar9 = (unsigned __int64)in_stack_00000084;
      if (param_7 != 0) {
        (**(int (***)())(param_1 + 0x9b8))
                  ((param_3 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564)) + -1,
                   (unsigned __int64)*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,0xfffffffffffffffe,
                   0xffffffffffffffff,*(unsigned int *)(param_1 + 0x904),
                   *(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar8 = (unsigned __int64)((int)(uVar9 - 2) >> 0x1f);
        uVar10 = (unsigned __int64)((int)(uVar15 - 1) >> 0x1f);
        uVar8 = (uVar9 - 2 ^ uVar8) - uVar8;
        uVar10 = (uVar15 - 1 ^ uVar10) - uVar10;
        if (((int)uVar8 < 0x9f) && ((int)uVar10 < 0x9f)) {
          iVar17 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094);
        }
        else {
          iVar17 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar17 + iVar5 < param_6) {
          lVar13 = -2;
          lVar11 = -1;
          param_6 = iVar17 + iVar5;
        }
      }
      lVar16 = -2;
      uVar10 = (uVar15 ^ (__int64)iVar4) - (__int64)iVar4;
      do {
        (**(int (***)())(param_1 + 0x9b8))
                  (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,lVar16,0,
                   *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
        iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar8 = (unsigned __int64)((int)(lVar16 + uVar9) >> 0x1f);
        uVar8 = (lVar16 + uVar9 ^ uVar8) - uVar8;
        if (((int)uVar8 < 0x9f) && ((int)uVar10 < 0x9f)) {
          iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar5 + iVar4 < param_6) {
          lVar11 = 0;
          lVar13 = lVar16;
          param_6 = iVar5 + iVar4;
        }
        uVar12 = (unsigned int)lVar11;
        uVar14 = (unsigned int)lVar13;
        lVar16 = lVar16 + 1;
      } while (lVar16 < 0);
      (**(int (***)())(param_1 + 0x9b8))
                (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,
                 0xfffffffffffffffe,1,*(unsigned int *)(param_1 + 0x904),
                 *(unsigned int *)(param_1 + 0x618));
      iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar8 = (unsigned __int64)((int)(uVar9 - 2) >> 0x1f);
      uVar10 = (unsigned __int64)((int)(uVar15 + 1) >> 0x1f);
      uVar8 = (uVar9 - 2 ^ uVar8) - uVar8;
      uVar10 = (uVar15 + 1 ^ uVar10) - uVar10;
      if (((int)uVar8 < 0x9f) && ((int)uVar10 < 0x9f)) {
        iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (iVar5 + iVar4 < param_6) {
        uVar14 = 0xfffffffe;
        uVar12 = 1;
        param_6 = iVar5 + iVar4;
      }
    }
    else {
      uVar15 = (unsigned __int64)in_stack_0000008c;
      uVar9 = (unsigned __int64)in_stack_00000084;
      if (param_7 != 0) {
        (**(int (***)())(param_1 + 0x9b8))
                  (param_3 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564),
                   (unsigned __int64)*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,2,0xffffffffffffffff
                   ,*(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar8 = (unsigned __int64)((int)(uVar9 + 2) >> 0x1f);
        uVar10 = (unsigned __int64)((int)(uVar15 - 1) >> 0x1f);
        uVar8 = (uVar9 + 2 ^ uVar8) - uVar8;
        uVar10 = (uVar15 - 1 ^ uVar10) - uVar10;
        if (((int)uVar8 < 0x9f) && ((int)uVar10 < 0x9f)) {
          iVar17 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094);
        }
        else {
          iVar17 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar17 + iVar5 < param_6) {
          lVar13 = 2;
          lVar11 = -1;
          param_6 = iVar17 + iVar5;
        }
      }
      lVar16 = 1;
      uVar10 = (uVar15 ^ (__int64)iVar4) - (__int64)iVar4;
      do {
        (**(int (***)())(param_1 + 0x9b8))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,lVar16,0,
                   *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
        iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar8 = (unsigned __int64)((int)(lVar16 + uVar9) >> 0x1f);
        uVar8 = (lVar16 + uVar9 ^ uVar8) - uVar8;
        if (((int)uVar8 < 0x9f) && ((int)uVar10 < 0x9f)) {
          iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar5 + iVar4 < param_6) {
          lVar11 = 0;
          lVar13 = lVar16;
          param_6 = iVar5 + iVar4;
        }
        uVar12 = (unsigned int)lVar11;
        uVar14 = (unsigned int)lVar13;
        lVar16 = lVar16 + 1;
      } while ((int)lVar16 < 3);
      (**(int (***)())(param_1 + 0x9b8))
                (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,2,1,
                 *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
      iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar8 = (unsigned __int64)((int)(uVar9 + 2) >> 0x1f);
      uVar10 = (unsigned __int64)((int)(uVar15 + 1) >> 0x1f);
      uVar8 = (uVar9 + 2 ^ uVar8) - uVar8;
      uVar10 = (uVar15 + 1 ^ uVar10) - uVar10;
      if (((int)uVar8 < 0x9f) && ((int)uVar10 < 0x9f)) {
        iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (iVar5 + iVar4 < param_6) {
        uVar14 = 2;
        uVar12 = 1;
        param_6 = iVar5 + iVar4;
      }
    }
  }
  else {
    uVar15 = (unsigned __int64)in_stack_00000084;
    if (iVar17 == -1) {
      if (iVar5 == -1) {
        uVar2 = *(unsigned int *)(param_1 + 0x564);
        lVar16 = -2;
        do {
          uVar10 = lVar16 + (unsigned __int64)in_stack_0000008c;
          lVar3 = -2;
          uVar9 = (unsigned __int64)((int)uVar10 >> 0x1f);
          uVar9 = (uVar10 ^ uVar9) - uVar9;
          do {
            (**(int (***)())(param_1 + 0x9b8))
                      ((param_3 - (unsigned __int64)uVar2) + -1,*(unsigned int *)(param_1 + 0x564),
                       in_stack_0000006c,0x10,lVar3,lVar16,*(unsigned int *)(param_1 + 0x904),
                       *(unsigned int *)(param_1 + 0x618));
            iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
            uVar10 = (unsigned __int64)((int)(lVar3 + uVar15) >> 0x1f);
            uVar10 = (lVar3 + uVar15 ^ uVar10) - uVar10;
            if (((int)uVar10 < 0x9f) && ((int)uVar9 < 0x9f)) {
              iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                              in_stack_00000094) +
                      *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                              in_stack_00000094);
            }
            else {
              iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
            }
            if (iVar5 + iVar4 < param_6) {
              lVar11 = lVar16;
              lVar13 = lVar3;
              param_6 = iVar5 + iVar4;
            }
            uVar12 = (unsigned int)lVar11;
            uVar14 = (unsigned int)lVar13;
            lVar3 = lVar3 + 1;
          } while (lVar3 < 0);
          lVar16 = lVar16 + 1;
        } while (lVar16 < 0);
      }
      else {
        lVar16 = 1;
        do {
          uVar10 = lVar16 + (unsigned __int64)in_stack_0000008c;
          lVar3 = -2;
          uVar9 = (unsigned __int64)((int)uVar10 >> 0x1f);
          uVar9 = (uVar10 ^ uVar9) - uVar9;
          do {
            (**(int (***)())(param_1 + 0x9b8))
                      (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,lVar3,
                       lVar16,*(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
            iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
            uVar10 = (unsigned __int64)((int)(lVar3 + uVar15) >> 0x1f);
            uVar10 = (lVar3 + uVar15 ^ uVar10) - uVar10;
            if (((int)uVar10 < 0x9f) && ((int)uVar9 < 0x9f)) {
              iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                              in_stack_00000094) +
                      *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                              in_stack_00000094);
            }
            else {
              iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
            }
            if (iVar5 + iVar4 < param_6) {
              lVar11 = lVar16;
              lVar13 = lVar3;
              param_6 = iVar5 + iVar4;
            }
            uVar12 = (unsigned int)lVar11;
            uVar14 = (unsigned int)lVar13;
            lVar3 = lVar3 + 1;
          } while (lVar3 < 0);
          lVar16 = lVar16 + 1;
        } while ((int)lVar16 < 3);
      }
    }
    else if (iVar5 == -1) {
      uVar2 = *(unsigned int *)(param_1 + 0x564);
      lVar16 = -2;
      do {
        lVar3 = 1;
        uVar9 = (unsigned __int64)((int)(lVar16 + (unsigned __int64)in_stack_0000008c) >> 0x1f);
        uVar9 = (lVar16 + (unsigned __int64)in_stack_0000008c ^ uVar9) - uVar9;
        do {
          (**(int (***)())(param_1 + 0x9b8))
                    (param_3 - (unsigned __int64)uVar2,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,
                     0x10,lVar3,lVar16,*(unsigned int *)(param_1 + 0x904),
                     *(unsigned int *)(param_1 + 0x618));
          iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar10 = (unsigned __int64)((int)(lVar3 + uVar15) >> 0x1f);
          uVar10 = (lVar3 + uVar15 ^ uVar10) - uVar10;
          if (((int)uVar10 < 0x9f) && ((int)uVar9 < 0x9f)) {
            iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094);
          }
          else {
            iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar5 + iVar4 < param_6) {
            lVar11 = lVar16;
            lVar13 = lVar3;
            param_6 = iVar5 + iVar4;
          }
          uVar12 = (unsigned int)lVar11;
          uVar14 = (unsigned int)lVar13;
          lVar3 = lVar3 + 1;
        } while ((int)lVar3 < 3);
        lVar16 = lVar16 + 1;
      } while (lVar16 < 0);
    }
    else {
      lVar16 = 1;
      do {
        lVar3 = 1;
        uVar9 = (unsigned __int64)((int)(lVar16 + (unsigned __int64)in_stack_0000008c) >> 0x1f);
        uVar9 = (lVar16 + (unsigned __int64)in_stack_0000008c ^ uVar9) - uVar9;
        do {
          (**(int (***)())(param_1 + 0x9b8))
                    (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,lVar3,lVar16,
                     *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
          iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar10 = (unsigned __int64)((int)(lVar3 + uVar15) >> 0x1f);
          uVar10 = (lVar3 + uVar15 ^ uVar10) - uVar10;
          if (((int)uVar10 < 0x9f) && ((int)uVar9 < 0x9f)) {
            iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094);
          }
          else {
            iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar5 + iVar4 < param_6) {
            lVar11 = lVar16;
            lVar13 = lVar3;
            param_6 = iVar5 + iVar4;
          }
          uVar12 = (unsigned int)lVar11;
          uVar14 = (unsigned int)lVar13;
          lVar3 = lVar3 + 1;
        } while ((int)lVar3 < 3);
        lVar16 = lVar16 + 1;
      } while ((int)lVar16 < 3);
    }
  }
LAB_82ea1a1c:
  *in_stack_000000a4 = uVar14;
  *in_stack_000000ac = uVar12;
  *in_stack_000000b4 = param_6;
  return;
}

