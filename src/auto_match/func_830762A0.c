typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_40;
extern int fn_8306ED78();
extern int fn_8306ED98();
extern V16 vectorConditionalSelect();
extern V16 vectorConvertFromSignedFixedPoint128();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorSplatImmediateSignedWord128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_830762A0(void)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned char auVar2 [16];
  unsigned char auStack_40 [64];
  
  fn_8306ED78();
  puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  fn_8306ED98();{ V16 _vt0 = vectorSplatImmediateSignedWord128(1); memcpy(auVar2, &_vt0, 16); }
  vectorSplatImmediateSignedWord128(0);
  vectorConvertFromSignedFixedPoint128(auVar2,1);
  altv207_13(in_vs32,in_vs42);{ V16 _vt1 = vectorNegativeMultiplySubtractFloatingPoint(in_vs44,in_vs43,in_vs42); memcpy(auVar2, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs32,auVar2,in_vs32); memcpy(auVar2, &_vt2, 16); }
  vectorConditionalSelect(auVar2,in_vs45,in_vs41);
  return;
}

