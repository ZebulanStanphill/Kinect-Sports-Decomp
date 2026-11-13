extern int fn_8265C990();
extern int fn_82A16E18();


void fn_82A0F220(unsigned int *param_1)

{
  if (param_1[1] != 0) {
    fn_82A16E18(param_1[1]);
    if (param_1[1] != 0) {
      fn_8265C990(*(unsigned int *)(param_1[1] + -4),0x249c0000);
    }
  }
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  return;
}

