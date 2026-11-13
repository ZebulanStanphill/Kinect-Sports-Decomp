extern int fn_8267BE38();
extern int fn_8267C4F0();


int fn_826FA538(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 0x10) != 0) {
    fn_8267C4F0(*(int *)(param_1 + 0x10));
  }
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

