typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_830E2530();
extern V16 vectorAddSignedHalfWordSaturate();
extern V16 vectorShiftRightHalfWord();
extern V16 vectorSplatImmediateSignedHalfWord();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64
fn_830E2C20(__int64 param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  unsigned char auVar1 [16];
  unsigned char in_vs45 [16];{ V16 _vt0 = vectorSplatImmediateSignedHalfWord(0xfb); memcpy(auVar1, &_vt0, 16); }
  vectorSplatImmediateSignedHalfWord(6);{ V16 _vt1 = vectorShiftRightHalfWord(auVar1,auVar1); memcpy(auVar1, &_vt1, 16); }
  vectorAddSignedHalfWordSaturate(auVar1,in_vs45);
  fn_830E2530(param_1 - param_2,param_2,param_3,param_2,2 << ((unsigned int)param_5 & 0x3f),param_5,0);
  return 0;
}

