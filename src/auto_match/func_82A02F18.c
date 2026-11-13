typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_10;
extern unsigned int fStack_8;
extern unsigned int fStack_c;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000030;
extern V16 vectorConditionalSelect();
extern V16 vectorConvertFromSignedFixedPoint128();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorSplatImmediateSignedWord128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82A02F18(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  unsigned int *puVar6;
  int in_r0;
  bool bVar7;
  unsigned char in_vs32 [16];
  unsigned char in_vs33 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char auVar8 [16];
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
  float in_vr2;
  unsigned int in_register_000103a0;
  unsigned int in_register_000103a4;
  unsigned int in_register_000103a8;
  unsigned int in_vr58;
  unsigned char auVar9 [16];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  pfVar5 = (float *)((int)&fStack_10 + in_r0 & 0xfffffff0);
  *pfVar5 = in_register_00010010;
  pfVar5[1] = in_register_00010014;
  pfVar5[2] = in_register_00010018;
  pfVar5[3] = in_vr1;
  fVar1 = lbl_821AAD20;
  bVar7 = fStack_10 != lbl_821AAD20;
  pfVar5 = (float *)((unsigned int)(&stack0x00000030 + in_r0) & 0xfffffff0);
  *pfVar5 = in_register_00010020;
  pfVar5[1] = in_register_00010024;
  pfVar5[2] = in_register_00010028;
  pfVar5[3] = in_vr2;
  if (((bVar7) || (fStack_c != fVar1)) || (fStack_8 != fVar1)) {
    pfVar5 = (float *)((int)&fStack_10 + in_r0 & 0xfffffff0);
    *pfVar5 = in_register_00010020;
    pfVar5[1] = in_register_00010024;
    pfVar5[2] = in_register_00010028;
    pfVar5[3] = in_vr2;
    if ((((fStack_10 != fVar1) || (fStack_c != fVar1)) || (fStack_8 != fVar1)) &&
       (*(float *)(param_2 + 0x40a0) != fVar1)) {
      fVar2 = in_register_00010020 - in_register_00010010;
      fVar3 = in_register_00010024 - in_register_00010014;
      fVar4 = in_register_00010028 - in_register_00010018;{ V16 _vt0 = vectorSplatImmediateSignedWord128(1); memcpy(auVar9, &_vt0, 16); }
      vectorSplatImmediateSignedWord128(0);
      altv300_21(in_vs32,in_vs43);
      vectorConvertFromSignedFixedPoint128(auVar9,1);
      fVar1 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;{ V16 _vt1 = vectorNegativeMultiplySubtractFloatingPoint(in_vs44,in_vs43,in_vs42); memcpy(auVar8, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs32,auVar8,in_vs32); memcpy(auVar9, &_vt2, 16); }{ V16 _vt3 = vectorConditionalSelect(auVar9,in_vs45,in_vs40); memcpy(auVar9, &_vt3, 16); }{ V16 _vt4 = vectorMultiplyAddFloatingPoint(auVar9,in_vs41,in_vs33); memcpy(auVar9, &_vt4, 16); }
      pfVar5 = (float *)((int)&fStack_10 + in_r0 & 0xfffffff0);
      *pfVar5 = fVar2 * (1.0 / SQRT(fVar1));
      pfVar5[1] = fVar3 * (1.0 / SQRT(fVar1));
      pfVar5[2] = fVar4 * (1.0 / SQRT(fVar1));
      pfVar5[3] = (in_vr2 - in_vr1) * (1.0 / SQRT(fVar1));
      altv207_13(auVar9,auVar8);
      puVar6 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
      *puVar6 = in_register_000103a0;
      puVar6[1] = in_register_000103a4;
      puVar6[2] = in_register_000103a8;
      puVar6[3] = in_vr58;
      return;
    }
  }
  pfVar5 = (float *)(in_r0 + param_1 & 0xfffffff0);
  *pfVar5 = in_register_00010020;
  pfVar5[1] = in_register_00010024;
  pfVar5[2] = in_register_00010028;
  pfVar5[3] = in_vr2;
  return;
}

