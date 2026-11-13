extern unsigned int *auStack_1b0;
extern unsigned int *auStack_2e0;
extern unsigned int *auStack_2e8;
extern unsigned int *auStack_c0;
extern unsigned int fStack_1c0;
extern unsigned int fStack_1d0;
extern unsigned int fStack_1e0;
extern unsigned int fStack_1f4;
extern unsigned int fStack_1f8;
extern unsigned int fStack_214;
extern unsigned int fStack_218;
extern unsigned int fStack_23c;
extern unsigned int fStack_294;
extern unsigned int fStack_29c;
extern unsigned int fStack_2a0;
extern unsigned int fStack_2a4;
extern unsigned int fStack_2b4;
extern unsigned int fStack_2bc;
extern unsigned int fStack_2c0;
extern unsigned int fStack_2c4;
extern int fn_8262FE50();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263C2C8();
extern int fn_826417C8();
extern int fn_82641B60();
extern int fn_82643A48();
extern int fn_82645110();
extern int fn_8264F830();
extern int fn_8264FB08();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_82195668;
extern unsigned int lbl_821956B4;
extern unsigned int lbl_821957F0;
extern unsigned int lbl_82195C54;
extern unsigned int lbl_82195C58;
extern unsigned int lbl_82195C5C;
extern unsigned int lbl_82195C60;
extern unsigned int lbl_82195C64;
extern unsigned int lbl_82195C68;
extern unsigned int lbl_82195C6C;
extern unsigned int lbl_82195C70;
extern unsigned int lbl_82195C74;
extern unsigned int lbl_82195C78;
extern unsigned int lbl_82195C7C;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_1b4;
extern unsigned int uStack_1b8;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c4;
extern unsigned int uStack_1c8;
extern unsigned int uStack_1cc;
extern unsigned int uStack_1d4;
extern unsigned int uStack_1d8;
extern unsigned int uStack_1dc;
extern unsigned int uStack_1e4;
extern unsigned int uStack_1e8;
extern unsigned int uStack_1ec;
extern unsigned int uStack_1f0;
extern unsigned int uStack_1fc;
extern unsigned int uStack_200;
extern unsigned int uStack_204;
extern unsigned int uStack_208;
extern unsigned int uStack_20c;
extern unsigned int uStack_210;
extern unsigned int uStack_21c;
extern unsigned int uStack_220;
extern unsigned int uStack_224;
extern unsigned int uStack_228;
extern unsigned int uStack_22c;
extern unsigned int uStack_230;
extern unsigned int uStack_234;
extern unsigned int uStack_238;
extern unsigned int uStack_240;
extern unsigned int uStack_244;
extern unsigned int uStack_248;
extern unsigned int uStack_250;
extern unsigned int uStack_298;
extern unsigned int uStack_2a8;
extern unsigned int uStack_2ac;
extern unsigned int uStack_2b0;
extern unsigned int uStack_2b8;
extern unsigned int uStack_2c8;
extern unsigned int uStack_2cc;
extern unsigned int uStack_2d0;
extern unsigned int uStack_2d4;
extern unsigned int uStack_2d8;
extern unsigned int uStack_2f0;
extern unsigned int uStack_c8;


void fn_8264FC60(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned int param_5,
                  unsigned int param_6)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 *puVar4;
  int *piVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uStack_2f0;
  unsigned char auStack_2e8 [8];
  unsigned int auStack_2e0 [2];
  unsigned int uStack_2d8;
  unsigned int uStack_2d4;
  unsigned int uStack_2d0;
  unsigned int uStack_2cc;
  unsigned int uStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  unsigned int uStack_2b8;
  float fStack_2b4;
  unsigned int uStack_2b0;
  unsigned int uStack_2ac;
  unsigned int uStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  unsigned int uStack_298;
  float fStack_294;
  unsigned int uStack_250;
  unsigned int uStack_248;
  unsigned int uStack_244;
  unsigned int uStack_240;
  float fStack_23c;
  unsigned int uStack_238;
  unsigned int uStack_234;
  unsigned int uStack_230;
  unsigned int uStack_22c;
  unsigned int uStack_228;
  unsigned int uStack_224;
  unsigned int uStack_220;
  unsigned int uStack_21c;
  float fStack_218;
  float fStack_214;
  unsigned int uStack_210;
  unsigned int uStack_20c;
  unsigned int uStack_208;
  unsigned int uStack_204;
  unsigned int uStack_200;
  unsigned int uStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  unsigned int uStack_1f0;
  unsigned int uStack_1ec;
  unsigned int uStack_1e8;
  unsigned int uStack_1e4;
  float fStack_1e0;
  unsigned int uStack_1dc;
  unsigned int uStack_1d8;
  unsigned int uStack_1d4;
  float fStack_1d0;
  unsigned int uStack_1cc;
  unsigned int uStack_1c8;
  unsigned int uStack_1c4;
  float fStack_1c0;
  unsigned int uStack_1bc;
  unsigned int uStack_1b8;
  unsigned int uStack_1b4;
  unsigned char auStack_1b0 [156];
  int aiStack_114 [19];
  unsigned __int64 uStack_c8;
  unsigned char auStack_c0 [192];
  
  auStack_2e0[0] = 0;
  uStack_2d8 = 0;
  lVar8 = 6;
  uStack_2d4 = 0;
  puVar4 = &uStack_c8;
  do {
    puVar4 = puVar4 + 1;
    *puVar4 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  fn_8263C2C8(param_5 + 7 & 0xfffffff8,param_6 + 7 & 0xfffffff8,0x28280106,0,auStack_2e0,
                  auStack_c0,auStack_2e8,&uStack_2f0);
  if (*(int *)(param_1 + 0x3158) != 0) {
    fn_8262FE50(*(int *)(param_1 + 0x3158));
  }
  fn_8263A508(param_1,0);
  uVar7 = 0;
  piVar5 = aiStack_114;
  piVar6 = (int *)(param_1 + 0x3148);
  do {
    iVar3 = *piVar6;
    if (iVar3 != 0) {
      fn_8262FE50(iVar3);
    }
    piVar5 = piVar5 + 1;
    *piVar5 = iVar3;
    fn_8263A1B8(param_1,uVar7,auStack_c0);
    uVar7 = uVar7 + 1;
    piVar6 = piVar6 + 1;
  } while ((uVar7 & 0xffffffff) < 4);
  *(unsigned int *)(param_1 + 0x29c0) = *(unsigned int *)(param_1 + 0x29c0) | 1;
  *(unsigned __int64 *)(param_1 + 0x20) = *(unsigned __int64 *)(param_1 + 0x20) | 0x800000000;
  uVar7 = *(unsigned __int64 *)(param_1 + 0x10);
  if (uVar7 != 0) {
    if ((*(unsigned __int64 *)(param_1 + 0x28) & uVar7) != 0) {
      uVar1 = fn_826417C8(param_1,uVar7,*(unsigned int *)(param_1 + 0x2940));
      *(unsigned __int64 *)(param_1 + 0x10) = uVar1;
    }
    if ((*(unsigned __int64 *)(param_1 + 0x10) & 0xfff) != 0) {
      fn_82641B60(param_1,*(unsigned __int64 *)(param_1 + 0x10) << 0x34,0x2200,param_1 + 0x2934);
      *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) & 0xfffffffffffff000;
    }
    if ((*(unsigned __int64 *)(param_1 + 0x10) & 0x1f000) != 0) {
      fn_82641B60(param_1,(*(unsigned __int64 *)(param_1 + 0x10) & 0x1f000) << 0x2f,0x2180,
                        param_1 + 0x2920);
      *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) & 0xfffffffffffe0fff;
    }
    if ((*(unsigned __int64 *)(param_1 + 0x10) & 0x3fffc0000000000) != 0) {
      fn_82641B60(param_1,(*(unsigned __int64 *)(param_1 + 0x10) & 0x3fffc0000000000) << 6,0x2000,
                        param_1 + 0x2880);
      *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) & 0xfc0003ffffffffff;
    }
    if ((*(unsigned __int64 *)(param_1 + 0x10) & 0x3ffffe00000) != 0) {
      fn_82641B60(param_1,(*(unsigned __int64 *)(param_1 + 0x10) & 0x3ffffe00000) << 0x16,0x2100,
                        param_1 + 0x28cc);
      *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) & 0xfffffc00001fffff;
    }
  }
  uVar7 = *(unsigned __int64 *)(param_1 + 0x18);
  if ((uVar7 != 0) && ((uVar7 & 0x7ffffc00000000) != 0)) {
    fn_82641B60(param_1,(uVar7 & 0x7ffffc00000000) << 9,0x2280,param_1 + 0x2964);
    *(unsigned __int64 *)(param_1 + 0x18) = *(unsigned __int64 *)(param_1 + 0x18) & 0xff800003ffffffff;
  }
  uVar7 = *(unsigned __int64 *)(param_1 + 0x20);
  if ((uVar7 != 0) && ((uVar7 & 0x3fffffffff) != 0)) {
    fn_82641B60(param_1,uVar7 << 0x1a,0x2300,param_1 + 0x29b8);
    *(unsigned __int64 *)(param_1 + 0x20) = *(unsigned __int64 *)(param_1 + 0x20) & 0xffffffc000000000;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x30);
  if (*(unsigned int *)(param_1 + 0x38) < uVar2) {
    uVar2 = fn_82645110(param_1);
  }
  *(unsigned int *)(uVar2 + 4) = 0xc0003b00;
  *(unsigned int *)(uVar2 + 8) = 0x300;
  *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar2 + 8);
  iVar3 = fn_82643A48(param_1,0x1b);
  if (iVar3 != 0) {
    *(unsigned int *)(iVar3 + 4) = 0xc0192b00;
    *(unsigned int *)(iVar3 + 8) = 0;
    *(unsigned int *)(iVar3 + 0xc) = 0x18;
    fn_82F68CC0(iVar3 + 0x10,0xffffffff8218ca00,0x60);
    *(int *)(param_1 + 0x30) = iVar3 + 0x6c;
    fn_8264F830(param_1,0xfc,0xffffffff8218c9c0,4);
  }
  iVar3 = fn_82643A48(param_1,0x1b0);
  if (iVar3 != 0) {
    *(unsigned int *)(iVar3 + 4) = 0xc1ae2b00;
    *(unsigned int *)(iVar3 + 8) = 1;
    *(unsigned int *)(iVar3 + 0xc) = 0x1ad;
    fn_82F68CC0(iVar3 + 0x10,0xffffffff8218cb20,0x6b4);
    *(int *)(param_1 + 0x30) = iVar3 + 0x6c0;
    fn_8264F830(param_1,500,0xffffffff8218ca60,0xc);
  }
  uVar2 = *(unsigned int *)(param_1 + 0x30);
  if (*(unsigned int *)(param_1 + 0x38) < uVar2) {
    uVar2 = fn_82645110(param_1);
  }
  *(unsigned int *)(uVar2 + 4) = 0x12180;
  *(unsigned int *)(uVar2 + 8) = 0x10000800;
  *(unsigned int *)(uVar2 + 0xc) = 4;
  *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar2 + 0xc);
  fn_8264FB08(param_1);
  uStack_2f0 = (param_2 & 0xffffffff) >> 1;
  fStack_23c = (float)uStack_2f0;
  uStack_250 = ltcg_pool_0_0f;
  uStack_248 = 0;
  uStack_244 = 0;
  uStack_210 = lbl_8218E8FC;
  uStack_20c = lbl_8218E8FC;
  fStack_1f8 = (float)param_5 * lbl_82195668;
  uStack_2d0 = ltcg_pool_0_0f;
  uStack_2cc = ltcg_pool_0_0f;
  uStack_2c8 = ltcg_pool_0_0f;
  fStack_2c4 = lbl_821CA460;
  uStack_2b8 = ltcg_pool_0_0f;
  fStack_2b4 = lbl_821CA460;
  uStack_2b0 = ltcg_pool_0_0f;
  uStack_2ac = ltcg_pool_0_0f;
  uStack_2a8 = ltcg_pool_0_0f;
  fStack_2a4 = lbl_821CA460;
  uStack_298 = ltcg_pool_0_0f;
  fStack_294 = lbl_821CA460;
  uStack_240 = ltcg_pool_0_0f;
  uStack_238 = lbl_82195C54;
  uStack_234 = lbl_82195C58;
  uStack_230 = ltcg_pool_0_0f;
  uStack_22c = ltcg_pool_0_0f;
  uStack_228 = lbl_821956B4;
  uStack_224 = lbl_821957F0;
  uStack_220 = ltcg_pool_0_0f;
  uStack_21c = ltcg_pool_0_0f;
  uStack_208 = lbl_821917B4;
  uStack_204 = lbl_821917B4;
  uStack_200 = ltcg_pool_0_0f;
  uStack_1fc = ltcg_pool_0_0f;
  uStack_1f0 = ltcg_pool_0_0f;
  uStack_1ec = ltcg_pool_0_0f;
  fStack_218 = (float)param_5 * lbl_8218E8E8 - lbl_821CA460;
  fStack_1f4 = lbl_821CA460 / fStack_1f8;
  fStack_2c0 = (float)param_5;
  fStack_2bc = (float)param_6;
  fStack_2a0 = (float)param_5;
  fStack_29c = (float)param_6;
  uStack_1e8 = ltcg_pool_0_0f;
  uStack_1e4 = ltcg_pool_0_0f;
  fStack_1e0 = lbl_821CA460;
  uStack_1dc = lbl_82195C5C;
  uStack_1d8 = lbl_82195C60;
  uStack_1d4 = lbl_82195C64;
  fStack_1d0 = lbl_821CA460;
  uStack_1cc = lbl_82195C68;
  uStack_1c8 = lbl_82195C6C;
  uStack_1c4 = lbl_82195C70;
  fStack_1c0 = lbl_821CA460;
  uStack_1bc = lbl_82195C74;
  uStack_1b8 = lbl_82195C78;
  uStack_1b4 = lbl_82195C7C;
  fStack_214 = fStack_218;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_1b0,0,0xa0);
}

