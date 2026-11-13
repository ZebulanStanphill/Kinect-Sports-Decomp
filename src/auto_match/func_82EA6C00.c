extern unsigned int lbl_831898B8;


void fn_82EA6C00(int param_1,unsigned __int64 param_2,__int64 param_3,__int64 param_4,
                  unsigned __int64 param_5,int param_6,int param_7,int param_8)

{
  int (**pcVar1)();
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  int iVar5;
  int iVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  __int64 lVar18;
  int iVar20;
  unsigned __int64 uVar19;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  int in_stack_00000064;
  unsigned int in_stack_0000006c;
  unsigned int in_stack_00000084;
  unsigned int in_stack_0000008c;
  int in_stack_00000094;
  unsigned int *in_stack_0000009c;
  unsigned int *in_stack_000000a4;
  unsigned int *in_stack_000000ac;
  int *in_stack_000000b4;
  
  uVar16 = (unsigned __int64)in_stack_00000054;
  pcVar1 = (int (**)())*in_stack_0000009c;
  lVar18 = 0;
  iVar5 = 0xfffffff;
  iVar6 = 0;
  uVar13 = 0;
  uVar11 = 0;
  lVar4 = -uVar16;
  if ((param_7 != 0) && ((int)lVar4 <= (int)in_stack_0000005c)) {
    lVar8 = in_stack_0000005c + uVar16 + 1;
    lVar7 = lVar4;
    do {
      iVar20 = *(int *)((int)((((param_5 & 0x1fffffff) * 8 - param_5) + param_4 + -7 + lVar7 &
                              0xffffffff) << 2) + in_stack_00000064);
      if (iVar20 < iVar5) {
        iVar6 = -1;
        lVar18 = lVar7;
        iVar5 = iVar20;
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if ((in_stack_00000054 != 0) &&
     (iVar20 = *(int *)((int)((((param_5 & 0x1fffffff) * 8 - param_5) + param_4 & 0xffffffff) << 2)
                        + in_stack_00000064 + -4), iVar20 < iVar5)) {
    lVar18 = -1;
    iVar6 = 0;
    iVar5 = iVar20;
  }
  if ((in_stack_0000005c != 0) &&
     (iVar20 = *(int *)((int)((((param_5 & 0x1fffffff) * 8 - param_5) + param_4 + 1 & 0xffffffff) <<
                             2) + in_stack_00000064), iVar20 < iVar5)) {
    lVar18 = 1;
    iVar6 = 0;
    iVar5 = iVar20;
  }
  iVar20 = (int)lVar18;
  if ((param_8 != 0) && ((int)lVar4 <= (int)in_stack_0000005c)) {
    lVar7 = in_stack_0000005c + uVar16 + 1;
    do {
      iVar20 = *(int *)((int)((((param_5 + 1 & 0x1fffffff) * 8 - (param_5 + 1)) + param_4 + lVar4 &
                              0xffffffff) << 2) + in_stack_00000064);
      if (iVar20 < iVar5) {
        iVar6 = 1;
        lVar18 = lVar4;
        iVar5 = iVar20;
      }
      iVar20 = (int)lVar18;
      lVar4 = lVar4 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  iVar5 = (int)in_stack_00000084 >> 0x1f;
  iVar3 = (int)in_stack_0000008c >> 0x1f;
  if (iVar20 == 0) {
    if (iVar6 == -1) {
      uVar15 = (unsigned __int64)in_stack_0000008c;
      uVar16 = (unsigned __int64)in_stack_00000084;
      if (in_stack_00000054 != 0) {
        uVar9 = 0xfffffffffffffffe;
        uVar17 = (unsigned __int64)((int)(uVar16 - 1) >> 0x1f);
        lVar18 = (param_3 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564)) + -1;
        uVar17 = (uVar16 - 1 ^ uVar17) - uVar17;
        do {
          (**(int (***)())(param_1 + 0xa5c))
                    (lVar18,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,3,uVar9 & 3,
                     *(unsigned int *)(param_1 + 0x618));
          iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
          uVar10 = (unsigned __int64)((int)(uVar9 + uVar15) >> 0x1f);
          uVar10 = (uVar9 + uVar15 ^ uVar10) - uVar10;
          if (((int)uVar17 < 0x9f) && ((int)uVar10 < 0x9f)) {
            iVar20 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                             in_stack_00000094) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                             in_stack_00000094);
          }
          else {
            iVar20 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar20 + iVar6 < param_6) {
            uVar13 = 0xffffffffffffffff;
            uVar11 = uVar9;
            param_6 = iVar20 + iVar6;
          }
          uVar9 = uVar9 + 1;
        } while ((__int64)uVar9 < 0);
        (**(int (***)())(param_1 + 0xa5c))
                  ((unsigned __int64)*(unsigned int *)(param_1 + 0x564) + lVar18,
                   (unsigned __int64)*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,3,0,
                   *(unsigned int *)(param_1 + 0x618));
        iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar9 = (uVar15 ^ (__int64)iVar3) - (__int64)iVar3;
        if (((int)uVar17 < 0x9f) && ((int)uVar9 < 0x9f)) {
          iVar20 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094);
        }
        else {
          iVar20 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar20 + iVar6 < param_6) {
          uVar13 = 0xffffffffffffffff;
          uVar11 = 0;
          param_6 = iVar20 + iVar6;
        }
      }
      uVar9 = 0xfffffffffffffffe;
      param_3 = param_3 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564);
      uVar17 = (uVar16 ^ (__int64)iVar5) - (__int64)iVar5;
      do {
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,0,uVar9 & 3,
                   *(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar10 = (unsigned __int64)((int)(uVar9 + uVar15) >> 0x1f);
        uVar10 = (uVar9 + uVar15 ^ uVar10) - uVar10;
        if (((int)uVar17 < 0x9f) && ((int)uVar10 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          uVar13 = 0;
          uVar11 = uVar9;
          param_6 = iVar6 + iVar5;
        }
        uVar9 = uVar9 + 1;
      } while ((__int64)uVar9 < 0);
      uVar9 = 0xfffffffffffffffe;
      uVar17 = (unsigned __int64)((int)(uVar16 + 1) >> 0x1f);
      uVar17 = (uVar16 + 1 ^ uVar17) - uVar17;
      do {
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,1,uVar9 & 3,
                   *(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar16 = (unsigned __int64)((int)(uVar9 + uVar15) >> 0x1f);
        uVar16 = (uVar9 + uVar15 ^ uVar16) - uVar16;
        if (((int)uVar17 < 0x9f) && ((int)uVar16 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          uVar13 = 1;
          uVar11 = uVar9;
          param_6 = iVar6 + iVar5;
        }
        uVar12 = (unsigned int)uVar11;
        uVar14 = (unsigned int)uVar13;
        uVar9 = uVar9 + 1;
      } while ((__int64)uVar9 < 0);
      (**(int (***)())(param_1 + 0xa5c))
                ((unsigned __int64)*(unsigned int *)(param_1 + 0x564) + param_3,
                 (unsigned __int64)*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,1,0,
                 *(unsigned int *)(param_1 + 0x618));
      iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
      uVar11 = (uVar15 ^ (__int64)iVar3) - (__int64)iVar3;
      if (((int)uVar17 < 0x9f) && ((int)uVar11 < 0x9f)) {
        iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar11 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (iVar6 + iVar5 < param_6) {
        uVar14 = 1;
        uVar12 = 0;
        param_6 = iVar6 + iVar5;
      }
    }
    else {
      uVar15 = (unsigned __int64)in_stack_0000008c;
      uVar16 = (unsigned __int64)in_stack_00000084;
      if (in_stack_00000054 != 0) {
        uVar17 = (unsigned __int64)((int)(uVar16 - 1) >> 0x1f);
        uVar9 = 0;
        uVar17 = (uVar16 - 1 ^ uVar17) - uVar17;
        do {
          (**(int (***)())(param_1 + 0xa5c))
                    (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,3,
                     uVar9 & 3,*(unsigned int *)(param_1 + 0x618));
          iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
          uVar10 = (unsigned __int64)((int)(uVar9 + uVar15) >> 0x1f);
          uVar10 = (uVar9 + uVar15 ^ uVar10) - uVar10;
          if (((int)uVar17 < 0x9f) && ((int)uVar10 < 0x9f)) {
            iVar20 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                             in_stack_00000094) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                             in_stack_00000094);
          }
          else {
            iVar20 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar20 + iVar6 < param_6) {
            uVar13 = 0xffffffffffffffff;
            uVar11 = uVar9;
            param_6 = iVar20 + iVar6;
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < 3);
      }
      uVar9 = 1;
      uVar17 = (uVar16 ^ (__int64)iVar5) - (__int64)iVar5;
      do {
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,0,uVar9 & 3,
                   *(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar10 = (unsigned __int64)((int)(uVar9 + uVar15) >> 0x1f);
        uVar10 = (uVar9 + uVar15 ^ uVar10) - uVar10;
        if (((int)uVar17 < 0x9f) && ((int)uVar10 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          uVar13 = 0;
          uVar11 = uVar9;
          param_6 = iVar6 + iVar5;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 3);
      uVar9 = 0;
      uVar17 = (unsigned __int64)((int)(uVar16 + 1) >> 0x1f);
      uVar17 = (uVar16 + 1 ^ uVar17) - uVar17;
      do {
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,1,uVar9 & 3,
                   *(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar16 = (unsigned __int64)((int)(uVar9 + uVar15) >> 0x1f);
        uVar16 = (uVar9 + uVar15 ^ uVar16) - uVar16;
        if (((int)uVar17 < 0x9f) && ((int)uVar16 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          uVar13 = 1;
          uVar11 = uVar9;
          param_6 = iVar6 + iVar5;
        }
        uVar12 = (unsigned int)uVar11;
        uVar14 = (unsigned int)uVar13;
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 3);
    }
  }
  else if (iVar6 == 0) {
    uVar16 = (unsigned __int64)in_stack_0000008c;
    uVar15 = (unsigned __int64)in_stack_00000084;
    if (iVar20 == -1) {
      if (param_7 != 0) {
        uVar9 = 0xfffffffffffffffe;
        uVar17 = (unsigned __int64)((int)(uVar16 - 1) >> 0x1f);
        lVar18 = param_3 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564);
        uVar17 = (uVar16 - 1 ^ uVar17) - uVar17;
        do {
          (**(int (***)())(param_1 + 0xa5c))
                    (lVar18 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar9 & 3,3
                     ,*(unsigned int *)(param_1 + 0x618));
          iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
          uVar10 = (unsigned __int64)((int)(uVar9 + uVar15) >> 0x1f);
          uVar10 = (uVar9 + uVar15 ^ uVar10) - uVar10;
          if (((int)uVar10 < 0x9f) && ((int)uVar17 < 0x9f)) {
            iVar20 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                             in_stack_00000094) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                             in_stack_00000094);
          }
          else {
            iVar20 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar20 + iVar6 < param_6) {
            uVar11 = 0xffffffffffffffff;
            uVar13 = uVar9;
            param_6 = iVar20 + iVar6;
          }
          uVar9 = uVar9 + 1;
        } while ((__int64)uVar9 < 0);
        (**(int (***)())(param_1 + 0xa5c))
                  (lVar18,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,0,3,
                   *(unsigned int *)(param_1 + 0x618));
        iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar9 = (uVar15 ^ (__int64)iVar5) - (__int64)iVar5;
        if (((int)uVar9 < 0x9f) && ((int)uVar17 < 0x9f)) {
          iVar20 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094);
        }
        else {
          iVar20 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar20 + iVar6 < param_6) {
          uVar13 = 0;
          uVar11 = 0xffffffffffffffff;
          param_6 = iVar20 + iVar6;
        }
      }
      uVar9 = 0xfffffffffffffffe;
      uVar17 = (uVar16 ^ (__int64)iVar3) - (__int64)iVar3;
      do {
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar9 & 3,0,
                   *(unsigned int *)(param_1 + 0x618));
        iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar10 = (unsigned __int64)((int)(uVar9 + uVar15) >> 0x1f);
        uVar10 = (uVar9 + uVar15 ^ uVar10) - uVar10;
        if (((int)uVar10 < 0x9f) && ((int)uVar17 < 0x9f)) {
          iVar20 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094);
        }
        else {
          iVar20 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar20 + iVar6 < param_6) {
          uVar11 = 0;
          uVar13 = uVar9;
          param_6 = iVar20 + iVar6;
        }
        uVar9 = uVar9 + 1;
      } while ((__int64)uVar9 < 0);
      uVar9 = 0xfffffffffffffffe;
      uVar17 = (unsigned __int64)((int)(uVar16 + 1) >> 0x1f);
      uVar17 = (uVar16 + 1 ^ uVar17) - uVar17;
      do {
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar9 & 3,1,
                   *(unsigned int *)(param_1 + 0x618));
        iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar16 = (unsigned __int64)((int)(uVar9 + uVar15) >> 0x1f);
        uVar16 = (uVar9 + uVar15 ^ uVar16) - uVar16;
        if (((int)uVar16 < 0x9f) && ((int)uVar17 < 0x9f)) {
          iVar20 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                           in_stack_00000094);
        }
        else {
          iVar20 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar20 + iVar6 < param_6) {
          uVar11 = 1;
          uVar13 = uVar9;
          param_6 = iVar20 + iVar6;
        }
        uVar12 = (unsigned int)uVar11;
        uVar14 = (unsigned int)uVar13;
        uVar9 = uVar9 + 1;
      } while ((__int64)uVar9 < 0);
      (**(int (***)())(param_1 + 0xa5c))
                (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,0,1,
                 *(unsigned int *)(param_1 + 0x618));
      iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
      uVar11 = (uVar15 ^ (__int64)iVar5) - (__int64)iVar5;
      if (((int)uVar11 < 0x9f) && ((int)uVar17 < 0x9f)) {
        iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar11 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar5 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (iVar5 + iVar6 < param_6) {
        uVar14 = 0;
        uVar12 = 1;
        param_6 = iVar5 + iVar6;
      }
    }
    else {
      if (param_7 != 0) {
        uVar2 = *(unsigned int *)(param_1 + 0x564);
        uVar9 = 0;
        uVar17 = (unsigned __int64)((int)(uVar16 - 1) >> 0x1f);
        uVar17 = (uVar16 - 1 ^ uVar17) - uVar17;
        do {
          (**(int (***)())(param_1 + 0xa5c))
                    (param_3 - (unsigned __int64)uVar2,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,
                     0x10,uVar9 & 3,3,*(unsigned int *)(param_1 + 0x618));
          iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
          uVar10 = (unsigned __int64)((int)(uVar9 + uVar15) >> 0x1f);
          uVar10 = (uVar9 + uVar15 ^ uVar10) - uVar10;
          if (((int)uVar10 < 0x9f) && ((int)uVar17 < 0x9f)) {
            iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094);
          }
          else {
            iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar6 + iVar5 < param_6) {
            uVar11 = 0xffffffffffffffff;
            uVar13 = uVar9;
            param_6 = iVar6 + iVar5;
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < 3);
      }
      uVar9 = 1;
      uVar17 = (uVar16 ^ (__int64)iVar3) - (__int64)iVar3;
      do {
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar9 & 3,0,
                   *(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar10 = (unsigned __int64)((int)(uVar9 + uVar15) >> 0x1f);
        uVar10 = (uVar9 + uVar15 ^ uVar10) - uVar10;
        if (((int)uVar10 < 0x9f) && ((int)uVar17 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          uVar11 = 0;
          uVar13 = uVar9;
          param_6 = iVar6 + iVar5;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 3);
      uVar9 = 0;
      uVar17 = (unsigned __int64)((int)(uVar16 + 1) >> 0x1f);
      uVar17 = (uVar16 + 1 ^ uVar17) - uVar17;
      do {
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar9 & 3,1,
                   *(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar16 = (unsigned __int64)((int)(uVar9 + uVar15) >> 0x1f);
        uVar16 = (uVar9 + uVar15 ^ uVar16) - uVar16;
        if (((int)uVar16 < 0x9f) && ((int)uVar17 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          uVar11 = 1;
          uVar13 = uVar9;
          param_6 = iVar6 + iVar5;
        }
        uVar12 = (unsigned int)uVar11;
        uVar14 = (unsigned int)uVar13;
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 3);
    }
  }
  else if (iVar20 == -1) {
    if (iVar6 == -1) {
      uVar17 = 0xfffffffffffffffe;
      uVar16 = (unsigned __int64)in_stack_00000084;
      param_3 = param_3 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564);
      lVar18 = param_3 + -1;
      uVar15 = (uVar16 ^ (__int64)iVar5) - (__int64)iVar5;
      do {
        uVar10 = uVar17 + in_stack_0000008c;
        uVar19 = 0xfffffffffffffffe;
        uVar9 = (unsigned __int64)((int)uVar10 >> 0x1f);
        uVar9 = (uVar10 ^ uVar9) - uVar9;
        do {
          (**(int (***)())(param_1 + 0xa5c))
                    (lVar18,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar19 & 3,
                     uVar17 & 3,*(unsigned int *)(param_1 + 0x618));
          iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
          uVar10 = (unsigned __int64)((int)(uVar19 + uVar16) >> 0x1f);
          uVar10 = (uVar19 + uVar16 ^ uVar10) - uVar10;
          if (((int)uVar10 < 0x9f) && ((int)uVar9 < 0x9f)) {
            iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094);
          }
          else {
            iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar6 + iVar5 < param_6) {
            uVar11 = uVar17;
            uVar13 = uVar19;
            param_6 = iVar6 + iVar5;
          }
          uVar19 = uVar19 + 1;
        } while ((__int64)uVar19 < 0);
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,0,uVar17 & 3,
                   *(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        if (((int)uVar15 < 0x9f) && ((int)uVar9 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          uVar13 = 0;
          uVar11 = uVar17;
          param_6 = iVar6 + iVar5;
        }
        uVar17 = uVar17 + 1;
      } while ((__int64)uVar17 < 0);
      uVar2 = *(unsigned int *)(param_1 + 0x564);
      uVar17 = 0xfffffffffffffffe;
      uVar15 = ((unsigned __int64)in_stack_0000008c ^ (__int64)iVar3) - (__int64)iVar3;
      do {
        (**(int (***)())(param_1 + 0xa5c))
                  (lVar18 + (unsigned __int64)uVar2,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10
                   ,uVar17 & 3,0,*(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar9 = (unsigned __int64)((int)(uVar17 + uVar16) >> 0x1f);
        uVar9 = (uVar17 + uVar16 ^ uVar9) - uVar9;
        if (((int)uVar9 < 0x9f) && ((int)uVar15 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          uVar11 = 0;
          uVar13 = uVar17;
          param_6 = iVar6 + iVar5;
        }
        uVar12 = (unsigned int)uVar11;
        uVar14 = (unsigned int)uVar13;
        uVar17 = uVar17 + 1;
      } while ((__int64)uVar17 < 0);
    }
    else {
      uVar16 = (unsigned __int64)in_stack_00000084;
      uVar17 = 1;
      uVar15 = (uVar16 ^ (__int64)iVar5) - (__int64)iVar5;
      do {
        uVar10 = uVar17 + in_stack_0000008c;
        uVar19 = 0xfffffffffffffffe;
        uVar9 = (unsigned __int64)((int)uVar10 >> 0x1f);
        uVar9 = (uVar10 ^ uVar9) - uVar9;
        do {
          (**(int (***)())(param_1 + 0xa5c))
                    (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar19 & 3
                     ,uVar17 & 3,*(unsigned int *)(param_1 + 0x618));
          iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
          uVar10 = (unsigned __int64)((int)(uVar19 + uVar16) >> 0x1f);
          uVar10 = (uVar19 + uVar16 ^ uVar10) - uVar10;
          if (((int)uVar10 < 0x9f) && ((int)uVar9 < 0x9f)) {
            iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar10 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094);
          }
          else {
            iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar6 + iVar5 < param_6) {
            uVar11 = uVar17;
            uVar13 = uVar19;
            param_6 = iVar6 + iVar5;
          }
          uVar19 = uVar19 + 1;
        } while ((__int64)uVar19 < 0);
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,0,uVar17 & 3,
                   *(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        if (((int)uVar15 < 0x9f) && ((int)uVar9 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          uVar13 = 0;
          uVar11 = uVar17;
          param_6 = iVar6 + iVar5;
        }
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < 3);
      uVar17 = 0xfffffffffffffffe;
      uVar15 = ((unsigned __int64)in_stack_0000008c ^ (__int64)iVar3) - (__int64)iVar3;
      do {
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar17 & 3,0
                   ,*(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar9 = (unsigned __int64)((int)(uVar17 + uVar16) >> 0x1f);
        uVar9 = (uVar17 + uVar16 ^ uVar9) - uVar9;
        if (((int)uVar9 < 0x9f) && ((int)uVar15 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          uVar11 = 0;
          uVar13 = uVar17;
          param_6 = iVar6 + iVar5;
        }
        uVar12 = (unsigned int)uVar11;
        uVar14 = (unsigned int)uVar13;
        uVar17 = uVar17 + 1;
      } while ((__int64)uVar17 < 0);
    }
  }
  else if (iVar6 == -1) {
    uVar16 = 0xfffffffffffffffe;
    param_3 = param_3 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564);
    do {
      uVar17 = uVar16 + in_stack_0000008c;
      uVar9 = 0;
      uVar15 = (unsigned __int64)((int)uVar17 >> 0x1f);
      uVar15 = (uVar17 ^ uVar15) - uVar15;
      do {
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar9 & 3,
                   uVar16 & 3,*(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar10 = uVar9 + in_stack_00000084;
        uVar17 = (unsigned __int64)((int)uVar10 >> 0x1f);
        uVar17 = (uVar10 ^ uVar17) - uVar17;
        if (((int)uVar17 < 0x9f) && ((int)uVar15 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          uVar11 = uVar16;
          uVar13 = uVar9;
          param_6 = iVar6 + iVar5;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 3);
      uVar16 = uVar16 + 1;
    } while ((__int64)uVar16 < 0);
    uVar2 = *(unsigned int *)(param_1 + 0x564);
    uVar15 = 1;
    uVar16 = ((unsigned __int64)in_stack_0000008c ^ (__int64)iVar3) - (__int64)iVar3;
    do {
      (**(int (***)())(param_1 + 0xa5c))
                (param_3 + (unsigned __int64)uVar2,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,
                 uVar15 & 3,0,*(unsigned int *)(param_1 + 0x618));
      iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
      uVar9 = uVar15 + in_stack_00000084;
      uVar17 = (unsigned __int64)((int)uVar9 >> 0x1f);
      uVar17 = (uVar9 ^ uVar17) - uVar17;
      if (((int)uVar17 < 0x9f) && ((int)uVar16 < 0x9f)) {
        iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (iVar6 + iVar5 < param_6) {
        uVar11 = 0;
        uVar13 = uVar15;
        param_6 = iVar6 + iVar5;
      }
      uVar12 = (unsigned int)uVar11;
      uVar14 = (unsigned int)uVar13;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < 3);
  }
  else {
    uVar16 = 1;
    do {
      uVar17 = uVar16 + in_stack_0000008c;
      uVar9 = 0;
      uVar15 = (unsigned __int64)((int)uVar17 >> 0x1f);
      uVar15 = (uVar17 ^ uVar15) - uVar15;
      do {
        (**(int (***)())(param_1 + 0xa5c))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar9 & 3,
                   uVar16 & 3,*(unsigned int *)(param_1 + 0x618));
        iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
        uVar10 = uVar9 + in_stack_00000084;
        uVar17 = (unsigned __int64)((int)uVar10 >> 0x1f);
        uVar17 = (uVar10 ^ uVar17) - uVar17;
        if (((int)uVar17 < 0x9f) && ((int)uVar15 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar6 + iVar5 < param_6) {
          uVar11 = uVar16;
          uVar13 = uVar9;
          param_6 = iVar6 + iVar5;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 3);
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < 3);
    uVar15 = 1;
    uVar16 = ((unsigned __int64)in_stack_0000008c ^ (__int64)iVar3) - (__int64)iVar3;
    do {
      (**(int (***)())(param_1 + 0xa5c))
                (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar15 & 3,0,
                 *(unsigned int *)(param_1 + 0x618));
      iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10);
      uVar9 = uVar15 + in_stack_00000084;
      uVar17 = (unsigned __int64)((int)uVar9 >> 0x1f);
      uVar17 = (uVar9 ^ uVar17) - uVar17;
      if (((int)uVar17 < 0x9f) && ((int)uVar16 < 0x9f)) {
        iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar6 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (iVar6 + iVar5 < param_6) {
        uVar11 = 0;
        uVar13 = uVar15;
        param_6 = iVar6 + iVar5;
      }
      uVar12 = (unsigned int)uVar11;
      uVar14 = (unsigned int)uVar13;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < 3);
  }
  *in_stack_000000a4 = uVar14;
  *in_stack_000000ac = uVar12;
  *in_stack_000000b4 = param_6;
  return;
}

