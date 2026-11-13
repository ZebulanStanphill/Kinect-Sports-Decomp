extern int fn_8265C990();


void fn_82BD8098(unsigned int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      fn_8265C990(*param_1,0x608a2002);
      *param_1 = 0;
    }
    if (param_1[1] != 0) {
      fn_8265C990(param_1[1],0x618a0009);
      param_1[1] = 0;
    }
    fn_8265C990(param_1,0x618a8006);
  }
  return;
}

