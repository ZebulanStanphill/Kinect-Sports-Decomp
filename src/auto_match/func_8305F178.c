extern int fn_8305DD78();
extern int fn_8305EB60();


void fn_8305F178(unsigned __int64 param_1,int param_2,int param_3)

{
  *(unsigned int *)(param_2 + 0x34) = *(unsigned int *)(param_3 + 0x34);
  *(unsigned int *)(param_2 + 0x38) = *(unsigned int *)(param_3 + 0x38);
  *(unsigned int *)(param_2 + 0x3c) = *(unsigned int *)(param_3 + 0x3c);
  fn_8305EB60(param_2,*(unsigned int *)(param_3 + 0x30));
  fn_8305DD78(param_1,param_2);
  return;
}

