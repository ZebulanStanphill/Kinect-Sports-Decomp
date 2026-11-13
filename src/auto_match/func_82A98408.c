extern unsigned int *auStack_b8;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A981D8();
extern int memcpy();
extern unsigned int iStack0000003c;
extern unsigned int iStack_a4;
extern unsigned int uStack00000034;


void fn_82A98408(unsigned __int64 param_1,int param_2,int param_3,unsigned int *param_4,unsigned __int64 param_5,
                  int param_6,unsigned int *param_7,unsigned int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar11;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  int iVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  __int64 lVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  int iVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uStack00000034;
  int iStack0000003c;
  unsigned int auStack_b8 [5];
  int iStack_a4;
  
  uStack00000034 = (unsigned int)param_5;
  uVar12 = 0;
  if (param_7 == (unsigned int *)0x0) {
    param_7 = auStack_b8 + 2;
    auStack_b8[2] = 0;
    auStack_b8[3] = 0;
    auStack_b8[4] = param_2;
    iStack_a4 = param_3;
  }
  uVar1 = param_7[3];
  uVar2 = param_7[1];
  uVar15 = (unsigned __int64)param_7[2] - (unsigned __int64)*param_7;
  if (param_4 == (unsigned int *)0x0) {
    auStack_b8[0] = 0;
    param_4 = auStack_b8;
    auStack_b8[1] = 0;
  }
  uVar6 = param_5;
  iStack0000003c = param_6;
  if ((param_5 & 0xffffffff) == (param_1 & 0xffffffff)) {
    uVar13 = (__int64)(int)((param_3 + 0x1fU & 0xffffffe0) * (param_2 + 0x1fU & 0xffffffe0)) *
             (__int64)(int)param_8 + 0xfffU & 0xfffff000;
    uVar6 = fn_8265C940(uVar13,0x24870000);
    fn_82A981D8(uVar6,param_5,uVar13);
  }
  uVar21 = param_8 >> 2;
  uVar22 = *param_4;
  uVar4 = 1 << (((param_8 >> 4) - uVar21) + 3 & 0x3f);
  uVar21 = ((param_8 >> 1) >> (uVar21 & 0x3f)) + uVar21;
  uVar13 = ((unsigned __int64)uVar22 + (unsigned __int64)uVar4 & ~((unsigned __int64)uVar4 - 1)) - (unsigned __int64)uVar22;
  iVar14 = (uVar22 + (int)uVar15 & ~(uVar4 - 1)) - uVar22;
  uVar22 = uVar21 + 6;
  iVar11 = (int)uVar15;
  if ((uVar13 & 0xffffffff) <= (uVar15 & 0xffffffff)) {
    iVar11 = (int)uVar13;
  }
  if (uVar1 - uVar2 != 0) {
    uVar10 = uVar15;
    do {
      uVar3 = *param_4;
      uVar8 = uVar12 + param_4[1];
      iVar5 = (int)((uVar8 & 6) << 2);
      iVar20 = ((unsigned int)uVar8 >> 5) * (param_2 + 0x1fU >> 5);
      uVar7 = (unsigned __int64)(((uVar3 & 7) + iVar5 << (uVar22 & 0x3f)) >> 6);
      uVar18 = (unsigned __int64)(((unsigned int)uVar8 >> 3 & 1) << (uVar22 & 0x3f));
      uVar19 = (uVar8 & 0xffffffff) >> 2 & 2;
      lVar17 = (uVar8 & 1) * 0x10;
      uVar8 = (uVar8 & 0xffffffff) >> 4 & 1;
      uVar7 = (((unsigned __int64)((uVar3 >> 5) + iVar20 << (uVar22 & 0x3f)) & 0x1fffffff) +
              (uVar7 & 0x3fffff0)) * 2 + (uVar7 & 0xf) + uVar18 + lVar17;
      uVar9 = (((uVar3 >> 3) + uVar19) * 2 & 6) + uVar8;
      lVar16 = (__int64)(int)((int)uVar12 + param_7[1]) * (__int64)iStack0000003c;
      memcpy((((((uVar9 * 8 & 8) + ((unsigned __int64)(unsigned int)((int)uVar7 >> 6) & 7)) * 8 +
                     (uVar9 & 0xfffffffe)) * 4 + (uVar7 & 0xfffffe00)) * 8 & 0xfffffff8) +
                   (uVar7 & 0x3f) + param_1,
                   (unsigned __int64)(*param_7 << (uVar21 & 0x3f)) + lVar16 + uVar6,
                   iVar11 << (uVar21 & 0x3f));
      uVar7 = uVar13;
      if ((int)uVar13 < iVar14) {
        do {
          uVar3 = (unsigned int)(*param_4 + uVar7);
          uVar10 = (unsigned __int64)(((uVar3 & 7) + iVar5 << (uVar22 & 0x3f)) >> 6);
          uVar9 = ((((*param_4 + uVar7 & 0xffffffff) >> 3) + uVar19) * 2 & 6) + uVar8;
          uVar10 = (((unsigned __int64)((uVar3 >> 5) + iVar20 << (uVar22 & 0x3f)) & 0x1fffffff) +
                   (uVar10 & 0x3fffff0)) * 2 + (uVar10 & 0xf) + uVar18 + lVar17;
          memcpy((((((uVar9 * 8 & 8) + ((unsigned __int64)(unsigned int)((int)uVar10 >> 6) & 7)) * 8 +
                         (uVar9 & 0xfffffffe)) * 4 + (uVar10 & 0xfffffe00)) * 8 & 0xfffffff8) +
                       (uVar10 & 0x3f) + param_1,
                       (unsigned __int64)(*param_7 + (int)uVar7 << (uVar21 & 0x3f)) + lVar16 + uVar6,
                       uVar4 << (uVar21 & 0x3f));
          uVar7 = uVar7 + uVar4;
        } while ((int)uVar7 < iVar14);
        uVar10 = uVar15 & 0xffffffff;
      }
      if ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff)) {
        uVar3 = (unsigned int)(*param_4 + uVar7);
        uVar9 = (unsigned __int64)(((uVar3 & 7) + iVar5 << (uVar22 & 0x3f)) >> 6);
        uVar8 = ((((*param_4 + uVar7 & 0xffffffff) >> 3) + uVar19) * 2 & 6) + uVar8;
        uVar9 = (((unsigned __int64)((uVar3 >> 5) + iVar20 << (uVar22 & 0x3f)) & 0x1fffffff) +
                (uVar9 & 0x3fffff0)) * 2 + (uVar9 & 0xf) + uVar18 + lVar17;
        memcpy((((((uVar8 * 8 & 8) + ((unsigned __int64)(unsigned int)((int)uVar9 >> 6) & 7)) * 8 +
                       (uVar8 & 0xfffffffe)) * 4 + (uVar9 & 0xfffffe00)) * 8 & 0xfffffff8) +
                     (uVar9 & 0x3f) + param_1,
                     (unsigned __int64)(*param_7 + (int)uVar7 << (uVar21 & 0x3f)) + lVar16 + uVar6,
                     (int)uVar10 - (int)uVar7 << (uVar21 & 0x3f));
      }
      uVar12 = uVar12 + 1;
    } while ((uVar12 & 0xffffffff) < (unsigned __int64)(uVar1 - uVar2));
    param_5 = (unsigned __int64)uStack00000034;
  }
  if ((param_5 & 0xffffffff) == (param_1 & 0xffffffff)) {
    fn_8265C990(uVar6,0x24870000);
  }
  return;
}

