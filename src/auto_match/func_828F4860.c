extern int fn_82930298();
extern int fn_829342D8();


void fn_828F4860(int param_1)

{
  if (*(int *)(param_1 + 0x2a8) != 0) {
    fn_82930298(*(unsigned int *)(param_1 + 0x2ac));
    fn_829342D8();
    *(unsigned int *)(param_1 + 0x2a8) = 0;
  }
  return;
}

