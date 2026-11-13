extern int fn_82C565B0();
extern int fn_82C75C10();
extern int fn_82C78EE0();
extern int fn_82C935C8();
extern int fn_82CAD120();


void fn_830BD1B0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  
  if (((*(int *)(param_1 + 0x50c8) == 0) || (*(int *)(param_1 + 0x50cc) == 0)) ||
     (*(int *)(param_1 + 0x54c8) != 1)) {
    *(unsigned int *)(param_1 + 0x55d0) = *(unsigned int *)(param_1 + 0x55d4);
  }
  else {
    *(int *)(param_1 + 0x55d0) = *(int *)(param_1 + 0x8c) * 4 + *(int *)(param_1 + 0x55d4);
  }
  uVar1 = *(unsigned int *)((*(int *)(param_1 + 0xb94) + 0x2df) * 4 + param_1);
  *(unsigned int *)(param_1 + 0xb6c) = uVar1;
  *(unsigned int *)(param_1 + 0xb68) = uVar1;
  *(unsigned int *)(param_1 + 0xb64) = uVar1;
  *(unsigned int *)(param_1 + 0xb70) =
       *(unsigned int *)((*(int *)(param_1 + 0xba0) + 0x2e2) * 4 + param_1);
  *(unsigned int *)(param_1 + 0xb74) =
       *(unsigned int *)((*(int *)(param_1 + 0xba4) + 0x2e2) * 4 + param_1);
  *(unsigned int *)(param_1 + 0xb78) =
       *(unsigned int *)((*(int *)(param_1 + 0xba8) + 0x2e2) * 4 + param_1);
  *(unsigned int *)(param_1 + 0x830) =
       *(unsigned int *)((*(int *)(param_1 + 0x82c) + 0x107) * 8 + param_1);
  *(unsigned int *)(param_1 + 0x834) =
       *(unsigned int *)(*(int *)(param_1 + 0x82c) * 8 + param_1 + 0x83c);
  *(unsigned int *)(param_1 + 0x1cc) = (unsigned int)(*(int *)(param_1 + 0xfb0) != 3);
  fn_82C565B0(param_1,*(unsigned int *)(param_1 + 0xf8));
  if ((*(int *)(param_1 + 0xfb0) == 2) || (uVar1 = 0, *(int *)(param_1 + 0xfb0) == 3)) {
    uVar1 = 1;
  }
  *(unsigned int *)(*(int *)(param_1 + 0x7b8) + 0x4c) = uVar1;
  fn_82CAD120(*(unsigned int *)(param_1 + 0x7b8),*(unsigned int *)(param_1 + 0xf8),1);
  fn_82C935C8(param_1,*(unsigned int *)(param_1 + 0xf8));
  fn_82C75C10(param_1);
  fn_82C78EE0(param_1,param_2);
  return;
}

