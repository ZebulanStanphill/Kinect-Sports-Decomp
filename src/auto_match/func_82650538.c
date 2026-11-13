extern unsigned int *auStack_c0;
extern unsigned int fStack_104;
extern unsigned int fStack_114;
extern unsigned int fStack_118;
extern unsigned int fStack_11c;
extern unsigned int fStack_120;
extern unsigned int fStack_124;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern unsigned int fStack_13c;
extern unsigned int fStack_140;
extern unsigned int fStack_144;
extern unsigned int fStack_148;
extern unsigned int fStack_14c;
extern unsigned int fStack_150;
extern unsigned int fStack_164;
extern unsigned int fStack_168;
extern unsigned int fStack_16c;
extern unsigned int fStack_170;
extern int fn_82630750();
extern int fn_826308A0();
extern int fn_82631C78();
extern int fn_8263BFD0();
extern int fn_82643A48();
extern int fn_82645110();
extern int fn_8264F830();
extern int fn_8264F908();
extern int fn_8264FB08();
extern int fn_82F68CC0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_184;
extern unsigned int iStack_18c;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_82195694;
extern unsigned int lbl_821956B4;
extern unsigned int lbl_821957F0;
extern unsigned int lbl_82195814;
extern unsigned int lbl_82195B64;
extern unsigned int lbl_82195B68;
extern unsigned int lbl_82195B6C;
extern unsigned int lbl_82195B70;
extern unsigned int lbl_82195B74;
extern unsigned int lbl_82195B78;
extern unsigned int lbl_82195B7C;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_100;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_154;
extern unsigned int uStack_158;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_90;
extern unsigned int uStack_a0;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_82650538(unsigned __int64 param_1,__int64 param_2,unsigned int *param_3,unsigned __int64 param_4,
                  __int64 param_5,__int64 param_6,float *param_7,unsigned int *param_8)

{
  float fVar1;
  float fVar2;
  unsigned __int64 *puVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 *puVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  float *in_stack_00000054;
  unsigned int in_stack_0000005c;
  int iStack_18c;
  int iStack_184;
  float afStack_180 [2];
  unsigned int uStack_178;
  unsigned int uStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  unsigned int uStack_160;
  unsigned int uStack_15c;
  unsigned int uStack_158;
  unsigned int uStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  unsigned int uStack_138;
  unsigned int uStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  unsigned int uStack_110;
  unsigned int uStack_10c;
  unsigned int uStack_108;
  float fStack_104;
  unsigned int uStack_100;
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  unsigned int uStack_f4;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  unsigned __int64 uStack_d8;
  unsigned __int64 uStack_d0;
  unsigned __int64 uStack_c8;
  unsigned char auStack_c0 [32];
  unsigned int uStack_a0;
  unsigned int uStack_90;
  
  iVar4 = fn_82F6A548();
  lVar12 = 6;
  puVar3 = &uStack_c8;
  do {
    puVar7 = puVar3;
    puVar3 = puVar7 + 1;
    *puVar3 = 0;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  *(unsigned int *)(puVar7 + 2) = 0;
  fn_8263BFD0(3,0x800,4,1,1,0,0x800004a,2);
  uStack_a0 = *param_3 & 0xfffff000 | uStack_a0 & 0xfff;
  uStack_90 = uStack_90 & 0xfff;
  fn_82631C78(iVar4,0,0x70,0x10);
  fn_82630750(iVar4,0,auStack_c0,0);
  uVar5 = *(unsigned int *)(iVar4 + 0x30);
  if (*(unsigned int *)(iVar4 + 0x38) < uVar5) {
    uVar5 = fn_82645110(iVar4);
  }
  *(unsigned int *)(uVar5 + 4) = 0xc0003b00;
  *(unsigned int *)(uVar5 + 8) = 0x300;
  *(unsigned int **)(iVar4 + 0x30) = (unsigned int *)(uVar5 + 8);
  iVar6 = fn_82643A48(iVar4,0x135);
  if (iVar6 != 0) {
    *(unsigned int *)(iVar6 + 4) = 0xc1332b00;
    *(unsigned int *)(iVar6 + 8) = 0;
    *(unsigned int *)(iVar6 + 0xc) = 0x132;
    fn_82F68CC0(iVar6 + 0x10,0xffffffff8218d2b8,0x4c8);
    *(int *)(iVar4 + 0x30) = iVar6 + 0x4d4;
    fn_8264F830(iVar4,0xf4,0xffffffff8218d1f8,0xc);
  }
  iVar6 = fn_82643A48(iVar4,0xc);
  if (iVar6 != 0) {
    *(unsigned int *)(iVar6 + 4) = 0xc00a2b00;
    *(unsigned int *)(iVar6 + 8) = 1;
    *(unsigned int *)(iVar6 + 0xc) = 9;
    fn_82F68CC0(iVar6 + 0x10,0xffffffff8218b724,0x24);
    *(int *)(iVar4 + 0x30) = iVar6 + 0x30;
  }
  uVar5 = *(unsigned int *)(iVar4 + 0x30);
  if (*(unsigned int *)(iVar4 + 0x38) < uVar5) {
    uVar5 = fn_82645110(iVar4);
  }
  *(unsigned int *)(uVar5 + 4) = 0x12180;
  *(unsigned int *)(uVar5 + 8) = 0x1700000f;
  *(unsigned int *)(uVar5 + 0xc) = 0;
  *(unsigned int **)(iVar4 + 0x30) = (unsigned int *)(uVar5 + 0xc);
  fn_8264FB08(iVar4);
  fn_8264F908(iVar4,0,param_6 + 0x1c);
  uVar5 = *(unsigned int *)(iVar4 + 0x30);
  if (*(unsigned int *)(iVar4 + 0x38) < uVar5) {
    uVar5 = fn_82645110(iVar4);
  }
  afStack_180[0] = ltcg_pool_0_0f;
  fVar1 = param_7[1];
  fStack_128 = *param_7;
  uStack_160 = *param_8;
  uStack_15c = param_8[1];
  fStack_14c = in_stack_00000054[1];
  fStack_150 = *in_stack_00000054;
  *(unsigned int *)(uVar5 + 4) = 0x25000;
  fVar2 = lbl_821CA460;
  fStack_140 = lbl_8218E8FC;
  uStack_178 = 0;
  fStack_144 = fVar1 / fStack_14c - lbl_821CA460;
  uStack_174 = 0;
  fStack_148 = fStack_128 / fStack_150 - lbl_821CA460;
  fStack_130 = fStack_150 * lbl_8218E8FC;
  *(unsigned int *)(uVar5 + 8) = 0;
  *(unsigned int *)(uVar5 + 0xc) = 0;
  fStack_128 = fStack_128 / fStack_130;
  fStack_170 = afStack_180[0];
  fStack_16c = afStack_180[0];
  fStack_12c = fStack_14c * fStack_140;
  fStack_168 = afStack_180[0];
  fStack_164 = afStack_180[0];
  *(unsigned int *)(uVar5 + 0x10) = 0;
  fStack_114 = lbl_82195B64;
  uStack_154 = lbl_821957F0;
  uStack_158 = lbl_821956B4;
  uStack_108 = lbl_82195694;
  fStack_104 = afStack_180[0];
  fStack_13c = fStack_140;
  fStack_124 = fVar2 / fStack_128;
  *(unsigned int **)(iVar4 + 0x30) = (unsigned int *)(uVar5 + 0x10);
  fStack_114 = (float)in_stack_0000005c * fStack_114;
  fStack_11c = fVar2 / (float)in_stack_0000005c;
  uStack_110 = lbl_82195B68;
  uStack_10c = lbl_82195B6C;
  fStack_118 = fStack_11c * lbl_82195814;
  uStack_fc = lbl_82195B70;
  uStack_f8 = lbl_82195B74;
  uStack_100 = lbl_82195B6C;
  uVar9 = 0;
  fStack_120 = (float)in_stack_0000005c;
  uStack_f4 = lbl_8218E8E8;
  uStack_f0 = lbl_82195B78;
  uStack_ec = lbl_82195B7C;
  uStack_e8 = lbl_82195B6C;
  uStack_e4 = lbl_8218E8E8;
  uStack_138 = lbl_821917B4;
  uStack_134 = lbl_821917B4;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  iStack_18c = (int)(__int64)(fStack_144 + fVar2);
  iStack_184 = (int)(__int64)(fStack_148 + fVar2);
  uVar10 = (__int64)iStack_18c * (__int64)iStack_184;
  fn_8264F830(iVar4,4,&fStack_140,8,0xffffffff821ca45c,0);
  uVar8 = 0;
  if ((param_4 & 0xffffffff) != 0) {
    do {
      uVar8 = uVar8 + 1;
      lVar12 = param_5;
      if ((uVar8 & 0xffffffff) != (param_4 & 0xffffffff)) {
        lVar12 = 0x4000;
      }
      uVar11 = (((lVar12 - param_2) + 0xffU & 0xffffffff) >> 8) * 0x2a;
      if ((uVar10 & 0xffffffff) < uVar11) {
        uVar11 = uVar10;
      }
      fStack_170 = (float)(uVar9 & 0xffffffff);
      afStack_180[0] = 2.0;
      uStack_178 = uStack_178 & 0xc0f8 | 0x4b000a01;
      uStack_174 = (int)((lVar12 - param_2 & 0xffffffffU) >> 1) - 1U & 0x7fffff | 0x4b000000;
      fn_8264F830(iVar4,0,afStack_180,4);
      uVar5 = *(unsigned int *)(iVar4 + 0x30);
      if (*(unsigned int *)(iVar4 + 0x38) < uVar5) {
        uVar5 = fn_82645110(iVar4);
      }
      *(unsigned int *)(uVar5 + 4) = 0xc0003600;
      uVar10 = uVar10 - uVar11;
      uVar9 = uVar11 + uVar9;
      param_2 = 0;
      *(unsigned int *)(uVar5 + 8) = (int)uVar11 * in_stack_0000005c * 0x10000 | 0x81;
      *(unsigned int **)(iVar4 + 0x30) = (unsigned int *)(uVar5 + 8);
    } while ((uVar8 & 0xffffffff) < (param_4 & 0xffffffff));
  }
  fn_826308A0(iVar4,0,auStack_c0,0);
  fn_82631C78(iVar4,0,0x40,0x40);
  fn_82F6A594();
  return;
}

