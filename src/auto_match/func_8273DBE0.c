extern int fn_8267BE38();
extern int fn_8267C488();


int fn_8273DBE0(int param_1,unsigned int param_2)

{
  fn_8267BE38(*(unsigned int *)(param_1 + 0x10));
  fn_8267C488(param_1);
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

