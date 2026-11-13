extern int fn_82C8BA58();
extern int fn_82C935C8();
extern int fn_82C9B9E0();


void fn_830CBCD0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  if ((*(int *)(param_1 + 0x39f8) * *(int *)(param_1 + 0xd64) & 0xffffff80U) == 0) {
    uVar2 = 4;
    uVar1 = 3;
  }
  else {
    uVar2 = 3;
    uVar1 = 4;
  }
  *(unsigned int *)(param_1 + 0x39fc) = uVar2;
  *(unsigned int *)(param_1 + 0x3a00) = uVar1;
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
  fn_82C9B9E0(param_1,param_2);
  return;
}

