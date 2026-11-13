extern int fn_825D5F20();
extern int fn_825D6090();


void fn_82623030(int param_1,int param_2,unsigned int *param_3)

{
  if ((*(unsigned int *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + param_2) & 0x800) == 0) {
    fn_825D6090(*(unsigned int *)(param_1 + 0x1c),*(unsigned int *)*param_3,4);
  }
  else {
    fn_825D5F20();
  }
  if ((*(unsigned int *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + param_2) & 0x8000) == 0) {
    fn_825D6090(*(unsigned int *)(param_1 + 0x1c));
  }
  else {
    fn_825D5F20();
  }
  if (((~(unsigned __int64)*(unsigned int *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + param_2) & 0xffffffff) >> 0x13
      & 1) == 0) {
    fn_825D6090();
  }
  else {
    fn_825D5F20(*(unsigned int *)(param_1 + 0x1c));
  }
  return;
}

