typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_30;
extern int fn_830DCDB0();
extern int fn_830DD210();
extern V16 vectorRotateLeftIntegerHalfWord();
extern V16 vectorSplatImmediateSignedHalfWord();
extern V16 vectorSubtractSignedHalfWordSaturate();
extern void *memcpy(void *, const void *, unsigned int);


void fn_830DE3C8(__int64 param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned char auVar2 [16];
  unsigned char in_vs34 [16];
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int in_vr0;
  unsigned char auStack_30 [48];{ V16 _vt0 = vectorSplatImmediateSignedHalfWord(4); memcpy(auVar2, &_vt0, 16); }
  vectorSplatImmediateSignedHalfWord(1);{ V16 _vt1 = vectorRotateLeftIntegerHalfWord(auVar2,auVar2); memcpy(auVar2, &_vt1, 16); }
  vectorSubtractSignedHalfWordSaturate(auVar2,in_vs34);
  puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010000;
  puVar1[1] = in_ACC;
  puVar1[2] = in_register_00010008;
  puVar1[3] = in_vr0;
  fn_830DCDB0((param_1 - param_2) + -1,param_2,param_3,(param_5 & 0x7fffffff) * 2 + 3,param_5,0);
  vectorSplatImmediateSignedHalfWord(7);
  fn_830DD210(param_3,param_5,0);
  return;
}

