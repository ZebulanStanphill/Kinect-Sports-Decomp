#define CARRY8(a,b) ((((unsigned __int64)(a)) + ((unsigned __int64)(b))) < ((unsigned __int64)(a)))
extern unsigned int *auStack_1c0;
extern unsigned int iStack_1ec;
extern unsigned int lbl_8325ADB0;
extern unsigned int uStack00000024;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_1d4;
extern unsigned int uStack_1e8;
extern unsigned int uStack_1f0;


void fn_82E96A58(int param_1,__int64 param_2,__int64 param_3,int *param_4,int param_5,
                  int *param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar8;
  __int64 lVar6;
  int iVar9;
  __int64 lVar7;
  __int64 lVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar14;
  unsigned __int64 uVar13;
  __int64 lVar15;
  unsigned int uVar17;
  unsigned __int64 uVar16;
  unsigned __int64 uVar18;
  unsigned int uVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  __int64 lVar22;
  __int64 lVar23;
  __int64 lVar24;
  __int64 lVar25;
  __int64 lVar26;
  int (**pcVar27)();
  unsigned int uStack00000024;
  unsigned int uStack00000044;
  unsigned int uStack0000004c;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int *in_stack_0000006c;
  unsigned int *in_stack_00000074;
  int *in_stack_0000007c;
  int in_stack_00000084;
  unsigned int uStack_1f0;
  int iStack_1ec;
  unsigned int uStack_1e8;
  int *piStack_1e0;
  unsigned int uStack_1d4;
  unsigned char auStack_1c0 [256];
  
  uVar1 = param_6[2];
  uVar2 = param_6[3];
  uStack_1f0 = (int)(uVar1 + 2) >> 2;
  uVar18 = (unsigned __int64)(int)uStack_1f0;
  uStack00000024 = (unsigned int)param_3;
  uStack_1e8 = (int)(uVar2 + 2) >> 2;
  uVar3 = param_6[4];
  uVar4 = param_6[5];
  iVar5 = *param_6;
  lVar25 = (__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uStack_1e8 + uVar18 + param_3;
  uStack00000044 = param_7;
  uStack0000004c = param_8;
  iVar8 = (**(int (***)())(param_1 + 0x1bb4))(param_2,0x10,lVar25);
  if (in_stack_00000084 == 0) {
    pcVar27 = *(int (***)())(param_1 + 0x1bb4);
    lVar6 = param_2 + 0x80;
    lVar25 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x564) & 0x1fffffff) * 8 + lVar25;
  }
  else {
    pcVar27 = *(int (***)())(param_1 + 0x1bb4);
    lVar25 = lVar25 + 8;
    lVar6 = param_2 + 8;
  }
  iVar9 = (*pcVar27)(lVar6,0x10,lVar25);
  iStack_1ec = (unsigned int)*(unsigned short *)(&lbl_8325ADB0 + (uStack_1f0 * 4 - uVar2) * 2) +
               (unsigned int)*(unsigned short *)(&lbl_8325ADB0 + (uStack_1e8 * 4 - uVar1) * 2) + iVar9 + iVar8;
  if (iVar5 != 0) {
    uVar19 = (int)(uVar3 + 2) >> 2;
    uVar17 = (int)(uVar4 + 2) >> 2;
    param_3 = (__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar17 + (__int64)(int)uVar19 +
              param_3;
    iVar8 = (**(int (***)())(param_1 + 0x1bb4))(param_2,0x10,param_3);
    if (in_stack_00000084 == 0) {
      pcVar27 = *(int (***)())(param_1 + 0x1bb4);
      lVar25 = param_2 + 0x80;
      param_3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x564) & 0x1fffffff) * 8 + param_3;
    }
    else {
      pcVar27 = *(int (***)())(param_1 + 0x1bb4);
      param_3 = param_3 + 8;
      lVar25 = param_2 + 8;
    }
    iVar9 = (*pcVar27)(lVar25,0x10,param_3);
    iVar8 = (unsigned int)*(unsigned short *)(&lbl_8325ADB0 + (uVar19 * 4 - uVar4) * 2) +
            (unsigned int)*(unsigned short *)(&lbl_8325ADB0 + (uVar17 * 4 - uVar3) * 2) + iVar9 + iVar8;
    if (iVar8 < iStack_1ec) {
      uVar18 = (unsigned __int64)uVar19;
      uStack_1f0 = uVar19;
      iStack_1ec = iVar8;
      uStack_1e8 = uVar17;
    }
  }
  uStack_1d4 = 2;
  piStack_1e0 = param_4;
  do {
    uVar20 = (unsigned __int64)in_stack_00000064;
    if (*piStack_1e0 == 0x4000) {
      lVar25 = 0;
      lVar6 = 0;
    }
    else {
      lVar6 = (__int64)(*piStack_1e0 + 2 >> 2);
      lVar25 = (__int64)(*(int *)((param_5 - (int)param_4) + (int)piStack_1e0) + 2 >> 2);
    }
    lVar15 = -uVar20;
    uVar11 = (unsigned __int64)uStack00000044;
    lVar22 = lVar15;
    if ((int)lVar15 + (int)lVar6 < (int)uStack00000044) {
      lVar22 = uVar11 - lVar6;
    }
    uVar12 = (unsigned __int64)uStack0000004c;
    if ((int)uStack0000004c < (int)((int)lVar6 + in_stack_00000064)) {
      uVar20 = uVar12 - lVar6;
    }
    iVar8 = (int)lVar25;
    if ((int)lVar15 + iVar8 < (int)in_stack_00000054) {
      lVar15 = (unsigned __int64)in_stack_00000054 - lVar25;
    }
    uVar19 = in_stack_00000064;
    if ((int)in_stack_0000005c < (int)(iVar8 + in_stack_00000064)) {
      uVar19 = in_stack_0000005c - iVar8;
    }
    if ((int)lVar15 <= (int)uVar19) {
      do {
        if ((int)lVar22 <= (int)uVar20) {
          uVar18 = lVar22 + lVar6;
          lVar10 = (uVar18 & 0x3fffffff) * 4;
          uVar11 = lVar15 + lVar25;
          lVar24 = (lVar10 - (unsigned __int64)uVar1 & 0x7fffffff) * 2 + -0x7cda5250;
          lVar23 = (lVar10 - (unsigned __int64)uVar3 & 0x7fffffff) * 2 + -0x7cda5250;
          lVar10 = (uVar20 - lVar22) + 1;
          do {
            lVar26 = (__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar11 + uVar18 +
                     (unsigned __int64)uStack00000024;
            iVar8 = (**(int (***)())(param_1 + 0x1bb4))(param_2,0x10,lVar26);
            if (in_stack_00000084 == 0) {
              pcVar27 = *(int (***)())(param_1 + 0x1bb4);
              lVar7 = param_2 + 0x80;
              lVar26 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x564) & 0x1fffffff) * 8 + lVar26;
            }
            else {
              pcVar27 = *(int (***)())(param_1 + 0x1bb4);
              lVar26 = lVar26 + 8;
              lVar7 = param_2 + 8;
            }
            iVar9 = (*pcVar27)(lVar7,0x10,lVar26);
            lVar26 = (uVar11 & 0x3fffffff) * 4;
            if (iVar5 == 0) {
              uVar17 = (unsigned int)*(unsigned short *)
                              (&lbl_8325ADB0 + (int)((lVar26 - (unsigned __int64)uVar2 & 0xffffffff) << 1))
                       + (unsigned int)*(unsigned short *)lVar24;
            }
            else {
              uVar17 = (unsigned int)*(unsigned short *)
                              (&lbl_8325ADB0 + (int)((lVar26 - (unsigned __int64)uVar2 & 0xffffffff) << 1))
                       + (unsigned int)*(unsigned short *)lVar24;
              uVar14 = (unsigned int)*(unsigned short *)
                              (&lbl_8325ADB0 + (int)((lVar26 - (unsigned __int64)uVar4 & 0xffffffff) << 1))
                       + (unsigned int)*(unsigned short *)lVar23;
              if (uVar14 <= uVar17) {
                uVar17 = uVar14;
              }
            }
            iVar8 = uVar17 + iVar9 + iVar8;
            if (iVar8 < iStack_1ec) {
              uStack_1f0 = (unsigned int)((uVar18 & 0xffffffff) << 2);
              uStack_1e8 = (unsigned int)((uVar11 & 0xffffffff) << 2);
              iStack_1ec = iVar8;
            }
            lVar10 = lVar10 + -1;
            uVar18 = uVar18 + 1;
            lVar23 = lVar23 + 8;
            lVar24 = lVar24 + 8;
          } while (lVar10 != 0);
          uVar18 = (unsigned __int64)uStack_1f0;
        }
        lVar15 = lVar15 + 1;
      } while ((int)lVar15 <= (int)uVar19);
      uVar12 = (unsigned __int64)uStack0000004c;
      uVar11 = (unsigned __int64)uStack00000044;
    }
    uVar20 = (unsigned __int64)uStack_1e8;
    uVar16 = -(unsigned __int64)
              !CARRY8((uVar20 - 3) + ((unsigned __int64)in_stack_00000054 & 0x3fffffff) * -4,
                      ((unsigned __int64)in_stack_00000054 & 0x3fffffff) * 4 ^ 0x80000000) &
             0xfffffffffffffffd;
    uVar13 = -(unsigned __int64)
              !CARRY8(((unsigned __int64)in_stack_0000005c & 0x3fffffff) * 4 - (uVar20 + 3),
                      uVar20 + 3 ^ 0x80000000) & 3;
    uVar21 = -(unsigned __int64)
              !CARRY8((uVar18 - 3) + (uVar11 & 0x3fffffff) * -4,
                      (uVar11 & 0x3fffffff) * 4 ^ 0x80000000) & 0xfffffffffffffffd;
    uVar11 = -(unsigned __int64)!CARRY8((uVar12 & 0x3fffffff) * 4 - (uVar18 + 3),uVar18 + 3 ^ 0x80000000) &
             3;
    if ((int)uVar16 < (int)uVar13) {
      uVar20 = uVar16 + uVar20;
      lVar25 = uVar13 - uVar16;
      do {
        if ((int)uVar21 < (int)uVar11) {
          uVar12 = uVar21 + uVar18;
          lVar15 = ((uVar21 - uVar1) + uVar18 & 0x7fffffff) * 2 + -0x7cda5250;
          lVar22 = ((uVar21 - uVar3) + uVar18 & 0x7fffffff) * 2 + -0x7cda5250;
          lVar6 = uVar11 - uVar21;
          do {
            lVar10 = (__int64)*(int *)(param_1 + 0x564) * (__int64)((int)(unsigned int)uVar20 >> 2) +
                     (__int64)((int)(unsigned int)uVar12 >> 2) + (unsigned __int64)uStack00000024;
            (**(int (***)())(param_1 + 0xa5c))
                      (lVar10,*(int *)(param_1 + 0x564),auStack_1c0,0x10,uVar12 & 3,uVar20 & 3,
                       *(unsigned int *)(param_1 + 0x618));
            iVar8 = (**(int (***)())(param_1 + 0x1bb4))(param_2,0x10,auStack_1c0,0x10);
            if (in_stack_00000084 == 0) {
              (**(int (***)())(param_1 + 0xa5c))
                        (((unsigned __int64)*(unsigned int *)(param_1 + 0x564) & 0x1fffffff) * 8 + lVar10,
                         *(unsigned int *)(param_1 + 0x564),auStack_1c0,0x10,uVar12 & 3,uVar20 & 3,
                         *(unsigned int *)(param_1 + 0x618));
              pcVar27 = *(int (***)())(param_1 + 0x1bb4);
              lVar10 = param_2 + 0x80;
            }
            else {
              (**(int (***)())(param_1 + 0xa5c))(lVar10 + 8);
              pcVar27 = *(int (***)())(param_1 + 0x1bb4);
              lVar10 = param_2 + 8;
            }
            iVar9 = (*pcVar27)(lVar10,0x10,auStack_1c0,0x10);
            if (iVar5 == 0) {
              uVar19 = (unsigned int)*(unsigned short *)(&lbl_8325ADB0 + (int)((uVar20 - uVar2 & 0xffffffff) << 1))
                       + (unsigned int)*(unsigned short *)lVar15;
            }
            else {
              uVar19 = (unsigned int)*(unsigned short *)(&lbl_8325ADB0 + (int)((uVar20 - uVar2 & 0xffffffff) << 1))
                       + (unsigned int)*(unsigned short *)lVar15;
              uVar17 = (unsigned int)*(unsigned short *)(&lbl_8325ADB0 + (int)((uVar20 - uVar4 & 0xffffffff) << 1))
                       + (unsigned int)*(unsigned short *)lVar22;
              if (uVar17 <= uVar19) {
                uVar19 = uVar17;
              }
            }
            iVar8 = uVar19 + iVar9 + iVar8;
            if (iVar8 < iStack_1ec) {
              uStack_1f0 = (unsigned int)uVar12;
              iStack_1ec = iVar8;
              uStack_1e8 = (unsigned int)uVar20;
            }
            lVar6 = lVar6 + -1;
            uVar12 = uVar12 + 1;
            lVar22 = lVar22 + 2;
            lVar15 = lVar15 + 2;
          } while (lVar6 != 0);
        }
        lVar25 = lVar25 + -1;
        uVar20 = uVar20 + 1;
      } while (lVar25 != 0);
      uVar18 = (unsigned __int64)uStack_1f0;
    }
    uVar20 = (unsigned __int64)uStack_1d4;
    piStack_1e0 = piStack_1e0 + 1;
    uStack_1d4 = (unsigned int)(uVar20 - 1);
  } while (uVar20 - 1 != 0);
  *in_stack_0000006c = (int)uVar18;
  *in_stack_00000074 = uStack_1e8;
  *in_stack_0000007c = iStack_1ec;
  return;
}

