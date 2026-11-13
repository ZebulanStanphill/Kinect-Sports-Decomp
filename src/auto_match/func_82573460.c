typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82573460(void)

{
  unsigned char in_vs32 [16];
  unsigned char auVar1 [16];
  unsigned char in_vs34 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs32,in_vs34,in_vs45); memcpy(auVar1, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs35,auVar1); memcpy(auVar1, &_vt1, 16); }
  vectorMultiplyAddFloatingPoint(in_vs43,in_vs36,auVar1);
  return;
}

