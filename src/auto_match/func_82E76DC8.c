typedef unsigned char bool;
#define false 0


bool fn_82E76DC8(unsigned __int64 param_1,int param_2)

{
  if ((((param_2 != 0) && (*(unsigned short *)(param_2 + 0x1f) < 9)) && (*(unsigned int *)(param_2 + 0xb) < 0x100))
     && (*(int *)(param_2 + 7) == 0)) {
    return *(unsigned int *)(param_2 + 0x1b) == *(unsigned int *)(param_2 + 0xb);
  }
  return false;
}

