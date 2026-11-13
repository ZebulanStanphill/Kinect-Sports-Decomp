extern int fn_82E4FE40();


int fn_82E810B0(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 8) != 0) {
    fn_82E4FE40(*(int *)(param_1 + 8));
  }
  if ((param_2 & 1) != 0) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

