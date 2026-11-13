typedef unsigned char bool;
#define false 0


bool fn_827F2278(int param_1)

{
  int iVar1;
  
  if ((1 < ((unsigned int)*(unsigned char *)(param_1 + 0x53) - (unsigned int)*(unsigned char *)(param_1 + 0x54) & 3) + 1) &&
     ((iVar1 = *(int *)(param_1 + 0x104), iVar1 != 0 ||
      (iVar1 = *(int *)(param_1 + 0x108), iVar1 != 0)))) {
    return iVar1 == *(int *)((*(unsigned char *)(param_1 + 0x53) + 8) * 4 + param_1);
  }
  return false;
}

