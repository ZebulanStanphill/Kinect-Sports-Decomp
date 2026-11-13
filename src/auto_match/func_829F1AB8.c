typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


double fn_829F1AB8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  int in_r0;
  int in_r6;
  float *in_r7;
  unsigned char in_vs32 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  float in_register_000103d0;
  float in_register_000103d4;
  float in_register_000103d8;
  float in_register_000103e0;
  float in_register_000103e4;
  float in_register_000103e8;
  float in_vr62;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  float afStack_20 [4];
  float afStack_10 [4];
  
  fVar7 = lbl_821AAD20;
  altv207_13(in_vs32,in_vs36);
  altv207_13(in_vs32,in_vs37);
  altv207_13(in_vs32,in_vs35);
  fVar3 = in_register_000103e0 - in_register_000103f0;
  fVar4 = in_register_000103e4 - in_register_000103f4;
  fVar5 = in_register_000103e8 - in_register_000103f8;
  fVar1 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
  fVar2 = (in_register_000103d0 - in_register_000103f0) * fVar3 +
          (in_register_000103d4 - in_register_000103f4) * fVar4 +
          (in_register_000103d8 - in_register_000103f8) * fVar5;
  pfVar6 = (float *)((int)afStack_10 + in_r0 & 0xfffffff0);
  *pfVar6 = fVar1;
  pfVar6[1] = fVar1;
  pfVar6[2] = fVar1;
  pfVar6[3] = fVar1;
  pfVar6 = (float *)((int)afStack_20 + in_r0 & 0xfffffff0);
  *pfVar6 = fVar2;
  pfVar6[1] = fVar2;
  pfVar6[2] = fVar2;
  pfVar6[3] = fVar2;
  if (fVar7 <= afStack_20[0]) {
    if (afStack_20[0] <= afStack_10[0]) {
      *in_r7 = afStack_20[0] / afStack_10[0];
      altv300_21(in_vs32,in_vs39);{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs32,in_vs44,in_vs45); memcpy(in_vs32, &_vt0, 16); }
      pfVar6 = (float *)(in_r0 + in_r6 & 0xfffffff0);
      *pfVar6 = fVar3;
      pfVar6[1] = fVar4;
      pfVar6[2] = fVar5;
      pfVar6[3] = in_vr62 - in_vr63;
      goto LAB_829f1b44;
    }
    *in_r7 = lbl_82002AE0;
    altv207_13(in_vs32,in_vs37);
  }
  else {
    *in_r7 = fVar7;
    altv207_13(in_vs32,in_vs36);
  }
  pfVar6 = (float *)(in_r0 + in_r6 & 0xfffffff0);
  *pfVar6 = fVar2;
  pfVar6[1] = fVar2;
  pfVar6[2] = fVar2;
  pfVar6[3] = fVar2;
LAB_829f1b44:
  altv207_13(in_vs32,in_vs38);
  altv207_13(in_vs32,in_vs35);
  fVar1 = (fVar1 - fVar2) * (fVar1 - fVar2) + (fVar1 - fVar2) * (fVar1 - fVar2) +
          (fVar1 - fVar2) * (fVar1 - fVar2);
  pfVar6 = (float *)((int)afStack_10 + in_r0 & 0xfffffff0);
  *pfVar6 = fVar1;
  pfVar6[1] = fVar1;
  pfVar6[2] = fVar1;
  pfVar6[3] = fVar1;
  return (double)afStack_10[0];
}

