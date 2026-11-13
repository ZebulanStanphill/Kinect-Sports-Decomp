extern int fn_8267BE38();
extern int fn_82725EF0();


unsigned int * fn_8272A678(unsigned int *param_1,unsigned int param_2)

{
  fn_82725EF0(*param_1,param_1[1]);
  fn_8267BE38(*param_1);
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

