extern int fn_8267BE38();
extern int fn_82687EE0();


unsigned int * fn_82688A80(unsigned int *param_1,unsigned int param_2)

{
  fn_82687EE0(*param_1,param_1[1]);
  fn_8267BE38(*param_1);
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

