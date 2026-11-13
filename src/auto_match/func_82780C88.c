#define true 1
extern int fn_8277C7D8();
extern int fn_8277E998();
extern int fn_8277E9F8();
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_82780C88(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  __int64 lVar13;
  float *pfVar14;
  unsigned __int64 uVar15;
  unsigned int uVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned int *puVar21;
  unsigned __int64 uVar20;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  
  uVar19 = 0;
  puVar21 = (unsigned int *)(param_1 + 0x1b4);
  uStack_8c = 0;
  *(unsigned int *)(param_1 + 0x1b4) = 0;
  if (*(int *)(param_1 + 0x1a4) != 0) {
    do {
      fn_8277E998(puVar21,(unsigned __int64)
                            *(unsigned int *)(((unsigned int)((uVar19 & 0xffffffff) >> 6) & 0x3fffffc) +
                                     *(int *)(param_1 + 0x1b0)) + (uVar19 & 0xff) * 4);
      uVar19 = uVar19 + 1;
    } while ((uVar19 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x1a4));
  }
  uVar16 = *(int *)(param_1 + 0x194) - 1;
  uStack_90 = *puVar21 - 1;
  uVar16 = *(unsigned int *)(*(int *)((uVar16 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                    (uVar16 * 4 & 0x3fc));
  uVar3 = *(unsigned int *)(*(int *)((uStack_90 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1c0)) +
                   (uStack_90 * 4 & 0x3fc));
  if (*(float *)(*(int *)((uVar3 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x110)) + (uVar3 & 0x3ff) * 8
                + 4) <
      *(float *)(*(int *)((uVar16 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x110)) +
                 (uVar16 & 0x3ff) * 8 + 4)) {
    uStack_90 = *puVar21;
  }
  uVar19 = (unsigned __int64)*(unsigned int *)(param_1 + 0x194);
  while (uVar19 = uVar19 - 1, uVar19 != 0) {
    fn_8277E998(puVar21,(unsigned __int64)
                          *(unsigned int *)(((unsigned int)((uVar19 & 0xffffffff) >> 6) & 0x3fffffc) +
                                   *(int *)(param_1 + 0x1a0)) + (uVar19 & 0xff) * 4);
  }
  if (*(int *)**(unsigned int **)(param_1 + 0x1a0) != *(int *)**(unsigned int **)(param_1 + 0x1b0)) {
    fn_8277E998(puVar21);
  }
  fn_8277C7D8(param_1,&uStack_8c,&uStack_90);
  uVar16 = *puVar21;
  uVar20 = (unsigned __int64)uVar16;
  iVar1 = *(int *)(param_1 + 0x1c0);
  trapWord(6,uVar20,0);
  uVar15 = (unsigned __int64)uStack_8c + 1;
  uVar19 = (uVar20 + uStack_8c) - 1;
  uVar15 = uVar15 - (__int64)(int)((uVar15 & 0xffffffff) / uVar20) * (__int64)(int)uVar16;
  uVar19 = uVar19 - (__int64)(int)((uVar19 & 0xffffffff) / uVar20) * (__int64)(int)uVar16;
  trapWord(6,uVar20,0);
  uStack_88 = *(unsigned int *)(*(int *)((uStack_8c >> 6 & 0x3fffffc) + iVar1) + (uStack_8c & 0xff) * 4);
  uStack_84 = *(unsigned int *)(*(int *)(((unsigned int)uVar15 >> 6 & 0x3fffffc) + iVar1) +
                       ((unsigned int)((uVar15 & 0xffffffff) << 2) & 0x3fc));
  uStack_80 = *(unsigned int *)(*(int *)(((unsigned int)((uVar19 & 0xffffffff) >> 6) & 0x3fffffc) + iVar1) +
                       ((unsigned int)((uVar19 & 0xffffffff) << 2) & 0x3fc));
  uVar3 = uStack_90;
  if (((uStack_88 != uStack_84) && (uStack_84 != uStack_80)) && (uStack_80 != uStack_88)) {
    fn_8277E9F8(param_1 + 0x184,&uStack_88);
    uVar3 = uStack_90;
  }
  do {
    while( true ) {
      uVar7 = (unsigned int)uVar15;
      uVar8 = (unsigned int)uVar19;
      if ((uVar19 & 0xffffffff) != (unsigned __int64)uVar3) break;
      if ((uVar15 & 0xffffffff) == (unsigned __int64)uVar3) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x1c0);
      uStack_84 = *(unsigned int *)(*(int *)((uVar7 >> 6 & 0x3fffffc) + iVar1) +
                           ((unsigned int)((uVar15 & 0xffffffff) << 2) & 0x3fc));
      uVar15 = (uVar15 + 1) -
               (__int64)(int)((uVar15 + 1 & 0xffffffff) / uVar20) * (__int64)(int)uVar16;
      trapWord(6,uVar20,0);
      uStack_88 = *(unsigned int *)(*(int *)((uVar8 >> 6 & 0x3fffffc) + iVar1) +
                           ((unsigned int)((uVar19 & 0xffffffff) << 2) & 0x3fc));
      uStack_80 = *(unsigned int *)(*(int *)(((unsigned int)((uVar15 & 0xffffffff) >> 6) & 0x3fffffc) + iVar1) +
                           ((unsigned int)((uVar15 & 0xffffffff) << 2) & 0x3fc));
LAB_82780eb4:
      if (((uStack_88 != uStack_84) && (uStack_84 != uStack_80)) && (uStack_80 != uStack_88)) {
        fn_8277E9F8(param_1 + 0x184,&uStack_88);
      }
    }
    uVar17 = (uVar19 + uVar20) - 1;
    trapWord(6,uVar20,0);
    lVar13 = (__int64)(int)((uVar17 & 0xffffffff) / uVar20) * (__int64)(int)uVar16;
    if ((uVar15 & 0xffffffff) == (unsigned __int64)uVar3) {
      iVar1 = *(int *)(param_1 + 0x1c0);
      uVar18 = uVar19 & 0xffffffff;
      uVar19 = uVar17 - lVar13;
      uStack_88 = *(unsigned int *)(*(int *)((uVar8 >> 6 & 0x3fffffc) + iVar1) +
                           ((unsigned int)(uVar18 << 2) & 0x3fc));
      uStack_84 = *(unsigned int *)(*(int *)((uVar7 >> 6 & 0x3fffffc) + iVar1) +
                           ((unsigned int)((uVar15 & 0xffffffff) << 2) & 0x3fc));
      uStack_80 = *(unsigned int *)(*(int *)(((unsigned int)((uVar19 & 0xffffffff) >> 6) & 0x3fffffc) + iVar1) +
                           ((unsigned int)((uVar19 & 0xffffffff) << 2) & 0x3fc));
      goto LAB_82780eb4;
    }
    iVar1 = *(int *)(param_1 + 0x1c0);
    uVar17 = uVar17 - lVar13;
    iVar2 = *(int *)(param_1 + 0x110);
    uVar18 = (uVar15 + 1) -
             (__int64)(int)((uVar15 + 1 & 0xffffffff) / (unsigned __int64)uVar16) * (__int64)(int)uVar16;
    trapWord(6,uVar20,0);
    uStack_88 = *(unsigned int *)(*(int *)((uVar8 >> 6 & 0x3fffffc) + iVar1) +
                         ((unsigned int)((uVar19 & 0xffffffff) << 2) & 0x3fc));
    uStack_84 = *(unsigned int *)(*(int *)((uVar7 >> 6 & 0x3fffffc) + iVar1) +
                         ((unsigned int)((uVar15 & 0xffffffff) << 2) & 0x3fc));
    uStack_80 = *(unsigned int *)(*(int *)(((unsigned int)uVar17 >> 6 & 0x3fffffc) + iVar1) +
                         ((unsigned int)((uVar17 & 0xffffffff) << 2) & 0x3fc));
    uStack_70 = *(unsigned int *)(*(int *)(((unsigned int)uVar18 >> 6 & 0x3fffffc) + iVar1) +
                         ((unsigned int)((uVar18 & 0xffffffff) << 2) & 0x3fc));
    pfVar14 = (float *)(*(int *)((uStack_88 >> 8 & 0xfffffc) + iVar2) + (uStack_88 & 0x3ff) * 8);
    pfVar12 = (float *)(*(int *)((uStack_84 >> 8 & 0xfffffc) + iVar2) + (uStack_84 & 0x3ff) * 8);
    pfVar11 = (float *)(*(int *)((uStack_80 >> 8 & 0xfffffc) + iVar2) + (uStack_80 & 0x3ff) * 8);
    pfVar10 = (float *)(*(int *)((uStack_70 >> 8 & 0xfffffc) + iVar2) + (uStack_70 & 0x3ff) * 8);
    fVar5 = *pfVar11 - *pfVar12;
    fVar4 = *pfVar10 - *pfVar14;
    fVar6 = pfVar11[1] - pfVar12[1];
    fVar9 = pfVar10[1] - pfVar14[1];
    uStack_78 = uStack_88;
    uStack_74 = uStack_84;
    if (fVar9 * fVar9 + fVar4 * fVar4 <= fVar6 * fVar6 + fVar5 * fVar5) {
      uVar15 = uVar18;
      if (((uStack_88 != uStack_84) && (uStack_84 != uStack_70)) && (uStack_70 != uStack_88)) {
        fn_8277E9F8(param_1 + 0x184,&uStack_78);
      }
    }
    else {
      uVar19 = uVar17;
      if (((uStack_88 != uStack_84) && (uStack_84 != uStack_80)) && (uStack_80 != uStack_88)) {
        fn_8277E9F8(param_1 + 0x184,&uStack_88);
      }
    }
  } while( true );
}

