typedef struct { unsigned __int64 lo, hi; } V16;
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_821AAD20;
extern V16 vectorConditionalSelect();
extern V16 vectorConvertFromSignedFixedPoint128();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorSplatImmediateSignedWord128();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64 fn_82A02410(int param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char auVar4 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  float in_register_00010020;
  float in_register_00010024;
  float in_register_00010028;
  unsigned char auVar5 [16];
  float afStack_10 [4];{ V16 _vt0 = vectorSplatImmediateSignedWord128(1); memcpy(auVar5, &_vt0, 16); }
  vectorSplatImmediateSignedWord128(0);
  pfVar2 = (float *)(in_r0 + param_1 & 0xfffffff0);
  *pfVar2 = in_register_00010010;
  pfVar2[1] = in_register_00010014;
  pfVar2[2] = in_register_00010018;
  pfVar2[3] = in_vr1;
  fVar3 = lbl_821AAD20;
  vectorConvertFromSignedFixedPoint128(auVar5,1);
  fVar1 = (in_register_00010020 - in_register_00010010) *
          (in_register_00010020 - in_register_00010010) +
          (in_register_00010024 - in_register_00010014) *
          (in_register_00010024 - in_register_00010014) +
          (in_register_00010028 - in_register_00010018) *
          (in_register_00010028 - in_register_00010018);{ V16 _vt1 = vectorNegativeMultiplySubtractFloatingPoint(in_vs41,in_vs40,in_vs32); memcpy(auVar4, &_vt1, 16); }{ V16 _vt2 = vectorNegativeMultiplySubtractFloatingPoint(in_vs39,in_vs38,in_vs32); memcpy(auVar5, &_vt2, 16); }{ V16 _vt3 = vectorMultiplyAddFloatingPoint(in_vs45,auVar4,in_vs45); memcpy(auVar4, &_vt3, 16); }{ V16 _vt4 = vectorMultiplyAddFloatingPoint(in_vs44,auVar5,in_vs44); memcpy(auVar5, &_vt4, 16); }
  vectorConditionalSelect(auVar4,in_vs42,in_vs36);
  vectorConditionalSelect(auVar5,in_vs43,in_vs37);
  pfVar2 = (float *)((int)afStack_10 + in_r0 & 0xfffffff0);
  *pfVar2 = 1.0 / SQRT(fVar1);
  pfVar2[1] = 1.0 / SQRT(fVar1);
  pfVar2[2] = 1.0 / SQRT(fVar1);
  pfVar2[3] = 1.0 / SQRT(fVar1);
  *(float *)(param_1 + 0x20) = afStack_10[0];
  pfVar2 = (float *)(param_1 + 0x10U & 0xfffffff0);
  *pfVar2 = fVar1 * (1.0 / SQRT(fVar1));
  pfVar2[1] = fVar1 * (1.0 / SQRT(fVar1));
  pfVar2[2] = fVar1 * (1.0 / SQRT(fVar1));
  pfVar2[3] = fVar1 * (1.0 / SQRT(fVar1));
  if (fVar3 < afStack_10[0]) {
    return 1;
  }
  return 0;
}

