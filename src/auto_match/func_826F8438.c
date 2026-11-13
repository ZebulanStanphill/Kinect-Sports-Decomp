extern int fn_8265CA20();
extern int fn_8267C498();


int fn_826F8438(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 4) != 0) {
    fn_8267C498(*(int *)(param_1 + 4));
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

