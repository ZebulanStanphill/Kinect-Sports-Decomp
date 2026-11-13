typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int lbl_82186EF0;
extern unsigned int uStack_10;
extern unsigned int uStack_4;
extern unsigned int uStack_8;
extern unsigned int uStack_c;
extern V16 vectorMultiplyAddFloatingPoint();


unsigned int fn_8307F7E0(void)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uStack_10;
  unsigned int uStack_c;
  unsigned int uStack_8;
  unsigned int uStack_4;
  
  puVar1 = (unsigned int *)((unsigned int)(&lbl_82186EF0 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  vectorMultiplyAddFloatingPoint(in_vs44,in_vs45,in_vs32);
  puVar2 = (unsigned int *)((int)&uStack_10 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  return (((((uStack_4 & 0xffffc0) << 8 | uStack_8 & 0x3fff) & 0xffffc0) << 8 | uStack_c & 0x3fff) &
         0x3fffffc0) << 2 | uStack_10 >> 6 & 0xff;
}

