extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200571C;
extern unsigned int uStack_a;


void fn_8279A5A8(double param_1,int param_2)

{
  unsigned short uStack_a;
  
  if (param_1 == (double)lbl_82002AE0) {
    *(unsigned short *)(param_2 + 0x13a) = 0x14;
    *(unsigned char *)(param_2 + 0x13f) = *(unsigned char *)(param_2 + 0x13f) & 0xfb;
    return;
  }
  *(unsigned char *)(param_2 + 0x13f) = *(unsigned char *)(param_2 + 0x13f) | 4;
  uStack_a = (unsigned short)(__int64)(param_1 * (double)lbl_8200571C);
  *(unsigned short *)(param_2 + 0x13a) = uStack_a;
  return;
}

