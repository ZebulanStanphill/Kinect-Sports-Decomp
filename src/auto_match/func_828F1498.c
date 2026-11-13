typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_120;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_208;
extern unsigned int *auStack_250;
extern unsigned int *auStack_268;
extern unsigned int *auStack_2a8;
extern unsigned int *auStack_e0;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_829206B8();
extern int fn_82920CA0();
extern int fn_82923990();
extern int fn_82923C40();
extern int fn_82923DA0();
extern int fn_82A2AE40();
extern int fn_82A94368();
extern int fn_82A947A0();
extern int fn_82A94AA8();
extern int fn_82A94F60();
extern int fn_82A94F88();
extern int fn_82A98408();
extern int fn_82A98F18();
extern int fn_82C449C8();
extern int fn_82F68CC0();
extern unsigned int iStack_178;
extern unsigned int *iStack_1b4;
extern unsigned int iStack_228;
extern unsigned int iStack_230;
extern unsigned int lbl_821A7F10;
extern unsigned int uStack00000044;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_138;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_19c;
extern unsigned int uStack_1a4;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1c8;
extern unsigned int uStack_1cc;
extern unsigned int uStack_1e0;
extern unsigned int uStack_1e4;
extern unsigned int uStack_1e8;
extern unsigned int uStack_20c;
extern unsigned int uStack_210;
extern unsigned int uStack_214;
extern unsigned int uStack_218;
extern unsigned int uStack_21c;
extern unsigned int uStack_220;
extern unsigned int uStack_224;
extern unsigned int uStack_22c;
extern unsigned int uStack_270;
extern unsigned int uStack_274;
extern unsigned int uStack_278;
extern unsigned int uStack_27c;
extern unsigned int uStack_280;
extern unsigned int uStack_290;
extern unsigned int uStack_294;
extern unsigned int uStack_298;
extern unsigned int uStack_29c;
extern unsigned int uStack_2a0;
extern unsigned int uStack_2ac;
extern unsigned int uStack_2b0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;


unsigned __int64
fn_828F1498(int param_1, unsigned __int64 param_2, unsigned int *param_3, unsigned __int64 param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned int param_7, unsigned int *param_8, int in_stack_00000054, unsigned int in_stack_0000005c, unsigned int in_stack_00000064, int in_stack_0000006c, unsigned int in_stack_00000074)

{
  unsigned int uVar1;
  bool bVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  int iVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned int uVar19;
  unsigned int *puStack00000024;
  unsigned int uStack00000044;





  unsigned int uStack_2b0;
  unsigned int uStack_2ac;
  unsigned int auStack_2a8;
  unsigned int uStack_2a0;
  unsigned int uStack_29c;
  unsigned int uStack_298;
  unsigned int uStack_294;
  unsigned int uStack_290;
  unsigned int uStack_280;
  unsigned int uStack_27c;
  unsigned int uStack_278;
  unsigned int uStack_274;
  unsigned int uStack_270;
  unsigned char auStack_268 [24];
  unsigned char auStack_250 [32];
  struct { int first; unsigned int second; } stack_pair_230;

  int iStack_228;
  unsigned int uStack_224;
  unsigned int uStack_220;
  unsigned int uStack_21c;
  unsigned int uStack_218;
  unsigned int uStack_214;
  unsigned int uStack_210;
  unsigned int uStack_20c;
  unsigned char auStack_208 [32];
  unsigned int uStack_1e8;
  unsigned int uStack_1e4;
  unsigned int uStack_1e0;
  unsigned char auStack_1d0 [4];
  unsigned int uStack_1cc;
  unsigned int uStack_1c8;
  unsigned int uStack_1c0;
  int iStack_1b4;
  unsigned int uStack_1a4;
  unsigned int uStack_19c;
  unsigned char auStack_190 [16];
  unsigned int uStack_180;
  unsigned int uStack_17c;
  int iStack_178;
  unsigned int uStack_138;
  unsigned char auStack_120 [4];
  unsigned int uStack_11c;
  unsigned int uStack_118;
  unsigned int uStack_114;
  unsigned char auStack_e0 [4];
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  
  puStack00000024 = param_3;
  uStack00000044 = param_7;
  fn_829206B8(auStack_268);
  fn_82C449C8(auStack_250);
  uStack_298 = 0;
  uVar10 = 0;
  uStack_2ac = 0;
  uVar11 = 0;
  auStack_2a8 = 0;
  uVar12 = 0;
  uStack_2a0 = 0;
  uVar15 = 0;
  uStack_2b0 = 0;
  uVar17 = 0;
  lVar16 = 0;
  uStack_294 = 0;
  uVar9 = 0;
  uVar8 = 0;
  if ((param_1 == 0) || ((param_4 & 0xffffffff) == 0)) {
    fn_82923C40(auStack_250);
    fn_82920CA0(auStack_268);
    return 0xffffffff8876086c;
  }
  if (param_8 == (unsigned int *)0x0) {
LAB_828f154c:
    uVar18 = 0xffffffff8876086c;
  }
  else {
    if (in_stack_0000006c == -1) {
      in_stack_0000006c = 0x80004;
    }
    uVar18 = fn_82923DA0(auStack_250,&uStack_180,param_1,param_2,param_3,0,0);
    if ((int)uVar18 < 0) goto LAB_828f1554;
    fn_82A94368(param_1,0,auStack_1d0);
    uVar19 = uStack_19c & 1;
    uStack_290 = uStack_19c >> 1 & 1;
    uVar13 = (param_5 & 0xffffffff) >> 8 & 1;
    if ((in_stack_00000054 == 0) || ((0x10 < (int)param_8[2] && (0x10 < (int)param_8[3])))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    iVar14 = (int)uVar13;
    uStack_270 = uVar19;
    if (iVar14 != 0) {
      fn_82A94F88(param_5 & 0x3f,&uStack_298,&uStack_2ac);
      if (bVar2) {
        uVar11 = (unsigned __int64)in_stack_0000005c;
        if ((((uVar11 == 0) || (0x2000 < uVar11)) ||
            (uVar7 = (unsigned __int64)in_stack_00000064, uVar7 == 0)) || (0x2000 < uVar7))
        goto LAB_828f154c;
        uVar19 = param_8[3];
        if ((int)param_8[3] < (int)param_8[2]) {
          uVar19 = param_8[2];
        }
        uVar15 = uVar11;
        if (uVar11 <= uVar7) {
          uVar15 = uVar7;
        }
        lVar16 = 0;
        for (; uVar19 < uVar15; uVar15 = uVar15 >> 1) {
          lVar16 = lVar16 + 1;
        }
        lVar3 = fn_82A94AA8(uVar11,uVar7,0);
        uVar15 = (0x20 - lVar3) - LZCOUNT(in_stack_0000005c - 1);
        uVar17 = (0x20 - lVar3) - LZCOUNT(in_stack_00000064 - 1);
        lVar6 = ((unsigned __int64)uStack_298 & 0x7ffffff) * 0x20;
        lVar3 = ((unsigned __int64)uStack_2ac & 0x7ffffff) * 0x20;
        uStack_280 = ((1 << (-(unsigned int)(uVar17 < 0xffffffff80000000) & (unsigned int)uVar17 & 0x3f)) +
                     (int)lVar3) - 1;
        uVar15 = (lVar6 + (unsigned __int64)
                          (unsigned int)(1 << (-(unsigned int)(uVar15 < 0xffffffff80000000) & (unsigned int)uVar15 & 0x3f)))
                 - 1 & ~(lVar6 - 1U);
        uVar17 = (unsigned __int64)uStack_280 & ~(lVar3 - 1U);
        lVar16 = fn_82A94F60(uVar11,uVar7,1,lVar16,param_5 & 0x3f,uVar13,0);
        uVar19 = uStack_270;
      }
      else {
        uVar15 = (unsigned __int64)param_8[2];
        lVar16 = 0;
        uVar17 = (unsigned __int64)param_8[3];
      }
      trapWord(6,(unsigned __int64)uStack_2ac,0);
      uVar11 = (__int64)(int)((uVar17 + 0x1f & 0xffffffe0) / (unsigned __int64)uStack_2ac) *
               (__int64)(int)param_6 + 0xfffU & 0xfffff000;
    }
    if (uVar19 == 0) {
      uVar13 = (unsigned __int64)uStack_294;
    }
    else {
      if (uStack_290 == 0) {
        uVar13 = 0;
        uStack_d8 = uStack_1c8;
        uStack_dc = uStack_1cc;
      }
      else {
        fn_82A94368(*(unsigned int *)(param_1 + 0x18),0,auStack_120);
        fn_82A947A0(*(unsigned int *)(param_1 + 0x18),auStack_e0);
        uStack_294 = fn_82A94F60(uStack_11c,uStack_118,uStack_114,
                                     *(unsigned int *)(param_1 + 0x1c) >> 0x1c,uStack_1c0 & 0x3f,uVar19,0);
        uVar13 = (unsigned __int64)uStack_294;
      }
      uVar9 = (unsigned __int64)uStack_dc;
      uVar8 = (unsigned __int64)uStack_d8;
      fn_82A94F88(uStack_1c0 & 0x3f,&auStack_2a8,&uStack_2b0);
      uVar1 = ((uStack_dc + auStack_2a8) - 1 & ~(auStack_2a8 - 1)) * iStack_1b4 >> 3;
      iStack_178 = uVar1 * uStack_2b0;
      uVar12 = (__int64)(int)((uStack_d8 + uStack_2b0) - 1 & ~(uStack_2b0 - 1)) *
               (__int64)(int)uVar1 + 0xfffU & 0xfffff000;
    }
    if ((uVar12 + uVar11 == 0) ||
       (uVar10 = fn_8265C940(uVar12 + uVar11,0x24810000), uVar10 != 0)) {
      if (iVar14 == 0) {
        stack_pair_230.first = (int)param_4;
      }
      else {
        uVar7 = (unsigned __int64)uStack_298;
        uVar12 = (unsigned __int64)uStack_2ac;
        if (bVar2) {
          uVar4 = 0;
          uVar5 = 0;
        }
        else {
          trapWord(6,uVar7,0);
          trapWord(6,uVar12,0);
          uVar4 = *param_8 / uVar7;
          uVar5 = param_8[1] / uVar12;
        }
        uStack_27c = (unsigned int)uVar5;
        uStack_280 = (unsigned int)uVar4;
        trapWord(6,uVar12,0);
        trapWord(6,uVar7,0);
        fn_82A2AE40(auStack_190,uVar4,uVar5,((uVar15 + uVar7) - 1 & 0xffffffff) / uVar7,
                     ((uVar17 + uVar12) - 1 & 0xffffffff) / uVar12);
        uVar15 = (unsigned __int64)uStack_2ac;
        trapWord(6,uVar15,0);
        uVar12 = ((__int64)(int)((unsigned char)(&lbl_821A7F10)[(unsigned int)param_5 & 0x3f] * uStack_2ac) *
                  (__int64)(int)uStack_298 & 0xffffffffU) >> 3;
        trapWord(6,uVar12,0);
        fn_82A98F18(uVar10,param_6,&uStack_280,param_4 - lVar16,(param_6 & 0xffffffff) / uVar12,
                        ((uVar17 + uVar15) - 1 & 0xffffffff) / uVar15,auStack_190,uVar12);
        stack_pair_230.first = (int)lVar16 + (int)uVar10;
      }
      if (uVar19 == 0) {
        uVar12 = (unsigned __int64)uStack_2a0;
      }
      else {
        uVar12 = (unsigned __int64)uStack_180;
        uStack_180 = (int)uVar13 + (int)uVar11 + (int)uVar10;
        uVar12 = uVar12 - uVar13;
        if (uStack_290 != 0) {
          uVar17 = uVar8 / uStack_2b0;
          uStack_2a0 = 0;
          uVar15 = uVar9 / auStack_2a8;
          uStack_29c = 0;
          uStack_274 = (unsigned int)uVar17;
          uStack_278 = (unsigned int)uVar15;
          uStack_280 = 0;
          trapWord(6,(unsigned __int64)uStack_2b0,0);
          uStack_27c = 0;
          trapWord(6,(unsigned __int64)auStack_2a8,0);
          fn_82A98F18(uVar11 + uVar10,iStack_178,&uStack_2a0,uVar12,uVar15,uVar17,&uStack_280,
                          uStack_1a4);
        }
      }
      uStack_220 = *param_8;
      uStack_21c = param_8[1];
      stack_pair_230.second = (unsigned int)param_5 & 0xfffffeff;
      uStack_218 = param_8[2];
      uStack_214 = param_8[3];
      uStack_224 = 0;
      uStack_210 = 0;
      uStack_20c = 1;
      iStack_228 = (int)param_6;
      fn_82F68CC0(auStack_208,&uStack_220,0x18);
      uStack_17c = uStack_17c & 0xfffffeff;
      uStack_1e8 = uStack_138;
      uStack_1e4 = in_stack_00000074;
      uStack_1e0 = uStack00000044;
      uVar18 = fn_82923990(auStack_268,&uStack_180,&stack_pair_230.first,in_stack_0000006c);
      if (uStack_270 != 0) {
        if ((puStack00000024 == (unsigned int *)0x0) || (uStack_290 != 0)) {
          uVar5 = (unsigned __int64)uStack_2b0;
          uVar17 = 0;
          uVar4 = (unsigned __int64)auStack_2a8;
          uVar15 = 0;
          uStack_2a0 = 0;
          uStack_29c = 0;
          uVar7 = ((uVar8 + uVar5) - 1 & 0xffffffff) / uVar5;
          uVar13 = ((uVar9 + uVar4) - 1 & 0xffffffff) / uVar4;
        }
        else {
          uVar5 = (unsigned __int64)auStack_2a8;
          uVar4 = (unsigned __int64)uStack_2b0;
          trapWord(6,uVar5,0);
          uVar15 = *puStack00000024 / uVar5;
          trapWord(6,uVar4,0);
          uVar17 = puStack00000024[1] / uVar4;
          uStack_2a0 = (unsigned int)uVar15;
          uStack_29c = (unsigned int)uVar17;
          uVar7 = ((puStack00000024[3] + uVar4) - 1 & 0xffffffff) / uVar4;
          uVar13 = ((puStack00000024[2] + uVar5) - 1 & 0xffffffff) / uVar5;
        }
        trapWord(6,uVar5,0);
        trapWord(6,uVar4,0);
        fn_82A2AE40(&uStack_280,uVar15,uVar17,uVar13,uVar7);
        uVar17 = (unsigned __int64)uStack_2b0;
        uVar15 = (unsigned __int64)auStack_2a8;
        trapWord(6,uVar15,0);
        trapWord(6,uVar17,0);
        fn_82A98408(uVar12,((uVar9 + uVar15) - 1 & 0xffffffff) / uVar15,
                          ((uVar8 + uVar17) - 1 & 0xffffffff) / uVar17,&uStack_2a0,uVar11 + uVar10,
                          iStack_178,&uStack_280,uStack_1a4);
      }
      if ((uVar10 & 0xffffffff) != 0) {
        fn_8265C990(uVar10,0x24810000);
      }
    }
    else {
      uVar18 = 0xffffffff8007000e;
    }
  }
LAB_828f1554:
  fn_82923C40(auStack_250);
  fn_82920CA0(auStack_268);
  return uVar18;
}

