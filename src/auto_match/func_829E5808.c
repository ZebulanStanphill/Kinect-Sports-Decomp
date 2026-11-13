extern int fn_8265C990();


void fn_829E5808(unsigned int *param_1)

{
  if (*param_1 != 0) {
    fn_8265C990(*param_1,0x209d0000);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    fn_8265C990(param_1[1],0x209d0000);
    param_1[1] = 0;
  }
  return;
}

