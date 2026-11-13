void fn_82DB4970(unsigned char *param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = *(unsigned int *)(param_2 + 0x30);
  uVar2 = *(unsigned int *)(param_3 + 0x30);
  if (*(unsigned int *)(*(int *)((*(unsigned char *)(uVar1 + 0x1a) + 1) * 4 + uVar1) + 0xd4) <
      *(unsigned int *)(*(int *)((*(unsigned char *)(uVar2 + 0x1a) + 1) * 4 + uVar2) + 0xd4)) {
    *param_1 = 1;
    return;
  }
  if (*(int *)(*(int *)((*(unsigned char *)(uVar1 + 0x1a) + 1) * 4 + uVar1) + 0xd4) ==
      *(int *)(*(int *)((*(unsigned char *)(uVar2 + 0x1a) + 1) * 4 + uVar2) + 0xd4)) {
    *param_1 = -(uVar1 < uVar2) & 1;
    return;
  }
  *param_1 = 0;
  return;
}

