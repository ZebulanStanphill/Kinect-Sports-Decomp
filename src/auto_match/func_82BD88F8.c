extern int fn_8265C990();
extern int fn_82BD8098();


void fn_82BD88F8(unsigned int *param_1)

{
  if (param_1 != (unsigned int *)0x0) {
    if (param_1[1] != 0) {
      fn_8265C990(param_1[1],0x618a0003);
      param_1[1] = 0;
    }
    fn_82BD8098(*param_1);
    *param_1 = 0;
    fn_8265C990(param_1,0x618a8013);
  }
  return;
}

