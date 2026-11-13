extern int fn_828C40D8();


void fn_8251A2D0(unsigned int *param_1)

{
  (*(int (**)())(*param_1 + 0xc))();
  fn_828C40D8(*(unsigned int *)(param_1[1] + 8));
  if (param_1[0x14] != 0) {
    param_1[0x15] = 0;
  }
  return;
}

