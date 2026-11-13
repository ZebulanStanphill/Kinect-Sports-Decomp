typedef unsigned char bool;
#define false 0


bool fn_82930398(int param_1,unsigned int param_2)

{
  if (param_2 == 0) {
    return false;
  }
  return *(int *)(param_2 + 4) == *(int *)(param_1 + 4);
}

