extern unsigned int lbl_8320A63C;


void fn_8281F800(int param_1)

{
  *(int *)(param_1 + 8) = lbl_8320A63C;
  lbl_8320A63C = param_1;
  *(unsigned char *)(param_1 + 0xc) = 1;
  return;
}

