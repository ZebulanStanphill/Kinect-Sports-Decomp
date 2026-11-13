typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_50;
extern int fn_8255E530();
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8255E2B0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned char in_vs32 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char auVar1 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char auStack_50 [80];
  
  fn_8255E530(auStack_50,param_1,param_2);{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs42,in_vs40,in_vs43); memcpy(auVar1, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs41,auVar1); memcpy(auVar1, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs38,in_vs45,auVar1); memcpy(auVar1, &_vt2, 16); }
  vectorConditionalSelect(auVar1,in_vs32,in_vs44);
  return;
}

