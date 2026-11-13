typedef unsigned char bool;
#define false 0


bool fn_8280A5B0(unsigned int param_1)

{
  if (0 < (int)param_1) {
    return (param_1 - 1 & param_1) == 0;
  }
  return false;
}

