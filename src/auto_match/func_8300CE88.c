extern unsigned int lbl_8217C320;


void fn_8300CE88(unsigned int *param_1)

{
  *(unsigned char *)(param_1 + 3) = 1;
  *param_1 = &lbl_8217C320;
  *(unsigned short *)((int)param_1 + 0xe) = 0xffff;
  return;
}

