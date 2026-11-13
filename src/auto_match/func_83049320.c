extern int fn_8307E4F8();
extern unsigned int uStack_16;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_83049320(int param_1,unsigned int *param_2,unsigned int param_3)

{
  int iVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  unsigned char bStack_18;
  unsigned char bStack_17;
  unsigned char uStack_16;
  
  param_3 = param_3 & 0xffff;
  if ((param_3 == 0) || (1 < param_3)) {
    stack_pair_20.first = *param_2;
    stack_pair_20.second = param_2[1];
    bStack_18 = *(unsigned char *)(param_2 + 2) >> 4;
    bStack_17 = *(unsigned char *)(param_2 + 2) & 0xf;
    if (param_3 == 0) {
      iVar1 = 0xff;
    }
    else {
      iVar1 = param_3 - 1;
      if (0xfe < iVar1) {
        iVar1 = 0xfe;
      }
    }
  }
  else {
    iVar1 = 0;
    stack_pair_20.first = 0;
    stack_pair_20.second = 0;
    bStack_18 = 0;
    bStack_17 = 1;
  }
  uStack_16 = (unsigned char)iVar1;
  fn_8307E4F8(*(unsigned int *)(param_1 + 0x28),0,&stack_pair_20.first);
  return;
}

