extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A981D8();
extern int fn_82F68CC0();
extern unsigned int iStack00000044;
extern unsigned int iStack0000004c;
extern unsigned int iStack_9c;
extern unsigned int iStack_a4;
extern unsigned int uStack0000003c;
extern unsigned int uStack_a0;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


void fn_82AA5638(unsigned __int64 param_1,int param_2,int param_3,int param_4,unsigned int *param_5,
                  unsigned __int64 param_6,int param_7,int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  int iVar15;
  unsigned __int64 uVar14;
  unsigned __int64 uVar16;
  int iVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned int uVar20;
  __int64 lVar21;
  __int64 lVar22;
  __int64 lVar23;
  int iVar24;
  unsigned __int64 uVar25;
  int iVar26;
  unsigned int uVar27;
  unsigned int uStack0000003c;
  int iStack00000044;
  int iStack0000004c;
  unsigned int *in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int auStack_c0 [4];
  unsigned int auStack_b0 [3];
  int iStack_a4;
  unsigned int uStack_a0;
  int iStack_9c;
  
  uStack0000003c = (unsigned int)param_6;
  if (in_stack_00000054 == (unsigned int *)0x0) {
    in_stack_00000054 = auStack_b0;
    auStack_b0[0] = 0;
    auStack_b0[1] = 0;
    uStack_a0 = 0;
    auStack_b0[2] = param_2;
    iStack_a4 = param_3;
    iStack_9c = param_4;
  }
  uVar1 = in_stack_00000054[3];
  uVar25 = (unsigned __int64)in_stack_00000054[2] - (unsigned __int64)*in_stack_00000054;
  uVar2 = in_stack_00000054[5];
  uVar3 = in_stack_00000054[1];
  uVar4 = in_stack_00000054[4];
  iVar26 = (int)uVar25;
  if (param_5 == (unsigned int *)0x0) {
    auStack_c0[0] = 0;
    param_5 = auStack_c0;
    auStack_c0[1] = 0;
    auStack_c0[2] = 0;
  }
  uVar8 = param_3 + 0x1fU & 0xffffffe0;
  uVar10 = param_6;
  iStack00000044 = param_7;
  iStack0000004c = param_8;
  if ((param_6 & 0xffffffff) == (param_1 & 0xffffffff)) {
    uVar16 = (__int64)(int)((param_4 + 3U & 0xfffffffc) * uVar8 * (param_2 + 0x1fU & 0xffffffe0)) *
             (__int64)(int)in_stack_0000005c + 0xfffU & 0xfffff000;
    uVar10 = fn_8265C940(uVar16,0x24870000);
    fn_82A981D8(uVar10,param_6,uVar16);
  }
  uVar20 = in_stack_0000005c >> 2;
  uVar27 = *param_5;
  uVar6 = 1 << (((in_stack_0000005c >> 4) - uVar20) + 3 & 0x3f);
  uVar20 = ((in_stack_0000005c >> 1) >> (uVar20 & 0x3f)) + uVar20;
  uVar16 = ((unsigned __int64)uVar27 + (unsigned __int64)uVar6 & ~((unsigned __int64)uVar6 - 1)) - (unsigned __int64)uVar27;
  iVar17 = (uVar27 + iVar26 & ~(uVar6 - 1)) - uVar27;
  uVar27 = uVar20 + 6;
  iVar15 = iVar26;
  if ((uVar16 & 0xffffffff) <= (uVar25 & 0xffffffff)) {
    iVar15 = (int)uVar16;
  }
  uStack_ec = in_stack_00000054[4] * param_8;
  uStack_f0 = 0;
  if (uVar2 != uVar4) {
    do {
      uVar18 = 0;
      uVar9 = param_5[2] + uStack_f0 >> 2;
      if (uVar1 - uVar3 != 0) {
        uVar19 = (unsigned __int64)((param_5[2] + uStack_f0 & 3) << (uVar27 & 0x3f));
        do {
          uVar5 = *param_5;
          uVar14 = uVar18 + param_5[1];
          iVar7 = (int)((uVar14 & 6) << 2);
          iVar24 = (((unsigned int)uVar14 >> 4) + (uVar8 >> 4) * uVar9) * (param_2 + 0x1fU >> 5);
          uVar11 = (unsigned __int64)(((uVar5 & 7) + iVar7 << (uVar27 & 0x3f)) >> 6);
          uVar13 = ((uVar14 & 0xffffffff) >> 3) + (unsigned __int64)uVar9 & 1;
          lVar23 = uVar13 * 2;
          lVar22 = (uVar14 & 1) * 0x10;
          uVar14 = (((unsigned __int64)((uVar5 >> 5) + iVar24 << (uVar27 & 0x3f)) & 0xfffffff) * 2 +
                   (uVar11 & 0x3fffff0)) * 2 + (uVar11 & 0xf) + uVar19 + lVar22;
          uVar11 = (((unsigned __int64)(uVar5 >> 3) + lVar23) * 2 & 6) + uVar13;
          lVar21 = (__int64)(int)((int)uVar18 + in_stack_00000054[1]) * (__int64)iStack00000044 +
                   (unsigned __int64)uStack_ec;
          fn_82F68CC0((((((uVar11 * 8 & 8) + ((unsigned __int64)(unsigned int)((int)uVar14 >> 6) & 7)) * 8 +
                         (uVar11 & 0xfffffffe)) * 4 + (uVar14 & 0xfffffe00)) * 8 & 0xfffffff8) +
                       (uVar14 & 0x3f) + param_1,
                       (unsigned __int64)(*in_stack_00000054 << (uVar20 & 0x3f)) + lVar21 + uVar10,
                       iVar15 << (uVar20 & 0x3f));
          uVar11 = uVar16;
          if ((int)uVar16 < iVar17) {
            do {
              uVar5 = (unsigned int)(*param_5 + uVar11);
              uVar14 = (unsigned __int64)(((uVar5 & 7) + iVar7 << (uVar27 & 0x3f)) >> 6);
              uVar12 = ((((*param_5 + uVar11 & 0xffffffff) >> 3) + lVar23) * 2 & 6) + uVar13;
              uVar14 = (((unsigned __int64)((uVar5 >> 5) + iVar24 << (uVar27 & 0x3f)) & 0xfffffff) * 2 +
                       (uVar14 & 0x3fffff0)) * 2 + (uVar14 & 0xf) + uVar19 + lVar22;
              fn_82F68CC0((((((uVar12 * 8 & 8) + ((unsigned __int64)(unsigned int)((int)uVar14 >> 6) & 7)) * 8 +
                             (uVar12 & 0xfffffffe)) * 4 + (uVar14 & 0xfffffe00)) * 8 & 0xfffffff8) +
                           (uVar14 & 0x3f) + param_1,
                           (unsigned __int64)(*in_stack_00000054 + (int)uVar11 << (uVar20 & 0x3f)) + lVar21
                           + uVar10,uVar6 << (uVar20 & 0x3f));
              uVar11 = uVar11 + uVar6;
            } while ((int)uVar11 < iVar17);
          }
          if ((uVar11 & 0xffffffff) < (uVar25 & 0xffffffff)) {
            uVar5 = (unsigned int)(*param_5 + uVar11);
            uVar14 = (unsigned __int64)(((uVar5 & 7) + iVar7 << (uVar27 & 0x3f)) >> 6);
            uVar13 = ((((*param_5 + uVar11 & 0xffffffff) >> 3) + lVar23) * 2 & 6) + uVar13;
            uVar14 = (((unsigned __int64)((uVar5 >> 5) + iVar24 << (uVar27 & 0x3f)) & 0xfffffff) * 2 +
                     (uVar14 & 0x3fffff0)) * 2 + (uVar14 & 0xf) + uVar19 + lVar22;
            fn_82F68CC0((((((uVar13 * 8 & 8) + ((unsigned __int64)(unsigned int)((int)uVar14 >> 6) & 7)) * 8 +
                           (uVar13 & 0xfffffffe)) * 4 + (uVar14 & 0xfffffe00)) * 8 & 0xfffffff8) +
                         (uVar14 & 0x3f) + param_1,
                         (unsigned __int64)(*in_stack_00000054 + (int)uVar11 << (uVar20 & 0x3f)) + lVar21 +
                         uVar10,iVar26 - (int)uVar11 << (uVar20 & 0x3f));
          }
          uVar18 = uVar18 + 1;
        } while ((uVar18 & 0xffffffff) < (unsigned __int64)(uVar1 - uVar3));
        param_6 = (unsigned __int64)uStack0000003c;
        param_8 = iStack0000004c;
      }
      uStack_f0 = uStack_f0 + 1;
      uStack_ec = uStack_ec + param_8;
    } while (uStack_f0 < uVar2 - uVar4);
  }
  if ((param_6 & 0xffffffff) == (param_1 & 0xffffffff)) {
    fn_8265C990(uVar10,0x24870000);
  }
  return;
}

