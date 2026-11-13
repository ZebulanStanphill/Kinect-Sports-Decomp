extern int fn_8265CA20();
extern int fn_82687270(unsigned int);


int fn_826DF9C0(int param_1,unsigned int param_2)

{
  if ((*(int *)(param_1 + 4) == 0) && (*(unsigned int *)(param_1 + 8) != 0)) {
    fn_82687270(*(unsigned int *)(param_1 + 8));
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

