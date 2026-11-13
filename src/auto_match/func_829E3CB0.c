typedef unsigned char bool;
#define true 1


bool fn_829E3CB0(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x8c) != 0) {
    *(unsigned int *)(param_1 + 0x8c) = 0;
    if (param_3 == 1) {
      *(unsigned int *)(param_1 + 0x90) = 0;
    }
    return true;
  }
  if ((param_3 == 1) && (*(int *)(param_1 + 0x90) != 0)) {
    *(unsigned int *)(param_1 + 0x90) = 0;
    return true;
  }
  return param_2 != *(unsigned int *)(param_1 + 0xfc);
}

