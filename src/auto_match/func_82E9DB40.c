extern unsigned int lbl_831898B8;


void fn_82E9DB40(int param_1,unsigned __int64 param_2,__int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,int param_6,__int64 param_7,__int64 param_8)

{
  int (**pcVar1)();
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  int iVar15;
  unsigned __int64 uVar14;
  unsigned __int64 uVar16;
  unsigned int uVar17;
  unsigned __int64 uVar18;
  unsigned int uVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  unsigned __int64 uVar22;
  int iVar23;
  int in_stack_00000054;
  int in_stack_0000005c;
  unsigned int in_stack_0000006c;
  int in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000094;
  unsigned int in_stack_0000009c;
  unsigned int in_stack_000000a4;
  unsigned int *in_stack_000000ac;
  unsigned int *in_stack_000000b4;
  int *in_stack_000000bc;
  
  uVar20 = (unsigned __int64)in_stack_0000009c;
  uVar4 = -(unsigned __int64)(in_stack_00000054 != 0);
  uVar12 = -(unsigned __int64)(param_7 != 0) & 0xfffffffffffffffe;
  pcVar1 = *(int (***)())(in_stack_00000094 + 0xc);
  uVar21 = 2;
  uVar22 = uVar4 & 0xfffffffffffffffe;
  uVar9 = -(unsigned int)(param_8 != 0) & 2;
  iVar23 = (int)uVar22;
  uVar8 = -(unsigned int)(in_stack_0000005c != 0) & 2;
  uVar18 = 0;
  uVar16 = 0;
  if ((int)uVar12 < 0) {
    do {
      uVar2 = *(unsigned int *)(param_1 + 0x564);
      iVar7 = (int)uVar12 >> 1;
      if ((int)uVar22 < 0) {
        uVar10 = iVar7 + in_stack_000000a4;
        uVar3 = (int)uVar10 >> 0x1f;
        iVar6 = (uVar10 ^ uVar3) - uVar3;
        do {
          if (in_stack_00000084 == 1) {
            (**(int (***)())(param_1 + 0x9b8))();
          }
          else {
            (**(int (***)())(param_1 + 0x9c0))
                      ((param_3 - (unsigned __int64)uVar2) + -1,*(unsigned int *)(param_1 + 0x564),
                       in_stack_0000006c,0x10,uVar22,uVar12,in_stack_00000084,
                       *(unsigned int *)(param_1 + 0x618));
          }
          iVar5 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar13 = (__int64)((int)uVar22 >> 1) + uVar20;
          uVar11 = (unsigned __int64)((int)uVar13 >> 0x1f);
          uVar11 = (uVar13 ^ uVar11) - uVar11;
          if (((int)uVar11 < 0x9f) && (iVar6 < 0x9f)) {
            iVar15 = *(int *)(*(int *)(&lbl_831898B8 + iVar6 * 4) * 4 + in_stack_0000008c) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar11 & 0xffffffff) << 2)) * 4 +
                             in_stack_0000008c);
          }
          else {
            iVar15 = *(int *)(in_stack_0000008c + 0x14) << 1;
          }
          if (iVar15 + iVar5 < param_6) {
            uVar16 = uVar12;
            uVar18 = uVar22;
            param_6 = iVar15 + iVar5;
          }
          uVar22 = uVar22 + 2;
        } while ((__int64)uVar22 < 0);
      }
      uVar2 = *(unsigned int *)(param_1 + 0x564);
      uVar22 = 0;
      if (-1 < (int)uVar8) {
        uVar10 = iVar7 + in_stack_000000a4;
        uVar3 = (int)uVar10 >> 0x1f;
        iVar7 = (uVar10 ^ uVar3) - uVar3;
        do {
          if (in_stack_00000084 == 1) {
            (**(int (***)())(param_1 + 0x9b8))();
          }
          else {
            (**(int (***)())(param_1 + 0x9c0))
                      (param_3 - (unsigned __int64)uVar2,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c
                       ,0x10,uVar22,uVar12,in_stack_00000084,*(unsigned int *)(param_1 + 0x618));
          }
          iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar13 = (__int64)((int)uVar22 >> 1) + uVar20;
          uVar11 = (unsigned __int64)((int)uVar13 >> 0x1f);
          uVar11 = (uVar13 ^ uVar11) - uVar11;
          if (((int)uVar11 < 0x9f) && (iVar7 < 0x9f)) {
            iVar5 = *(int *)(*(int *)(&lbl_831898B8 + iVar7 * 4) * 4 + in_stack_0000008c) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar11 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c);
          }
          else {
            iVar5 = *(int *)(in_stack_0000008c + 0x14) << 1;
          }
          if (iVar5 + iVar6 < param_6) {
            uVar16 = uVar12;
            uVar18 = uVar22;
            param_6 = iVar5 + iVar6;
          }
          uVar22 = uVar22 + 2;
        } while ((int)uVar22 <= (int)uVar8);
      }
      uVar22 = uVar4 & 0xfffffffe;
      uVar12 = uVar12 + 2;
    } while ((__int64)uVar12 < 0);
  }
  uVar12 = (unsigned __int64)in_stack_000000a4;
  iVar7 = (int)in_stack_000000a4 >> 0x1f;
  if ((int)uVar22 < 0) {
    uVar11 = (uVar12 ^ (__int64)iVar7) - (__int64)iVar7;
    do {
      if (in_stack_00000084 == 1) {
        (**(int (***)())(param_1 + 0x9b8))();
      }
      else {
        (**(int (***)())(param_1 + 0x9c0))
                  (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar22,0,
                   in_stack_00000084,*(unsigned int *)(param_1 + 0x618));
      }
      iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar14 = (__int64)((int)uVar22 >> 1) + uVar20;
      uVar13 = (unsigned __int64)((int)uVar14 >> 0x1f);
      uVar13 = (uVar14 ^ uVar13) - uVar13;
      if (((int)uVar13 < 0x9f) && ((int)uVar11 < 0x9f)) {
        iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar11 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar13 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c);
      }
      else {
        iVar5 = *(int *)(in_stack_0000008c + 0x14) << 1;
      }
      if (iVar5 + iVar6 < param_6) {
        uVar16 = 0;
        uVar18 = uVar22;
        param_6 = iVar5 + iVar6;
      }
      uVar22 = uVar22 + 2;
    } while ((__int64)uVar22 < 0);
  }
  uVar22 = 2;
  if (1 < uVar8) {
    uVar11 = (uVar12 ^ (__int64)iVar7) - (__int64)iVar7;
    do {
      if (in_stack_00000084 == 1) {
        (**(int (***)())(param_1 + 0x9b8))();
      }
      else {
        (**(int (***)())(param_1 + 0x9c0))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar22,0,
                   in_stack_00000084,*(unsigned int *)(param_1 + 0x618));
      }
      iVar7 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar14 = (__int64)((int)uVar22 >> 1) + uVar20;
      uVar13 = (unsigned __int64)((int)uVar14 >> 0x1f);
      uVar13 = (uVar14 ^ uVar13) - uVar13;
      if (((int)uVar13 < 0x9f) && ((int)uVar11 < 0x9f)) {
        iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar11 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar13 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000008c);
      }
      else {
        iVar6 = *(int *)(in_stack_0000008c + 0x14) << 1;
      }
      if (iVar6 + iVar7 < param_6) {
        uVar16 = 0;
        uVar18 = uVar22;
        param_6 = iVar6 + iVar7;
      }
      uVar22 = uVar22 + 2;
    } while ((int)uVar22 <= (int)uVar8);
  }
  uVar17 = (unsigned int)uVar16;
  uVar19 = (unsigned int)uVar18;
  if (1 < uVar9) {
    do {
      uVar22 = uVar4 & 0xfffffffe;
      iVar7 = (int)uVar21 >> 1;
      if (iVar23 < 0) {
        uVar13 = (__int64)iVar7 + uVar12;
        uVar11 = (unsigned __int64)((int)uVar13 >> 0x1f);
        uVar11 = (uVar13 ^ uVar11) - uVar11;
        do {
          if (in_stack_00000084 == 1) {
            (**(int (***)())(param_1 + 0x9b8))();
          }
          else {
            (**(int (***)())(param_1 + 0x9c0))
                      (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar22,
                       uVar21,in_stack_00000084,*(unsigned int *)(param_1 + 0x618));
          }
          iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar14 = (__int64)((int)uVar22 >> 1) + uVar20;
          uVar13 = (unsigned __int64)((int)uVar14 >> 0x1f);
          uVar13 = (uVar14 ^ uVar13) - uVar13;
          if (((int)uVar13 < 0x9f) && ((int)uVar11 < 0x9f)) {
            iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar11 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar13 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c);
          }
          else {
            iVar5 = *(int *)(in_stack_0000008c + 0x14) << 1;
          }
          if (iVar5 + iVar6 < param_6) {
            uVar16 = uVar21;
            uVar18 = uVar22;
            param_6 = iVar5 + iVar6;
          }
          uVar22 = uVar22 + 2;
        } while ((__int64)uVar22 < 0);
      }
      uVar22 = 0;
      if (-1 < (int)uVar8) {
        uVar13 = (__int64)iVar7 + uVar12;
        uVar11 = (unsigned __int64)((int)uVar13 >> 0x1f);
        uVar11 = (uVar13 ^ uVar11) - uVar11;
        do {
          if (in_stack_00000084 == 1) {
            (**(int (***)())(param_1 + 0x9b8))();
          }
          else {
            (**(int (***)())(param_1 + 0x9c0))
                      (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar22,uVar21
                       ,in_stack_00000084,*(unsigned int *)(param_1 + 0x618));
          }
          iVar7 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar14 = (__int64)((int)uVar22 >> 1) + uVar20;
          uVar13 = (unsigned __int64)((int)uVar14 >> 0x1f);
          uVar13 = (uVar14 ^ uVar13) - uVar13;
          if (((int)uVar13 < 0x9f) && ((int)uVar11 < 0x9f)) {
            iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar11 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar13 & 0xffffffff) << 2)) * 4 +
                            in_stack_0000008c);
          }
          else {
            iVar6 = *(int *)(in_stack_0000008c + 0x14) << 1;
          }
          if (iVar6 + iVar7 < param_6) {
            uVar16 = uVar21;
            uVar18 = uVar22;
            param_6 = iVar6 + iVar7;
          }
          uVar22 = uVar22 + 2;
        } while ((int)uVar22 <= (int)uVar8);
      }
      uVar17 = (unsigned int)uVar16;
      uVar19 = (unsigned int)uVar18;
      uVar21 = uVar21 + 2;
    } while ((int)uVar21 <= (int)uVar9);
  }
  *in_stack_000000ac = uVar19;
  *in_stack_000000b4 = uVar17;
  *in_stack_000000bc = param_6;
  return;
}

