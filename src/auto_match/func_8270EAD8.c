void fn_8270EAD8(int param_1,unsigned short param_2,unsigned char param_3,unsigned int param_4,
                  unsigned int param_5,unsigned char param_6)

{
  unsigned int uVar1;
  
  if (100 <= *(unsigned int *)(param_1 + 0x648)) {
    return;
  }
  *(unsigned short *)(*(int *)(param_1 + 0x640) * 0x10 + param_1 + 4) = param_2;
  *(unsigned char *)(*(int *)(param_1 + 0x640) * 0x10 + param_1 + 0xc) = param_3;
  *(unsigned int *)(*(int *)(param_1 + 0x640) * 0x10 + param_1) = param_4;
  *(unsigned int *)(*(int *)(param_1 + 0x640) * 0x10 + param_1 + 8) = param_5;
  *(unsigned char *)(*(int *)(param_1 + 0x640) * 0x10 + param_1 + 0xd) = param_6;
  uVar1 = *(int *)(param_1 + 0x640) + 1;
  *(unsigned int *)(param_1 + 0x640) = uVar1;
  if (100 <= uVar1) {
    *(unsigned int *)(param_1 + 0x640) = 0;
  }
  *(int *)(param_1 + 0x648) = *(int *)(param_1 + 0x648) + 1;
  return;
}

