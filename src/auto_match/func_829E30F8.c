extern int fn_829E4C60();
extern int fn_829E53B0();


void fn_829E30F8(int param_1)

{
  if (*(unsigned int *)(param_1 + 4) != 0) {
    fn_829E4C60(*(int *)(param_1 + 4),1);
    *(unsigned int *)(param_1 + 4) = 0;
  }
  fn_829E53B0(param_1 + 0x40);
  return;
}

