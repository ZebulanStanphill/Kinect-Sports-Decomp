extern int fn_822315A0();


void fn_82674198(unsigned int *param_1)

{
  if (*param_1 != param_1[1]) {
    if (*(unsigned int *)(param_1[1] + -4) != 0) {
      fn_822315A0(*(unsigned int *)(param_1[1] + -4));
    }
    param_1[1] = param_1[1] + -8;
  }
  return;
}

