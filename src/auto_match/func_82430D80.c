extern int fn_8229F618();
extern unsigned int ltcg_pool_0_0f;


void fn_82430D80(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = ltcg_pool_0_0f;
  if (param_2 != *(int *)(*(int *)(param_1 + 0x244) + 0x68)) {
    *(unsigned int *)(*(int *)(param_1 + 0x244) + 0x6c) = ltcg_pool_0_0f;
    *(int *)(*(int *)(param_1 + 0x244) + 0x68) = param_2;
    if (param_2 == 1) {
      *(unsigned int *)(*(int *)(param_1 + 0x244) + 0xd4) = uVar1;
    }
    else if (param_2 == 5) {
      fn_8229F618(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x240) + 0xd4) + 0xc));
    }
    else if ((param_2 == 7) && (*(char *)(*(int *)(param_1 + 0x244) + 100) != '\0')) {
      *(unsigned int *)(*(int *)(param_1 + 0x244) + 0x68) = 8;
    }
    *(unsigned char *)(*(int *)(param_1 + 0x244) + 0xd0) = 0;
    iVar2 = **(int **)(param_1 + 0x244);
    if (**(int **)(param_1 + 0x244) < param_3) {
      iVar2 = param_3;
    }
    **(int **)(param_1 + 0x244) = iVar2;
  }
  return;
}

