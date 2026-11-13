typedef unsigned char bool;
#define false 0


bool fn_82720B48(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    return *(int *)(*(int *)(param_1 + 4) + 0x38) == 0;
  }
  return false;
}

