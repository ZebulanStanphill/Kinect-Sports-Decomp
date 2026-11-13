extern int fn_82F68B64();


void fn_830BD430(int param_1)

{
  unsigned int uVar1;
  
  *(unsigned int *)(param_1 + 0xb70) =
       *(unsigned int *)((*(int *)(param_1 + 0xba0) + 0x2e2) * 4 + param_1);
  *(unsigned int *)(param_1 + 0xb74) =
       *(unsigned int *)((*(int *)(param_1 + 0xba4) + 0x2e2) * 4 + param_1);
  *(unsigned int *)(param_1 + 0xb78) =
       *(unsigned int *)((*(int *)(param_1 + 0xba8) + 0x2e2) * 4 + param_1);
  uVar1 = *(unsigned int *)((*(int *)(param_1 + 0xb94) + 0x2df) * 4 + param_1);
  *(unsigned int *)(param_1 + 0xb6c) = uVar1;
  *(unsigned int *)(param_1 + 0xb68) = uVar1;
  *(unsigned int *)(param_1 + 0xb64) = uVar1;
  *(unsigned int *)(param_1 + 0x830) =
       *(unsigned int *)((*(int *)(param_1 + 0x82c) + 0x107) * 8 + param_1);
  *(unsigned int *)(param_1 + 0x834) =
       *(unsigned int *)(*(int *)(param_1 + 0x82c) * 8 + param_1 + 0x83c);
  fn_82F68B64();
  return;
}

