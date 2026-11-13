typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorShiftLeft();
extern V16 vectorShiftLeftByOctet();
extern V16 vectorSubtractUnsignedWordModulo();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82803398(void)

{
  unsigned char auVar1 [16];
  unsigned char in_vs33 [16];
  unsigned char in_vs34 [16];{ V16 _vt0 = vectorShiftLeftByOctet(in_vs34,in_vs33); memcpy(auVar1, &_vt0, 16); }{ V16 _vt1 = vectorShiftLeft(auVar1,in_vs33); memcpy(auVar1, &_vt1, 16); }
  vectorSubtractUnsignedWordModulo(auVar1,in_vs34);
  return;
}

