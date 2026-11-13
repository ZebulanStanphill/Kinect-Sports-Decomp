extern int fn_8267BE38();
extern int fn_826AE560();


unsigned int * fn_826C2528(unsigned int *param_1,unsigned int param_2)

{
  fn_826AE560(*param_1,param_1[1]);
  fn_8267BE38(*param_1);
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

