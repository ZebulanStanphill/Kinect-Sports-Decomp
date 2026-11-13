extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_82687270();


int fn_826E0D90(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 0xc) != 0) {
    fn_82687270(*(int *)(param_1 + 0xc));
  }
  fn_8267C488(param_1);
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

