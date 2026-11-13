extern int fn_82C2B590();


void fn_82E66FE0(unsigned int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      fn_82C2B590(*param_1);
      *param_1 = 0;
    }
    if (param_1[1] != 0) {
      fn_82C2B590(param_1[1]);
      param_1[1] = 0;
    }
    if (param_1[2] != 0) {
      fn_82C2B590(param_1[2]);
      param_1[2] = 0;
    }
    if (param_1[0x28] != 0) {
      fn_82C2B590(param_1[0x28]);
      param_1[0x28] = 0;
    }
    if (param_1[0x29] != 0) {
      fn_82C2B590(param_1[0x29]);
      param_1[0x29] = 0;
    }
  }
  return;
}

