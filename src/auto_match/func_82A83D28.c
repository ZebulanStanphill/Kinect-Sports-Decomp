typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int lbl_8217D960;
extern V16 vectorMultiplyAddFloatingPoint();


void fn_82A83D28(unsigned __int64 param_1,unsigned int *param_2)

{
  float *pfVar1;
  int iVar2;
  int in_r0;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned char in_vs32 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_register_000103e0;
  float in_register_000103e4;
  float in_register_000103e8;
  float in_vr62;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  
  uVar3 = (unsigned __int64)*param_2;
  pfVar1 = (float *)((unsigned int)(&lbl_8217D960 + in_r0) & 0xfffffff0);
  fVar5 = *pfVar1;
  fVar6 = pfVar1[1];
  fVar7 = pfVar1[2];
  fVar8 = pfVar1[3];
  if (-1 < (__int64)(uVar3 - 1)) {
    lVar4 = (uVar3 - 1) * 0x60;
    do {
      altv207_13(in_vs32,in_vs43);
      iVar2 = (int)lVar4;
      lVar4 = lVar4 + -0x60;
      altv207_13(in_vs32,in_vs40);
      altv207_13(in_vs32,in_vs41);
      in_register_000103f0 =
           in_register_000103e0 * (in_register_000103f0 * (in_register_000103f0 - fVar5) + fVar5);
      in_register_000103f4 =
           in_register_000103e4 * (in_register_000103f4 * (in_register_000103f4 - fVar6) + fVar6);
      in_register_000103f8 =
           in_register_000103e8 * (in_register_000103f8 * (in_register_000103f8 - fVar7) + fVar7);
      in_vr63 = in_vr62 * (in_vr63 * (in_vr63 - fVar8) + fVar8);
      pfVar1 = (float *)(in_r0 + param_2[1] + iVar2 + 0x50 & 0xfffffff0);
      *pfVar1 = in_register_000103f0;
      pfVar1[1] = in_register_000103f4;
      pfVar1[2] = in_register_000103f8;
      pfVar1[3] = in_vr63;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  altv207_13(in_vs32,in_vs35);
  altv207_13(in_vs32,in_vs43);
  vectorMultiplyAddFloatingPoint(in_vs44,in_vs45,in_vs32);
  pfVar1 = (float *)(in_r0 + param_2[1] + 0x30 & 0xfffffff0);
  *pfVar1 = in_register_000103f0 * fVar5;
  pfVar1[1] = in_register_000103f4 * fVar6;
  pfVar1[2] = in_register_000103f8 * fVar7;
  pfVar1[3] = in_vr63 * fVar8;
  return;
}

