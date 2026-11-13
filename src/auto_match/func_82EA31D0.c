extern unsigned int lbl_831898B8;


void fn_82EA31D0(int param_1,unsigned __int64 param_2,__int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,int param_6,__int64 param_7,__int64 param_8)

{
  int (**pcVar1)();
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  unsigned __int64 uVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  unsigned int uVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  int in_stack_00000054;
  int in_stack_0000005c;
  unsigned int in_stack_0000006c;
  unsigned int in_stack_00000084;
  unsigned int in_stack_0000008c;
  int in_stack_00000094;
  int in_stack_0000009c;
  unsigned int *in_stack_000000a4;
  unsigned int *in_stack_000000ac;
  int *in_stack_000000b4;
  
  uVar17 = (unsigned __int64)in_stack_00000084;
  uVar8 = -(unsigned __int64)(param_7 != 0) & 0xfffffffffffffffd;
  pcVar1 = *(int (***)())(in_stack_0000009c + 0xc);
  uVar5 = -(unsigned int)(param_8 != 0) & 3;
  uVar15 = 0;
  uVar13 = 0;
  uVar10 = -(unsigned __int64)(in_stack_00000054 != 0) & 0xfffffffffffffffd;
  uVar12 = -(unsigned int)(in_stack_0000005c != 0) & 3;
  iVar11 = (int)uVar10;
  if ((int)uVar8 < 0) {
    do {
      uVar2 = *(unsigned int *)(param_1 + 0x564);
      if (iVar11 < 0) {
        uVar6 = (unsigned __int64)((int)(uVar8 + in_stack_0000008c) >> 0x1f);
        uVar6 = (uVar8 + in_stack_0000008c ^ uVar6) - uVar6;
        uVar18 = uVar10;
        do {
          (**(int (***)())(param_1 + 0x9b8))
                    ((param_3 - (unsigned __int64)uVar2) + -1,*(unsigned int *)(param_1 + 0x564),
                     in_stack_0000006c,0x10,uVar18,uVar8,*(unsigned int *)(param_1 + 0x904),
                     *(unsigned int *)(param_1 + 0x618));
          iVar3 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar7 = (unsigned __int64)((int)(uVar18 + uVar17) >> 0x1f);
          uVar7 = (uVar18 + uVar17 ^ uVar7) - uVar7;
          if (((int)uVar7 < 0x9f) && ((int)uVar6 < 0x9f)) {
            iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar6 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094);
          }
          else {
            iVar4 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar4 + iVar3 < param_6) {
            uVar13 = uVar8;
            uVar15 = uVar18;
            param_6 = iVar4 + iVar3;
          }
          uVar18 = uVar18 + 1;
        } while ((__int64)uVar18 < 0);
      }
      uVar2 = *(unsigned int *)(param_1 + 0x564);
      uVar6 = 0;
      uVar18 = (unsigned __int64)((int)(uVar8 + in_stack_0000008c) >> 0x1f);
      uVar18 = (uVar8 + in_stack_0000008c ^ uVar18) - uVar18;
      do {
        (**(int (***)())(param_1 + 0x9b8))
                  (param_3 - (unsigned __int64)uVar2,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,
                   0x10,uVar6,uVar8,*(unsigned int *)(param_1 + 0x904),
                   *(unsigned int *)(param_1 + 0x618));
        iVar3 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar7 = (unsigned __int64)((int)(uVar6 + uVar17) >> 0x1f);
        uVar7 = (uVar6 + uVar17 ^ uVar7) - uVar7;
        if (((int)uVar7 < 0x9f) && ((int)uVar18 < 0x9f)) {
          iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar18 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar4 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar4 + iVar3 < param_6) {
          uVar13 = uVar8;
          uVar15 = uVar6;
          param_6 = iVar4 + iVar3;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 <= (int)uVar12);
      uVar8 = uVar8 + 1;
    } while ((__int64)uVar8 < 0);
  }
  iVar3 = (int)in_stack_0000008c >> 0x1f;
  if (iVar11 < 0) {
    uVar18 = ((unsigned __int64)in_stack_0000008c ^ (__int64)iVar3) - (__int64)iVar3;
    uVar8 = uVar10;
    do {
      (**(int (***)())(param_1 + 0x9b8))
                (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar8,0,
                 *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
      iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar6 = (unsigned __int64)((int)(uVar8 + uVar17) >> 0x1f);
      uVar6 = (uVar8 + uVar17 ^ uVar6) - uVar6;
      if (((int)uVar6 < 0x9f) && ((int)uVar18 < 0x9f)) {
        iVar9 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar18 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar6 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar9 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (iVar9 + iVar4 < param_6) {
        uVar13 = 0;
        uVar15 = uVar8;
        param_6 = iVar9 + iVar4;
      }
      uVar8 = uVar8 + 1;
    } while ((__int64)uVar8 < 0);
  }
  uVar8 = 1;
  if (uVar12 != 0) {
    uVar18 = ((unsigned __int64)in_stack_0000008c ^ (__int64)iVar3) - (__int64)iVar3;
    do {
      (**(int (***)())(param_1 + 0x9b8))
                (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar8,0,
                 *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
      iVar3 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
      uVar6 = (unsigned __int64)((int)(uVar8 + uVar17) >> 0x1f);
      uVar6 = (uVar8 + uVar17 ^ uVar6) - uVar6;
      if (((int)uVar6 < 0x9f) && ((int)uVar18 < 0x9f)) {
        iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar18 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar6 & 0xffffffff) << 2)) * 4 +
                        in_stack_00000094);
      }
      else {
        iVar4 = *(int *)(in_stack_00000094 + 0x14) << 1;
      }
      if (iVar4 + iVar3 < param_6) {
        uVar13 = 0;
        uVar15 = uVar8;
        param_6 = iVar4 + iVar3;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 <= (int)uVar12);
  }
  uVar14 = (unsigned int)uVar13;
  uVar16 = (unsigned int)uVar15;
  uVar8 = 1;
  if (uVar5 != 0) {
    do {
      if (iVar11 < 0) {
        uVar6 = (unsigned __int64)((int)(uVar8 + in_stack_0000008c) >> 0x1f);
        uVar6 = (uVar8 + in_stack_0000008c ^ uVar6) - uVar6;
        uVar18 = uVar10;
        do {
          (**(int (***)())(param_1 + 0x9b8))
                    (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar18,
                     uVar8,*(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
          iVar3 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
          uVar7 = (unsigned __int64)((int)(uVar18 + uVar17) >> 0x1f);
          uVar7 = (uVar18 + uVar17 ^ uVar7) - uVar7;
          if (((int)uVar7 < 0x9f) && ((int)uVar6 < 0x9f)) {
            iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar6 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                            in_stack_00000094);
          }
          else {
            iVar4 = *(int *)(in_stack_00000094 + 0x14) << 1;
          }
          if (iVar4 + iVar3 < param_6) {
            uVar13 = uVar8;
            uVar15 = uVar18;
            param_6 = iVar4 + iVar3;
          }
          uVar18 = uVar18 + 1;
        } while ((__int64)uVar18 < 0);
      }
      uVar6 = 0;
      uVar18 = (unsigned __int64)((int)(uVar8 + in_stack_0000008c) >> 0x1f);
      uVar18 = (uVar8 + in_stack_0000008c ^ uVar18) - uVar18;
      do {
        (**(int (***)())(param_1 + 0x9b8))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar6,uVar8,
                   *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
        iVar3 = (*pcVar1)(param_2,0x10,in_stack_0000006c,0x10,0x10);
        uVar7 = (unsigned __int64)((int)(uVar6 + uVar17) >> 0x1f);
        uVar7 = (uVar6 + uVar17 ^ uVar7) - uVar7;
        if (((int)uVar7 < 0x9f) && ((int)uVar18 < 0x9f)) {
          iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar18 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094) +
                  *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                          in_stack_00000094);
        }
        else {
          iVar4 = *(int *)(in_stack_00000094 + 0x14) << 1;
        }
        if (iVar4 + iVar3 < param_6) {
          uVar13 = uVar8;
          uVar15 = uVar6;
          param_6 = iVar4 + iVar3;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 <= (int)uVar12);
      uVar14 = (unsigned int)uVar13;
      uVar16 = (unsigned int)uVar15;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 <= (int)uVar5);
  }
  *in_stack_000000a4 = uVar16;
  *in_stack_000000ac = uVar14;
  *in_stack_000000b4 = param_6;
  return;
}

