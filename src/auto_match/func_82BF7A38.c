typedef unsigned char bool;
#define false 0


bool fn_82BF7A38(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x10) != 0) {
    return *(int *)(*(int *)(param_1 + 0x10) + 8) == 1;
  }
  return false;
}

