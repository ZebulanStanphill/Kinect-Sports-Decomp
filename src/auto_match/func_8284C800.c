typedef unsigned char bool;


bool fn_8284C800(int param_1)

{
  return *(int *)(param_1 + 0x1c) == 2;
}

