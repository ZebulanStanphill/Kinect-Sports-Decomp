typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_40;
extern int fn_830DC560();
extern int fn_830DD210();
extern V16 vectorSplatImmediateSignedHalfWord();
extern V16 vectorSubtractSignedHalfWordSaturate();
extern void *memcpy(void *, const void *, unsigned int);


void fn_830DDFA8(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned char auVar2 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int in_vr0;
  unsigned char auStack_40 [64];{ V16 _vt0 = vectorSplatImmediateSignedHalfWord(8); memcpy(auVar2, &_vt0, 16); }
  vectorSubtractSignedHalfWordSaturate(auVar2,in_vs45);
  puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010000;
  puVar1[1] = in_ACC;
  puVar1[2] = in_register_00010008;
  puVar1[3] = in_vr0;
  fn_830DC560(param_1 + -1,param_2,param_3,param_5,0);
  vectorSplatImmediateSignedHalfWord(4);
  fn_830DD210(param_3,param_5,0);
  return;
}

