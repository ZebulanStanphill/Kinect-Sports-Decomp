typedef unsigned char bool;
#define false 0


bool fn_82850F58(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  
  if (*(unsigned int *)(param_1 + 0x178) > 0) {
    uVar1 = **(unsigned int **)((param_3 + 0x10) * 4 + param_2);
    if (uVar1 < **(unsigned int **)(param_1 + 0x17c)) {
      return *(int *)((*(unsigned int **)(param_1 + 0x17c))[1] + uVar1 * 0x10 + 8) != 0;
    }
  }
  return false;
}

