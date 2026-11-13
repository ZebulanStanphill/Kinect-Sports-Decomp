extern unsigned int fStack_40;
extern int fn_829DD528();
extern int fn_829DD5D0();
extern int fn_829DD770();
extern unsigned int lbl_821AAD20;


void fn_829DDA48(int param_1)

{
  float *pfVar1;
  int in_r0;
  int iVar2;
  unsigned char in_vs32 [16];
  unsigned char in_vs63 [16];
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  float fStack_40;
  float afStack_3c [9];
  
  fStack_40 = lbl_821AAD20;
  afStack_3c[0] = lbl_821AAD20;
  fn_829DD770(afStack_3c,&fStack_40);
  iVar2 = fn_829DD528((double)fStack_40);
  fn_829DD5D0(iVar2 * 0x260 + param_1 + 0x18,afStack_3c);
  altv207_13(in_vs32,in_vs63);
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  pfVar1 = (float *)(in_r0 + param_1 & 0xfffffff0);
  *pfVar1 = in_register_000103f0 + in_register_00010010;
  pfVar1[1] = in_register_000103f4 + in_register_00010014;
  pfVar1[2] = in_register_000103f8 + in_register_00010018;
  pfVar1[3] = in_vr63 + in_vr1;
  return;
}

