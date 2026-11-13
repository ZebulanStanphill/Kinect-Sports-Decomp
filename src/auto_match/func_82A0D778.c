extern unsigned int lbl_82005C88;


int fn_82A0D778(double param_1,unsigned __int64 param_2,int param_3,__int64 param_4,unsigned __int64 param_5,
                 unsigned int param_6,unsigned int param_7)

{
  float fVar1;
  float *pfVar2;
  int in_r0;
  int iVar3;
  double dVar4;
  unsigned char in_vs32 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs36 [16];
  float in_register_000103e0;
  float in_register_000103e4;
  float in_register_000103e8;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float afStack_10 [4];
  
  iVar3 = 0;
  dVar4 = (double)lbl_82005C88;
  do {
    if ((*(unsigned short *)(param_3 + 0xe) & param_7) == param_6) {
      altv207_13(in_vs32,in_vs36);
      altv207_13(in_vs32,in_vs35);
      fVar1 = (in_register_000103e0 - in_register_000103f0) *
              (in_register_000103e0 - in_register_000103f0) +
              (in_register_000103e4 - in_register_000103f4) *
              (in_register_000103e4 - in_register_000103f4) +
              (in_register_000103e8 - in_register_000103f8) *
              (in_register_000103e8 - in_register_000103f8);
      pfVar2 = (float *)((int)afStack_10 + in_r0 & 0xfffffff0);
      *pfVar2 = fVar1;
      pfVar2[1] = fVar1;
      pfVar2[2] = fVar1;
      pfVar2[3] = fVar1;
      if ((double)afStack_10[0] < dVar4) {
        dVar4 = (double)afStack_10[0];
        iVar3 = param_3;
      }
    }
    param_4 = param_4 + -1;
    param_3 = param_3 + 0x10;
  } while (param_4 != 0);
  if (param_1 < dVar4) {
    return 0;
  }
  return iVar3;
}

