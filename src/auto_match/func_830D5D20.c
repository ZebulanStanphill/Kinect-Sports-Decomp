extern int fn_82C565B0();
extern int fn_82C8BA58();
extern int fn_82C8BB60();
extern int fn_82C935C8();
extern int fn_82C9B9E0();


void fn_830D5D20(int param_1,unsigned __int64 param_2)

{

  
  *(unsigned int *)(param_1 + 0xb64) =
       *(unsigned int *)((*(int *)(param_1 + 0xb94) + 0x2df) * 4 + param_1);
  *(unsigned int *)(param_1 + 0xb70) =
       *(unsigned int *)((*(int *)(param_1 + 0xb94) + 0x2e2) * 4 + param_1);
  *(unsigned int *)(param_1 + 0x830) =
       *(unsigned int *)((*(int *)(param_1 + 0x82c) + 0x107) * 8 + param_1);
  *(unsigned int *)(param_1 + 0x834) =
       *(unsigned int *)(*(int *)(param_1 + 0x82c) * 8 + param_1 + 0x83c);
  if (*(int *)(param_1 + 0xfb0) == 3) {
    *(unsigned int *)(param_1 + 0x1cc) = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0x1cc) = 1;
  }
  if ((*(int *)(param_1 + 0x39f8) * *(int *)(param_1 + 0xd64) & (int)0xffffff80) != 0) {
    *(unsigned int *)(param_1 + 0x3a00) = 1;
    *(unsigned int *)(param_1 + 0x39fc) = 3;
  }
  else {
    *(unsigned int *)(param_1 + 0x39fc) = 1;
    *(unsigned int *)(param_1 + 0x3a00) = 3;
  }
  if (*(int *)(param_1 + 0x50d0) == 0) {
    *(unsigned int *)(param_1 + 0x569c) = *(unsigned int *)(param_1 + 0x56a0);
  }
  else {
    *(unsigned int *)(param_1 + 0x569c) = *(unsigned int *)(param_1 + 0x56a4);
  }
  if (*(int *)(param_1 + 0x54c8) == 1) {
    *(int *)(param_1 + 0x55d0) = *(int *)(param_1 + 0x8c) * 4 + *(int *)(param_1 + 0x55d4);
  }
  else {
    *(unsigned int *)(param_1 + 0x55d0) = *(unsigned int *)(param_1 + 0x55d4);
  }
  fn_82C565B0(param_1,*(unsigned int *)(param_1 + 0xf8));
  fn_82C935C8(param_1,*(unsigned int *)(param_1 + 0xf8));
  fn_82C8BA58(param_1);
  fn_82C8BB60(param_1);
  fn_82C9B9E0(param_1,param_2);
  return;
}

