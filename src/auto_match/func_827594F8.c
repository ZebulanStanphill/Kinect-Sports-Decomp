extern int fn_8267C4F0();


void fn_827594F8(unsigned char *param_1,unsigned char param_2)

{
  if (((*param_1 & 0x10) != 0) && (*(unsigned int *)(param_1 + 4) != 0)) {
    fn_8267C4F0(*(unsigned int *)(param_1 + 4));
  }
  *param_1 = param_2;
  return;
}

