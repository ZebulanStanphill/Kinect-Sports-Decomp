extern int fn_827D8A28();
extern int fn_827D8FB8();


void fn_827D90D0(int param_1,unsigned __int64 param_2)

{
  if (*(unsigned int *)(param_1 + 4) == *(int *)(param_1 + 8)) {
    fn_827D8FB8(param_1,1);
  }
  fn_827D8A28(param_1 + 0xc,*(unsigned int *)(param_1 + 4),param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  return;
}

