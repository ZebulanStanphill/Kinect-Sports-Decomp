extern int fn_829C5C78();
extern unsigned int lbl_820570A8;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_829C5D28(int param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs36 [16];
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float afStack_20 [8];
  
  if (*(float *)(param_1 + 0xc) != lbl_821AAD20) {
    fn_829C5C78(0xffffffff83214f20,param_1);
    fVar3 = lbl_820570A8;
    altv207_13(in_vs32,in_vs36);
    fVar1 = in_register_000103f0 * in_register_00010010 +
            in_register_000103f4 * in_register_00010014 +
            in_register_000103f8 * in_register_00010018;
    pfVar2 = (float *)((int)afStack_20 + in_r0 & 0xfffffff0);
    *pfVar2 = fVar1;
    pfVar2[1] = fVar1;
    pfVar2[2] = fVar1;
    pfVar2[3] = fVar1;
    if (fVar3 <= afStack_20[0]) {
      return 1;
    }
  }
  return 0;
}

