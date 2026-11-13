extern int fn_8265CA20();
extern int fn_8267BE38();
extern int fn_8269A990();


int fn_8269F0E0(int param_1,unsigned int param_2)

{
  fn_8269A990(*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 0x14));
  fn_8267BE38(*(unsigned int *)(param_1 + 0x10));
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

