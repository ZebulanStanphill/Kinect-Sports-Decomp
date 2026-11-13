extern unsigned int *auStack_120;
extern unsigned int *auStack_158;
extern unsigned int *auStack_170;
extern unsigned int *auStack_220;
extern unsigned int *auStack_230;
extern unsigned int *auStack_284;
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_e0;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_829206B8();
extern int fn_82920CA0();
extern int fn_82923990();
extern int fn_82923B38();
extern int fn_82923D40();
extern int fn_829242C8();
extern int fn_82A94368();
extern int fn_82A947A0();
extern int fn_82A94AA8();
extern int fn_82A94F60();
extern int fn_82A94F88();
extern int fn_82AA60A0();
extern int fn_82AA60D8();
extern int fn_82F68CC0();
extern unsigned int iStack_174;
extern unsigned int iStack_178;
extern unsigned int iStack_180;
extern unsigned int iStack_1d4;
extern unsigned int iStack_1d8;
extern unsigned int *iStack_204;
extern unsigned int iStack_24c;
extern unsigned int iStack_264;
extern unsigned int iStack_268;
extern unsigned int lbl_821A7F10;
extern unsigned int uStack0000004c;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_17c;
extern unsigned int uStack_198;
extern unsigned int uStack_1dc;
extern unsigned int uStack_1e0;
extern unsigned int uStack_1ec;
extern unsigned int uStack_210;
extern unsigned int uStack_214;
extern unsigned int uStack_218;
extern unsigned int uStack_21c;
extern unsigned int uStack_238;
extern unsigned int uStack_23c;
extern unsigned int uStack_240;
extern unsigned int uStack_244;
extern unsigned int uStack_248;
extern unsigned int uStack_250;
extern unsigned int uStack_254;
extern unsigned int uStack_258;
extern unsigned int uStack_25c;
extern unsigned int uStack_260;
extern unsigned int uStack_26c;
extern unsigned int uStack_270;
extern unsigned int uStack_280;
extern unsigned int uStack_288;
extern unsigned int uStack_28c;
extern unsigned int uStack_290;
extern unsigned int uStack_294;
extern unsigned int uStack_298;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;


unsigned __int64
fn_828F1B70(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,unsigned int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned int uVar17;
  unsigned int uStack0000004c;
  unsigned int *in_stack_00000054;
  int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000006c;
  unsigned int in_stack_00000074;
  int in_stack_0000007c;
  unsigned int in_stack_00000084;
  unsigned int auStack_2a0 [2];
  unsigned int uStack_298;
  unsigned int uStack_294;
  unsigned int uStack_290;
  unsigned int uStack_28c;
  unsigned int uStack_288;
  unsigned char auStack_284 [4];
  unsigned int uStack_280;
  unsigned int uStack_270;
  unsigned int uStack_26c;
  int iStack_268;
  int iStack_264;
  unsigned int uStack_260;
  unsigned int uStack_25c;
  unsigned int uStack_258;
  unsigned int uStack_254;
  unsigned int uStack_250;
  int iStack_24c;
  unsigned int uStack_248;
  unsigned int uStack_244;
  unsigned int uStack_240;
  unsigned int uStack_23c;
  unsigned int uStack_238;
  unsigned char auStack_230 [16];
  unsigned char auStack_220 [4];
  unsigned int uStack_21c;
  unsigned int uStack_218;
  unsigned int uStack_214;
  unsigned int uStack_210;
  int iStack_204;
  unsigned int uStack_1ec;
  unsigned int uStack_1e0;
  unsigned int uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  unsigned int uStack_198;
  int iStack_180;
  unsigned int uStack_17c;
  int iStack_178;
  int iStack_174;
  unsigned char auStack_170 [24];
  unsigned char auStack_158 [32];
  unsigned int uStack_138;
  unsigned int uStack_134;
  unsigned int uStack_130;
  unsigned char auStack_120 [4];
  unsigned int uStack_11c;
  unsigned int uStack_118;
  unsigned int uStack_114;
  unsigned char auStack_e0 [4];
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  
  uStack0000004c = param_8;
  fn_829206B8(auStack_230);
  fn_82923B38(auStack_284);
  uStack_244 = 0;
  uVar7 = 0;
  uStack_288 = 0;
  uVar11 = 0;
  uStack_28c = 0;
  uVar8 = 0;
  uStack_238 = 0;
  uVar12 = 0;
  auStack_2a0[0] = 0;
  uVar15 = 0;
  uVar17 = 0;
  uStack_250 = 0;
  lVar13 = 0;
  uStack_254 = 0;
  uVar6 = 0;
  uStack_248 = 0;
  if ((param_1 == 0) || ((param_4 & 0xffffffff) == 0)) {
    fn_82923D40(auStack_284);
    fn_82920CA0(auStack_230);
    return 0xffffffff8876086c;
  }
  if (in_stack_00000054 == (unsigned int *)0x0) {
LAB_828f1c2c:
    uVar16 = 0xffffffff8876086c;
  }
  else {
    if (in_stack_0000007c == -1) {
      in_stack_0000007c = 0x80004;
    }
    uVar16 = fn_829242C8(auStack_284,&uStack_1e0,param_1,param_2,param_3,0,0);
    if ((int)uVar16 < 0) goto LAB_828f1c34;
    fn_82A94368(param_1,0,auStack_220);
    uStack_280 = uStack_1ec & 1;
    uStack_258 = uStack_1ec >> 1 & 1;
    uVar9 = (param_5 & 0xffffffff) >> 8 & 1;
    if ((in_stack_0000005c == 0) || ((0x10 < in_stack_00000054[2] && (0x10 < in_stack_00000054[3])))
       ) {
      iStack_24c = 0;
    }
    else {
      iStack_24c = 1;
    }
    iVar10 = (int)uVar9;
    if (iVar10 != 0) {
      fn_82A94F88(param_5 & 0x3f,&uStack_244,&uStack_288);
      if (iStack_24c == 0) {
        lVar13 = 0;
        uVar12 = (unsigned __int64)in_stack_00000054[2];
        uVar15 = (unsigned __int64)in_stack_00000054[3];
        uVar17 = in_stack_00000054[5] + 3 & 0xfffffffc;
        lVar3 = (__int64)(int)uVar17 * (__int64)(int)param_7;
      }
      else {
        uVar11 = (unsigned __int64)in_stack_00000064;
        if (((((uVar11 == 0) || (0x2000 < uVar11)) ||
             (uVar14 = (unsigned __int64)in_stack_0000006c, uVar14 == 0)) ||
            ((0x2000 < uVar14 || (in_stack_00000074 == 0)))) || (0x400 < in_stack_00000074))
        goto LAB_828f1c2c;
        uVar12 = (unsigned __int64)in_stack_00000054[3];
        if ((unsigned __int64)in_stack_00000054[3] < (unsigned __int64)in_stack_00000054[2]) {
          uVar12 = (unsigned __int64)in_stack_00000054[2];
        }
        uVar15 = uVar11;
        if (uVar11 <= uVar14) {
          uVar15 = uVar14;
        }
        lVar13 = 0;
        for (; uVar12 < uVar15; uVar15 = uVar15 >> 1) {
          lVar13 = lVar13 + 1;
        }
        lVar3 = fn_82A94AA8(uVar11,uVar14,0);
        lVar3 = 0x20 - lVar3;
        uVar15 = lVar3 - LZCOUNT(in_stack_00000064 - 1);
        uVar5 = lVar3 - LZCOUNT(in_stack_0000006c - 1);
        uVar12 = lVar3 - LZCOUNT(in_stack_00000074 - 1);
        lVar4 = ((unsigned __int64)uStack_244 & 0x7ffffff) * 0x20;
        lVar3 = ((unsigned __int64)uStack_288 & 0x7ffffff) * 0x20;
        uStack_23c = ((int)lVar3 + (1 << (-(unsigned int)(uVar5 < 0xffffffff80000000) & (unsigned int)uVar5 & 0x3f))
                     ) - 1;
        uStack_240 = (1 << (-(unsigned int)(uVar12 < 0xffffffff80000000) & (unsigned int)uVar12 & 0x3f)) + 3;
        uVar12 = (lVar4 + (unsigned __int64)
                          (unsigned int)(1 << (-(unsigned int)(uVar15 < 0xffffffff80000000) & (unsigned int)uVar15 & 0x3f)))
                 - 1 & ~(lVar4 - 1U);
        uVar15 = (unsigned __int64)uStack_23c & ~(lVar3 - 1U);
        uVar17 = uStack_240 & 0xfffffffc;
        lVar13 = fn_82A94F60(uVar11,uVar14,in_stack_00000074,lVar13,param_5 & 0x3f,uVar9,0);
        trapWord(6,(unsigned __int64)uStack_288,0);
        lVar3 = (__int64)
                (int)((int)((uVar15 + 0x1f & 0xffffffe0) / (unsigned __int64)uStack_288) * uVar17) *
                (__int64)(int)param_6;
      }
      uVar11 = lVar3 + 0xfffU & 0xfffff000;
    }
    uVar2 = uStack_254;
    uVar1 = uStack_250;
    if (uStack_280 != 0) {
      if (uStack_258 == 0) {
        uStack_248 = 0;
        uVar6 = uStack_214;
      }
      else {
        fn_82A94368(*(unsigned int *)(param_1 + 0x18),0,auStack_120);
        fn_82A947A0(*(unsigned int *)(param_1 + 0x18),auStack_e0);
        uStack_250 = uStack_dc;
        uStack_254 = uStack_d8;
        uStack_248 = fn_82A94F60(uStack_11c,uStack_118,uStack_114,
                                     *(unsigned int *)(param_1 + 0x1c) >> 0x1c,uStack_210 & 0x3f,uStack_280,
                                     0);
        uVar6 = uStack_d4;
        uStack_218 = uStack_254;
        uStack_21c = uStack_250;
      }
      fn_82A94F88(uStack_210 & 0x3f,&uStack_28c,auStack_2a0);
      uVar2 = ((uStack_21c + uStack_28c) - 1 & ~(uStack_28c - 1)) * iStack_204 >> 3;
      iStack_1d8 = uVar2 * auStack_2a0[0];
      iStack_1d4 = uVar2 * ((uStack_218 + auStack_2a0[0]) - 1 & ~(auStack_2a0[0] - 1));
      uVar8 = (__int64)iStack_1d4 * (__int64)(int)uVar6 + 0xfffU & 0xfffff000;
      uVar2 = uStack_218;
      uVar1 = uStack_21c;
    }
    uVar14 = (unsigned __int64)uVar1;
    uVar9 = (unsigned __int64)uVar2;
    if ((uVar8 + uVar11 == 0) || (uVar7 = fn_8265C940(uVar8 + uVar11,0x24810000), uVar7 != 0))
    {
      if (iVar10 == 0) {
        iStack_180 = (int)param_4;
      }
      else {
        if (iStack_24c == 0) {
          uVar5 = (unsigned __int64)*in_stack_00000054;
          uVar8 = (unsigned __int64)in_stack_00000054[1];
          uStack_290 = in_stack_00000054[4];
        }
        else {
          uVar5 = 0;
          uVar8 = 0;
          uStack_290 = 0;
        }
        uStack_294 = (unsigned int)uVar8;
        uStack_298 = (unsigned int)uVar5;
        trapWord(6,param_6,0);
        trapWord(6,(unsigned __int64)uStack_244,0);
        iStack_264 = (int)((((uVar15 - uVar8) + (unsigned __int64)uStack_288) - 1 & 0xffffffff) /
                          (unsigned __int64)uStack_288) + uStack_294;
        uVar8 = ((__int64)(int)((unsigned char)(&lbl_821A7F10)[(unsigned int)param_5 & 0x3f] * uStack_288) *
                 (__int64)(int)uStack_244 & 0xffffffffU) >> 3;
        iStack_268 = (int)((((uVar12 - uVar5) + (unsigned __int64)uStack_244) - 1 & 0xffffffff) /
                          (unsigned __int64)uStack_244) + uStack_298;
        trapWord(6,(unsigned __int64)uStack_288,0);
        trapWord(6,uVar8,0);
        uStack_270 = uStack_298;
        uStack_26c = uStack_294;
        uStack_260 = uStack_290;
        uStack_25c = uVar17;
        fn_82AA60D8(uVar7,param_6,param_7,&uStack_298,param_4 - lVar13,
                          (param_6 & 0xffffffff) / uVar8,
                          (param_7 & 0xffffffff) / (param_6 & 0xffffffff),uVar17);
        iStack_180 = (int)lVar13 + (int)uVar7;
      }
      if (uStack_280 == 0) {
        uVar8 = (unsigned __int64)uStack_238;
      }
      else {
        uVar8 = (unsigned __int64)uStack_1e0 - (unsigned __int64)uStack_248;
        uStack_1e0 = uStack_248 + (int)uVar11 + (int)uVar7;
        if (uStack_258 != 0) {
          trapWord(6,(unsigned __int64)auStack_2a0[0],0);
          uVar12 = uVar14 / uStack_28c;
          uVar15 = uVar9 / auStack_2a0[0];
          iStack_268 = (int)uVar12;
          iStack_264 = (int)uVar15;
          trapWord(6,(unsigned __int64)uStack_28c,0);
          uStack_298 = 0;
          uStack_294 = 0;
          uStack_290 = 0;
          uStack_270 = 0;
          uStack_26c = 0;
          uStack_260 = 0;
          uStack_25c = uVar6;
          fn_82AA60D8(uVar11 + uVar7,iStack_1d8,iStack_1d4,&uStack_298,uVar8,uVar12,uVar15,
                            uVar6);
        }
      }
      uStack_17c = (unsigned int)param_5 & 0xfffffeff;
      iStack_178 = (int)param_6;
      iStack_174 = (int)param_7;
      fn_82F68CC0(auStack_170,in_stack_00000054,0x18);
      fn_82F68CC0(auStack_158,in_stack_00000054,0x18);
      uStack_1dc = uStack_1dc & 0xfffffeff;
      uStack_138 = uStack_198;
      uStack_134 = in_stack_00000084;
      uStack_130 = uStack0000004c;
      uVar16 = fn_82923990(auStack_230,&uStack_1e0,&iStack_180,in_stack_0000007c);
      if (uStack_280 != 0) {
        if ((param_3 == (unsigned int *)0x0) || (uStack_258 != 0)) {
          uStack_270 = 0;
          uStack_26c = 0;
          uStack_260 = 0;
          iStack_268 = (int)(((uVar14 + uStack_28c) - 1 & 0xffffffff) / (unsigned __int64)uStack_28c);
          iStack_264 = (int)(((uVar9 + auStack_2a0[0]) - 1 & 0xffffffff) / (unsigned __int64)auStack_2a0[0]
                            );
          uStack_25c = uVar6;
        }
        else {
          uStack_270 = *param_3;
          uStack_26c = param_3[1];
          uStack_260 = param_3[4];
          iStack_268 = (int)(((((unsigned __int64)param_3[2] - (unsigned __int64)uStack_270) +
                              (unsigned __int64)uStack_28c) - 1 & 0xffffffff) / (unsigned __int64)uStack_28c) +
                       uStack_270;
          iStack_264 = (int)(((((unsigned __int64)param_3[3] - (unsigned __int64)uStack_26c) +
                              (unsigned __int64)auStack_2a0[0]) - 1 & 0xffffffff) /
                            (unsigned __int64)auStack_2a0[0]) + uStack_26c;
          uStack_25c = param_3[5];
        }
        uVar15 = (unsigned __int64)uStack_28c;
        uVar12 = (unsigned __int64)auStack_2a0[0];
        trapWord(6,uVar12,0);
        trapWord(6,uVar12,0);
        trapWord(6,uVar15,0);
        trapWord(6,uVar15,0);
        uStack_298 = uStack_270;
        uStack_294 = uStack_26c;
        uStack_290 = uStack_260;
        fn_82AA60A0(uVar8,((uVar14 + uVar15) - 1 & 0xffffffff) / uVar15,
                          ((uVar9 + uVar12) - 1 & 0xffffffff) / uVar12,uVar6,&uStack_298,
                          uVar11 + uVar7,iStack_1d8,iStack_1d4);
      }
      if ((uVar7 & 0xffffffff) != 0) {
        fn_8265C990(uVar7,0x24810000);
      }
    }
    else {
      uVar16 = 0xffffffff8007000e;
    }
  }
LAB_828f1c34:
  fn_82923D40(auStack_284);
  fn_82920CA0(auStack_230);
  return uVar16;
}

