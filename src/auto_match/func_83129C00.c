typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int lbl_83218C20;
extern V16 vectorSplatImmediateSignedHalfWord();


void fn_83129C00(void)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int in_vr0;
  
  vectorSplatImmediateSignedHalfWord(7);
  puVar1 = (unsigned int *)((unsigned int)(&lbl_83218C20 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010000;
  puVar1[1] = in_ACC;
  puVar1[2] = in_register_00010008;
  puVar1[3] = in_vr0;
  return;
}

