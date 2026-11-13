typedef unsigned char bool;
#define false 0


bool fn_8270EBD0(int param_1,int param_2)
{
  if (param_2 >= 0 && param_2 < 0xe5) {
    return (1 << (param_2 - (param_2 >> 3) * 8) & *((unsigned char *)param_1 + (param_2 >> 3) + 0x658)) != 0;
  }
  return false;
}
