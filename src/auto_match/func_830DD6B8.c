typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_830DC918();
extern V16 vectorAddSignedHalfWordSaturate();
extern V16 vectorSplatImmediateSignedHalfWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_830DD6B8(__int64 param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  __int64 param_5)

{
  unsigned char auVar1 [16];
  unsigned char in_vs45 [16];{ V16 _vt0 = vectorSplatImmediateSignedHalfWord(7); memcpy(auVar1, &_vt0, 16); }
  vectorSplatImmediateSignedHalfWord(4);
  vectorAddSignedHalfWordSaturate(auVar1,in_vs45);
  fn_830DC918(param_1 - param_2,param_2,param_3,(param_5 + 1U & 0x7fffffff) << 1,param_5,0);
  return;
}

