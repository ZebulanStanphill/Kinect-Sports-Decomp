extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A981D8();
extern int memcpy();
extern unsigned int iStack0000001c;
extern unsigned int iStack_a4;
extern unsigned int uStack0000002c;


void fn_82A987D8(unsigned __int64 param_1,int param_2,int *param_3,unsigned __int64 param_4,int param_5,
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
  int iStack0000001c;
  unsigned int uStack0000002c;
  int aiStack_b8 [5];
  int iStack_a4;
  
  uStack0000002c = (unsigned int)param_4;
  uVar12 = 0;
  if (param_7 == (unsigned int *)0x0) {
    param_7 = (unsigned int *)(aiStack_b8 + 2);
    aiStack_b8[2] = 0;
    aiStack_b8[3] = 0;
    aiStack_b8[4] = param_5;
    iStack_a4 = param_6;
  }
  uVar1 = param_7[3];
  uVar2 = param_7[1];
  uVar15 = (unsigned __int64)param_7[2] - (unsigned __int64)*param_7;
  if (param_3 == (int *)0x0) {
    aiStack_b8[0] = 0;
    param_3 = aiStack_b8;
    aiStack_b8[1] = 0;
  }
  uVar6 = param_4;
  iStack0000001c = param_2;
  if ((param_4 & 0xffffffff) == (param_1 & 0xffffffff)) {
    uVar13 = (__int64)(int)((param_6 + 0x1fU & 0xffffffe0) * (param_5 + 0x1fU & 0xffffffe0)) *
             (__int64)(int)param_8 + 0xfffU & 0xfffff000;
    uVar6 = fn_8265C940(uVar13,0x24870000);
    fn_82A981D8(uVar6,param_4,uVar13);
  }
  uVar21 = param_8 >> 2;
  uVar22 = *param_7;
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
      uVar3 = *param_7;
      uVar8 = uVar12 + param_7[1];
      iVar5 = (int)((uVar8 & 6) << 2);
      iVar20 = ((unsigned int)uVar8 >> 5) * (param_5 + 0x1fU >> 5);
      uVar7 = (unsigned __int64)(((uVar3 & 7) + iVar5 << (uVar22 & 0x3f)) >> 6);
      uVar19 = (uVar8 & 0xffffffff) >> 2 & 2;
      uVar18 = (unsigned __int64)(((unsigned int)uVar8 >> 3 & 1) << (uVar22 & 0x3f));
      lVar17 = (uVar8 & 1) * 0x10;
      uVar8 = (uVar8 & 0xffffffff) >> 4 & 1;
      uVar7 = (((unsigned __int64)((uVar3 >> 5) + iVar20 << (uVar22 & 0x3f)) & 0x1fffffff) +
              (uVar7 & 0x3fffff0)) * 2 + (uVar7 & 0xf) + uVar18 + lVar17;
      uVar9 = (((uVar3 >> 3) + uVar19) * 2 & 6) + uVar8;
      lVar16 = (__int64)(param_3[1] + (int)uVar12) * (__int64)iStack0000001c;
      memcpy((unsigned __int64)(unsigned int)(*param_3 << (uVar21 & 0x3f)) + lVar16 + param_1,
                   (((((uVar9 * 8 & 8) + ((unsigned __int64)(unsigned int)((int)uVar7 >> 6) & 7)) * 8 +
                     (uVar9 & 0xfffffffe)) * 4 + (uVar7 & 0xfffffe00)) * 8 & 0xfffffff8) +
                   (uVar7 & 0x3f) + uVar6,iVar11 << (uVar21 & 0x3f));
      uVar7 = uVar13;
      if ((int)uVar13 < iVar14) {
        do {
          uVar3 = (unsigned int)(*param_7 + uVar7);
          uVar10 = (unsigned __int64)(((uVar3 & 7) + iVar5 << (uVar22 & 0x3f)) >> 6);
          uVar9 = ((((*param_7 + uVar7 & 0xffffffff) >> 3) + uVar19) * 2 & 6) + uVar8;
          uVar10 = (((unsigned __int64)((uVar3 >> 5) + iVar20 << (uVar22 & 0x3f)) & 0x1fffffff) +
                   (uVar10 & 0x3fffff0)) * 2 + (uVar10 & 0xf) + uVar18 + lVar17;
          memcpy((unsigned __int64)(unsigned int)(*param_3 + (int)uVar7 << (uVar21 & 0x3f)) + lVar16 +
                       param_1,(((((uVar9 * 8 & 8) + ((unsigned __int64)(unsigned int)((int)uVar10 >> 6) & 7)) * 8
                                 + (uVar9 & 0xfffffffe)) * 4 + (uVar10 & 0xfffffe00)) * 8 &
                               0xfffffff8) + (uVar10 & 0x3f) + uVar6,uVar4 << (uVar21 & 0x3f));
          uVar7 = uVar7 + uVar4;
        } while ((int)uVar7 < iVar14);
        uVar10 = uVar15 & 0xffffffff;
      }
      if ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff)) {
        uVar3 = (unsigned int)(*param_7 + uVar7);
        uVar9 = (unsigned __int64)(((uVar3 & 7) + iVar5 << (uVar22 & 0x3f)) >> 6);
        uVar8 = ((((*param_7 + uVar7 & 0xffffffff) >> 3) + uVar19) * 2 & 6) + uVar8;
        uVar9 = (((unsigned __int64)((uVar3 >> 5) + iVar20 << (uVar22 & 0x3f)) & 0x1fffffff) +
                (uVar9 & 0x3fffff0)) * 2 + (uVar9 & 0xf) + uVar18 + lVar17;
        memcpy((unsigned __int64)(unsigned int)(*param_3 + (int)uVar7 << (uVar21 & 0x3f)) + lVar16 + param_1,
                     (((((uVar8 * 8 & 8) + ((unsigned __int64)(unsigned int)((int)uVar9 >> 6) & 7)) * 8 +
                       (uVar8 & 0xfffffffe)) * 4 + (uVar9 & 0xfffffe00)) * 8 & 0xfffffff8) +
                     (uVar9 & 0x3f) + uVar6,(int)uVar10 - (int)uVar7 << (uVar21 & 0x3f));
      }
      uVar12 = uVar12 + 1;
    } while ((uVar12 & 0xffffffff) < (unsigned __int64)(uVar1 - uVar2));
    param_4 = (unsigned __int64)uStack0000002c;
  }
  if ((param_4 & 0xffffffff) == (param_1 & 0xffffffff)) {
    fn_8265C990(uVar6,0x24870000);
  }
  return;
}

