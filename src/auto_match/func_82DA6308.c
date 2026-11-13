void fn_82DA6308(unsigned char *param_1,int param_2,int param_3)

{
  unsigned short uVar1;
  unsigned short uVar2;
  
  uVar1 = *(unsigned short *)(*(int *)(*(int *)(param_2 + 4) + 0xcc) + 0x20);
  uVar2 = *(unsigned short *)(*(int *)(*(int *)(param_3 + 4) + 0xcc) + 0x20);
  if (uVar1 < uVar2 || (uVar1 == uVar2 &&
      *(unsigned short *)(*(int *)(*(int *)(param_2 + 8) + 0xcc) + 0x20) <
      *(unsigned short *)(*(int *)(*(int *)(param_3 + 8) + 0xcc) + 0x20))) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}

