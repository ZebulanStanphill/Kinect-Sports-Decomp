typedef unsigned char bool;
#define true 1
#define false 0


bool fn_82829EF8(int param_1)

{
  if ((*(unsigned int *)(param_1 + 8) & 4) != 0) {
    return true;
  }
  if ((*(unsigned int *)(param_1 + 8) & 0x10) != 0) {
    return *(int *)(param_1 + 0x18) != 0;
  }
  return false;
}

