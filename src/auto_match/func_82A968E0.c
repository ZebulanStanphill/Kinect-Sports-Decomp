extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;


void fn_82A968E0(double param_1,unsigned __int64 param_2,int param_3)

{
  float *pfVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  float afStack_10 [4];
  
  pfVar1 = afStack_10;
  puVar2 = (unsigned int *)(param_3 + 0x1c);
  lVar3 = 4;
  do {
    if (*puVar2 >> (puVar2[4] & 0x3f) == 1) {
      *pfVar1 = (float)((double)lbl_82002AE0 - param_1) - lbl_82002C5C;
    }
    puVar2 = puVar2 + 1;
    pfVar1 = pfVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  altv300_23(in_vs42,in_vs43);
  altv300_21(in_vs32,in_vs41);
  return;
}

