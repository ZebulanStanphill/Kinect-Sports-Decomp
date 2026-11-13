extern unsigned int lbl_831898B8;


void fn_82EA5D28(int param_1, unsigned __int64 param_2, __int64 param_3, __int64 param_4, unsigned __int64 param_5, int param_6, int param_7, int param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, int in_stack_00000064, unsigned int in_stack_0000006c, unsigned __int64 unused_arg_13, unsigned __int64 unused_arg_14, unsigned int in_stack_00000084, unsigned int in_stack_0000008c, int in_stack_00000094)

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
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  int iVar18;
  unsigned __int64 uVar17;







  unsigned int *in_stack_0000009c;
  unsigned int *in_stack_000000a4;
  unsigned int *in_stack_000000ac;
  int *in_stack_000000b4;
  
  uVar14 = (unsigned __int64)in_stack_00000054;
  pcVar1 = (int (**)())*in_stack_0000009c;
  lVar16 = 0;
  iVar4 = 0xfffffff;
  iVar5 = 0;
  uVar12 = 0;
  uVar10 = 0;
  lVar3 = -uVar14;
  if ((param_7 != 0) && ((int)lVar3 <= (int)in_stack_0000005c)) {
    lVar7 = in_stack_0000005c + uVar14 + 1;
    lVar6 = lVar3;
    do {
      iVar18 = *(int *)((int)((((param_5 & 0x1fffffff) * 8 - param_5) + param_4 + -7 + lVar6 &
                              0xffffffff) << 2) + in_stack_00000064);
      if (iVar18 < iVar4) {
        iVar5 = -1;
        lVar16 = lVar6;
        iVar4 = iVar18;
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if ((in_stack_00000054 != 0) &&
     (iVar18 = *(int *)((int)((((param_5 & 0x1fffffff) * 8 - param_5) + param_4 & 0xffffffff) << 2)
                        + in_stack_00000064 + -4), iVar18 < iVar4)) {
    lVar16 = -1;
    iVar5 = 0;
    iVar4 = iVar18;
  }
  if ((in_stack_0000005c != 0) &&
     (iVar18 = *(int *)((int)((((param_5 & 0x1fffffff) * 8 - param_5) + param_4 + 1 & 0xffffffff) <<
                             2) + in_stack_00000064), iVar18 < iVar4)) {
    lVar16 = 1;
    iVar5 = 0;
    iVar4 = iVar18;
  }
  iVar18 = (int)lVar16;
  if ((param_8 != 0) && ((int)lVar3 <= (int)in_stack_0000005c)) {
    lVar6 = in_stack_0000005c + uVar14 + 1;
    do {
      iVar18 = *(int *)((int)((((param_5 + 1 & 0x1fffffff) * 8 - (param_5 + 1)) + param_4 + lVar3 &
                              0xffffffff) << 2) + in_stack_00000064);
      if (iVar18 < iVar4) {
        iVar5 = 1;
        lVar16 = lVar3;
        iVar4 = iVar18;
      }
      iVar18 = (int)lVar16;
      lVar3 = lVar3 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (iVar18 == 0) {
    iVar4 = (int)in_stack_00000084 >> 0x1f;
    if (iVar5 == -1) {
      uVar15 = (unsigned __int64)in_stack_0000008c;
      uVar14 = (unsigned __int64)in_stack_00000084;
      if (in_stack_00000054 != 0) {
        (**(int (***)())(param_1 + 0xa5c))
                  ((param_3 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564)) + -1,
                   (unsigned __int64)*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,3,2,
                   *(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar17 = (unsigned __int64)((int)(uVar14 - 1) >> 0x1f);
        uVar9 = (unsigned __int64)((int)(uVar15 - 2) >> 0x1f);
        uVar17 = (uVar14 - 1 ^ uVar17) - uVar17;
        uVar9 = (uVar15 - 2 ^ uVar9) - uVar9;
        if (((int)uVar17 < 0x9f) && ((int)uVar9 < 0x9f)) {
          iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094);
        }
        else {
          iVar18 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar18 + iVar5 < param_6) {
          uVar12 = 0xffffffffffffffff;
          uVar10 = 0xfffffffffffffffe;
          param_6 = iVar18 + iVar5;
        }
      }
      uVar17 = 0xfffffffffffffffe;
      param_3 = param_3 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564);
      uVar9 = (uVar14 ^ (__int64)iVar4) - (__int64)iVar4;
      do {
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,0,uVar17 & 3,
                   *(unsigned int *)(param_1 + 0x618));
        iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar8 = (unsigned __int64)((int)(uVar17 + uVar15) >> 0x1f);
        uVar8 = (uVar17 + uVar15 ^ uVar8) - uVar8;
        if (((int)uVar9 < 0x9f) && ((int)uVar8 < 0x9f)) {
          iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar5 + iVar4 < param_6) {
          uVar12 = 0;
          uVar10 = uVar17;
          param_6 = iVar5 + iVar4;
        }
        uVar11 = (unsigned int)uVar10;
        uVar13 = (unsigned int)uVar12;
        uVar17 = uVar17 + 1;
      } while ((__int64)uVar17 < 0);
      (**(int (***)())(param_1 + 0xa5c))
                (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,1,2,
                 *(unsigned int *)(param_1 + 0x618));
      iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
      uVar12 = (unsigned __int64)((int)(uVar14 + 1) >> 0x1f);
      uVar10 = (unsigned __int64)((int)(uVar15 - 2) >> 0x1f);
      uVar12 = (uVar14 + 1 ^ uVar12) - uVar12;
      uVar10 = (uVar15 - 2 ^ uVar10) - uVar10;
      if (((int)uVar12 < 0x9f) && ((int)uVar10 < 0x9f)) {
        iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar12 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (param_6 <= iVar5 + iVar4) goto LAB_82ea6bdc;
      uVar11 = 0xfffffffe;
      param_6 = iVar5 + iVar4;
    }
    else {
      uVar15 = (unsigned __int64)in_stack_0000008c;
      uVar14 = (unsigned __int64)in_stack_00000084;
      if (in_stack_00000054 != 0) {
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,3,2,
                   *(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar17 = (unsigned __int64)((int)(uVar14 - 1) >> 0x1f);
        uVar9 = (unsigned __int64)((int)(uVar15 + 2) >> 0x1f);
        uVar17 = (uVar14 - 1 ^ uVar17) - uVar17;
        uVar9 = (uVar15 + 2 ^ uVar9) - uVar9;
        if (((int)uVar17 < 0x9f) && ((int)uVar9 < 0x9f)) {
          iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094);
        }
        else {
          iVar18 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar18 + iVar5 < param_6) {
          uVar12 = 0xffffffffffffffff;
          uVar10 = 2;
          param_6 = iVar18 + iVar5;
        }
      }
      uVar17 = 1;
      uVar9 = (uVar14 ^ (__int64)iVar4) - (__int64)iVar4;
      do {
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,0,uVar17 & 3,
                   *(unsigned int *)(param_1 + 0x618));
        iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar8 = (unsigned __int64)((int)(uVar17 + uVar15) >> 0x1f);
        uVar8 = (uVar17 + uVar15 ^ uVar8) - uVar8;
        if (((int)uVar9 < 0x9f) && ((int)uVar8 < 0x9f)) {
          iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar5 + iVar4 < param_6) {
          uVar12 = 0;
          uVar10 = uVar17;
          param_6 = iVar5 + iVar4;
        }
        uVar11 = (unsigned int)uVar10;
        uVar13 = (unsigned int)uVar12;
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < 3);
      (**(int (***)())(param_1 + 0xa5c))
                (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,1,2,
                 *(unsigned int *)(param_1 + 0x618));
      iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
      uVar12 = (unsigned __int64)((int)(uVar14 + 1) >> 0x1f);
      uVar10 = (unsigned __int64)((int)(uVar15 + 2) >> 0x1f);
      uVar12 = (uVar14 + 1 ^ uVar12) - uVar12;
      uVar10 = (uVar15 + 2 ^ uVar10) - uVar10;
      if (((int)uVar12 < 0x9f) && ((int)uVar10 < 0x9f)) {
        iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar12 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (param_6 <= iVar5 + iVar4) goto LAB_82ea6bdc;
      uVar11 = 2;
      param_6 = iVar5 + iVar4;
    }
    uVar13 = 1;
  }
  else if (iVar5 == 0) {
    iVar4 = (int)in_stack_0000008c >> 0x1f;
    if (iVar18 == -1) {
      uVar14 = (unsigned __int64)in_stack_0000008c;
      uVar15 = (unsigned __int64)in_stack_00000084;
      if (param_7 != 0) {
        (**(int (***)())(param_1 + 0xa5c))
                  ((param_3 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564)) + -1,
                   (unsigned __int64)*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,2,3,
                   *(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar17 = (unsigned __int64)((int)(uVar15 - 2) >> 0x1f);
        uVar9 = (unsigned __int64)((int)(uVar14 - 1) >> 0x1f);
        uVar17 = (uVar15 - 2 ^ uVar17) - uVar17;
        uVar9 = (uVar14 - 1 ^ uVar9) - uVar9;
        if (((int)uVar17 < 0x9f) && ((int)uVar9 < 0x9f)) {
          iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094);
        }
        else {
          iVar18 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar18 + iVar5 < param_6) {
          uVar12 = 0xfffffffffffffffe;
          uVar10 = 0xffffffffffffffff;
          param_6 = iVar18 + iVar5;
        }
      }
      uVar17 = 0xfffffffffffffffe;
      uVar9 = (uVar14 ^ (__int64)iVar4) - (__int64)iVar4;
      do {
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar17 & 3,0
                   ,*(unsigned int *)(param_1 + 0x618));
        iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar8 = (unsigned __int64)((int)(uVar17 + uVar15) >> 0x1f);
        uVar8 = (uVar17 + uVar15 ^ uVar8) - uVar8;
        if (((int)uVar8 < 0x9f) && ((int)uVar9 < 0x9f)) {
          iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar5 + iVar4 < param_6) {
          uVar10 = 0;
          uVar12 = uVar17;
          param_6 = iVar5 + iVar4;
        }
        uVar11 = (unsigned int)uVar10;
        uVar13 = (unsigned int)uVar12;
        uVar17 = uVar17 + 1;
      } while ((__int64)uVar17 < 0);
      (**(int (***)())(param_1 + 0xa5c))
                (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,2,1,
                 *(unsigned int *)(param_1 + 0x618));
      iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
      uVar12 = (unsigned __int64)((int)(uVar15 - 2) >> 0x1f);
      uVar10 = (unsigned __int64)((int)(uVar14 + 1) >> 0x1f);
      uVar12 = (uVar15 - 2 ^ uVar12) - uVar12;
      uVar10 = (uVar14 + 1 ^ uVar10) - uVar10;
      if (((int)uVar12 < 0x9f) && ((int)uVar10 < 0x9f)) {
        iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar12 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (iVar5 + iVar4 < param_6) {
        uVar13 = 0xfffffffe;
        uVar11 = 1;
        param_6 = iVar5 + iVar4;
      }
    }
    else {
      uVar14 = (unsigned __int64)in_stack_0000008c;
      uVar15 = (unsigned __int64)in_stack_00000084;
      if (param_7 != 0) {
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564),
                   (unsigned __int64)*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,2,3,
                   *(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar17 = (unsigned __int64)((int)(uVar15 + 2) >> 0x1f);
        uVar9 = (unsigned __int64)((int)(uVar14 - 1) >> 0x1f);
        uVar17 = (uVar15 + 2 ^ uVar17) - uVar17;
        uVar9 = (uVar14 - 1 ^ uVar9) - uVar9;
        if (((int)uVar17 < 0x9f) && ((int)uVar9 < 0x9f)) {
          iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094);
        }
        else {
          iVar18 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar18 + iVar5 < param_6) {
          uVar12 = 2;
          uVar10 = 0xffffffffffffffff;
          param_6 = iVar18 + iVar5;
        }
      }
      uVar17 = 1;
      uVar9 = (uVar14 ^ (__int64)iVar4) - (__int64)iVar4;
      do {
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar17 & 3,0,
                   *(unsigned int *)(param_1 + 0x618));
        iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar8 = (unsigned __int64)((int)(uVar17 + uVar15) >> 0x1f);
        uVar8 = (uVar17 + uVar15 ^ uVar8) - uVar8;
        if (((int)uVar8 < 0x9f) && ((int)uVar9 < 0x9f)) {
          iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar5 + iVar4 < param_6) {
          uVar10 = 0;
          uVar12 = uVar17;
          param_6 = iVar5 + iVar4;
        }
        uVar11 = (unsigned int)uVar10;
        uVar13 = (unsigned int)uVar12;
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < 3);
      (**(int (***)())(param_1 + 0xa5c))
                (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,2,1,
                 *(unsigned int *)(param_1 + 0x618));
      iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
      uVar12 = (unsigned __int64)((int)(uVar15 + 2) >> 0x1f);
      uVar10 = (unsigned __int64)((int)(uVar14 + 1) >> 0x1f);
      uVar12 = (uVar15 + 2 ^ uVar12) - uVar12;
      uVar10 = (uVar14 + 1 ^ uVar10) - uVar10;
      if (((int)uVar12 < 0x9f) && ((int)uVar10 < 0x9f)) {
        iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar12 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (iVar5 + iVar4 < param_6) {
        uVar13 = 2;
        uVar11 = 1;
        param_6 = iVar5 + iVar4;
      }
    }
  }
  else {
    uVar14 = (unsigned __int64)in_stack_00000084;
    if (iVar18 == -1) {
      if (iVar5 == -1) {
        uVar2 = *(unsigned int *)(param_1 + 0x564);
        uVar15 = 0xfffffffffffffffe;
        do {
          uVar17 = 0xfffffffffffffffe;
          uVar9 = (unsigned __int64)((int)(uVar15 + in_stack_0000008c) >> 0x1f);
          uVar9 = (uVar15 + in_stack_0000008c ^ uVar9) - uVar9;
          do {
            (**(int (***)())(param_1 + 0xa5c))
                      ((param_3 - (unsigned __int64)uVar2) + -1,*(unsigned int *)(param_1 + 0x564),
                       in_stack_0000006c,0x10,uVar17 & 3,uVar15 & 3,*(unsigned int *)(param_1 + 0x618)
                      );
            iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
            uVar8 = (unsigned __int64)((int)(uVar17 + uVar14) >> 0x1f);
            uVar8 = (uVar17 + uVar14 ^ uVar8) - uVar8;
            if (((int)uVar8 < 0x9f) && ((int)uVar9 < 0x9f)) {
              iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                              in_stack_00000094) +
                      *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                              in_stack_00000094);
            }
            else {
              iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
            }
            if (iVar5 + iVar4 < param_6) {
              uVar10 = uVar15;
              uVar12 = uVar17;
              param_6 = iVar5 + iVar4;
            }
            uVar11 = (unsigned int)uVar10;
            uVar13 = (unsigned int)uVar12;
            uVar17 = uVar17 + 1;
          } while ((__int64)uVar17 < 0);
          uVar15 = uVar15 + 1;
        } while ((__int64)uVar15 < 0);
      }
      else {
        uVar15 = 1;
        do {
          uVar17 = 0xfffffffffffffffe;
          uVar9 = (unsigned __int64)((int)(uVar15 + in_stack_0000008c) >> 0x1f);
          uVar9 = (uVar15 + in_stack_0000008c ^ uVar9) - uVar9;
          do {
            (**(int (***)())(param_1 + 0xa5c))
                      (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,
                       uVar17 & 3,uVar15 & 3,*(unsigned int *)(param_1 + 0x618));
            iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
            uVar8 = (unsigned __int64)((int)(uVar17 + uVar14) >> 0x1f);
            uVar8 = (uVar17 + uVar14 ^ uVar8) - uVar8;
            if (((int)uVar8 < 0x9f) && ((int)uVar9 < 0x9f)) {
              iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                              in_stack_00000094) +
                      *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                              in_stack_00000094);
            }
            else {
              iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
            }
            if (iVar5 + iVar4 < param_6) {
              uVar10 = uVar15;
              uVar12 = uVar17;
              param_6 = iVar5 + iVar4;
            }
            uVar11 = (unsigned int)uVar10;
            uVar13 = (unsigned int)uVar12;
            uVar17 = uVar17 + 1;
          } while ((__int64)uVar17 < 0);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < 3);
      }
    }
    else if (iVar5 == -1) {
      uVar2 = *(unsigned int *)(param_1 + 0x564);
      uVar15 = 0xfffffffffffffffe;
      do {
        uVar17 = 1;
        uVar9 = (unsigned __int64)((int)(uVar15 + in_stack_0000008c) >> 0x1f);
        uVar9 = (uVar15 + in_stack_0000008c ^ uVar9) - uVar9;
        do {
          (**(int (***)())(param_1 + 0xa5c))
                    (param_3 - (unsigned __int64)uVar2,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,
                     0x10,uVar17 & 3,uVar15 & 3,*(unsigned int *)(param_1 + 0x618));
          iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
          uVar8 = (unsigned __int64)((int)(uVar17 + uVar14) >> 0x1f);
          uVar8 = (uVar17 + uVar14 ^ uVar8) - uVar8;
          if (((int)uVar8 < 0x9f) && ((int)uVar9 < 0x9f)) {
            iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094);
          }
          else {
            iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar5 + iVar4 < param_6) {
            uVar10 = uVar15;
            uVar12 = uVar17;
            param_6 = iVar5 + iVar4;
          }
          uVar11 = (unsigned int)uVar10;
          uVar13 = (unsigned int)uVar12;
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < 3);
        uVar15 = uVar15 + 1;
      } while ((__int64)uVar15 < 0);
    }
    else {
      uVar15 = 1;
      do {
        uVar17 = 1;
        uVar9 = (unsigned __int64)((int)(uVar15 + in_stack_0000008c) >> 0x1f);
        uVar9 = (uVar15 + in_stack_0000008c ^ uVar9) - uVar9;
        do {
          (**(int (***)())(param_1 + 0xa5c))
                    (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar17 & 3,
                     uVar15 & 3,*(unsigned int *)(param_1 + 0x618));
          iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
          uVar8 = (unsigned __int64)((int)(uVar17 + uVar14) >> 0x1f);
          uVar8 = (uVar17 + uVar14 ^ uVar8) - uVar8;
          if (((int)uVar8 < 0x9f) && ((int)uVar9 < 0x9f)) {
            iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar8 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094);
          }
          else {
            iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar5 + iVar4 < param_6) {
            uVar10 = uVar15;
            uVar12 = uVar17;
            param_6 = iVar5 + iVar4;
          }
          uVar11 = (unsigned int)uVar10;
          uVar13 = (unsigned int)uVar12;
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < 3);
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < 3);
    }
  }
LAB_82ea6bdc:
  *in_stack_000000a4 = uVar13;
  *in_stack_000000ac = uVar11;
  *in_stack_000000b4 = param_6;
  return;
}

