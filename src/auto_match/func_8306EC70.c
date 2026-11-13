typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8306EC70(void)

{
  unsigned char in_vs32 [16];
  unsigned char in_vs33 [16];
  unsigned char in_vs34 [16];
  unsigned char in_vs43 [16];
  unsigned char auVar1 [16];{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs34,in_vs33); memcpy(auVar1, &_vt0, 16); }
  altv300_21(in_vs32,in_vs43);
  vectorMultiplyAddFloatingPoint(auVar1,in_vs32,in_vs33);
  return;
}

