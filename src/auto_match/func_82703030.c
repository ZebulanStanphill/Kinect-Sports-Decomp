extern int fn_8267BE38();
extern int fn_826A27D8();


int * fn_82703030(unsigned int *param_1,unsigned int param_2)

{
  if (*param_1 != 0) {
    fn_8267BE38(*param_1);
  }
  fn_826A27D8(param_1 + 2);
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

