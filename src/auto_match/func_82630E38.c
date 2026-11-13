extern int fn_82F68B5C();


void fn_82630E38(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = *(unsigned __int64 *)(param_1 + 0x10);
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x20000000000;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x30000000000;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x38000000000;
  *(unsigned __int64 *)(param_1 + 0x18) = *(unsigned __int64 *)(param_1 + 0x18) | 0x800000000;
  uVar2 = *(unsigned __int64 *)(param_1 + 0x10);
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x80;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0xc0;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0xe0;
  *(unsigned __int64 *)(param_1 + 0x20) = *(unsigned __int64 *)(param_1 + 0x20) | 0x80000;
  uVar2 = *(unsigned __int64 *)(param_1 + 0x10);
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x100000000000;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x100000080000;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x100000180000;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x100000180800;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x100000180900;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x100000180908;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x102000180908;
  *(unsigned __int64 *)(param_1 + 0x18) = *(unsigned __int64 *)(param_1 + 0x18) | 0x40000000000000;
  *(unsigned __int64 *)(param_1 + 0x20) = *(unsigned __int64 *)(param_1 + 0x20) | 0x800000000;
  *(unsigned __int64 *)(param_1 + 0x18) = *(unsigned __int64 *)(param_1 + 0x18) | 0x80000000;
  uVar1 = *(unsigned int *)(param_1 + 0x28c4);
  fn_82F68B5C(param_1,(int)(uVar1 << 0x11 | uVar1 >> 0xf) >> 0x11,(int)(uVar1 << 1) >> 0x11,
               (*(int *)(param_1 + 0x28c8) << 0x11) >> 0x11,
               (*(int *)(param_1 + 0x28c8) << 1) >> 0x11);
  return;
}

