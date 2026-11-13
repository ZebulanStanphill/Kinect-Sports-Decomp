extern int fn_82C78EE0();
extern int fn_82C8BA58();
extern int fn_82C935C8();


void fn_830C67B0(int param_1,unsigned __int64 param_2)

{
  *(unsigned int *)(param_1 + 0xb64) =
       *(unsigned int *)((*(int *)(param_1 + 0xb94) + 0x2df) * 4 + param_1);
  *(unsigned int *)(param_1 + 0xb70) =
       *(unsigned int *)((*(int *)(param_1 + 0xb94) + 0x2e2) * 4 + param_1);
  *(unsigned int *)(param_1 + 0x830) =
       *(unsigned int *)((*(int *)(param_1 + 0x82c) + 0x107) * 8 + param_1);
  *(unsigned int *)(param_1 + 0x834) =
       *(unsigned int *)(*(int *)(param_1 + 0x82c) * 8 + param_1 + 0x83c);
  *(unsigned int *)(param_1 + 0x1cc) = 1;
  fn_82C935C8(param_1,*(unsigned int *)(param_1 + 0xf8));
  fn_82C8BA58(param_1);
  fn_82C78EE0(param_1,param_2);
  return;
}

