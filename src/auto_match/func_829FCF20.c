extern unsigned int *auStack_10;
extern unsigned int fStack_8;
extern unsigned int lbl_82015BD4;
extern unsigned int lbl_8207F190;


double fn_829FCF20(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  float fVar3;
  int in_r0;
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  unsigned char auStack_10 [8];
  float fStack_8;
  
  uVar1 = *(unsigned int *)(param_2 * 0x4b50 + param_1 + 0x50);
  altv207_13(in_vs43,in_vs42);
  puVar2 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000103f0;
  puVar2[1] = in_register_000103f4;
  puVar2[2] = in_register_000103f8;
  puVar2[3] = in_vr63;
  fVar3 = fStack_8 * lbl_8207F190 * lbl_82015BD4;
  return (double)(fVar3 * fVar3 * (float)uVar1);
}

