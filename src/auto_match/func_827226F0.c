extern int fn_8267C498();
extern int fn_82722690();


void fn_827226F0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  if (*(unsigned int *)(param_1 + 0x1c) != 0) {
    fn_8267C498(*(int *)(param_1 + 0x1c));
    *(unsigned int *)(param_1 + 0x1c) = 0;
  }
  fn_82722690(param_1,param_2,param_3);
  return;
}

