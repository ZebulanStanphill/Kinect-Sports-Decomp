extern int fn_8265CA20();
extern int fn_8267C4F0();


int fn_8278FE78(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 8) != 0) {
    fn_8267C4F0(*(int *)(param_1 + 8));
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

