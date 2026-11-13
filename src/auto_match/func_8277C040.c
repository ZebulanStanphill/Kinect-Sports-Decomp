typedef unsigned char bool;
#define true 1


bool fn_8277C040(int param_1,unsigned int param_2,int param_3)

{
  if ((int)param_2 <= param_3) {
    return true;
  }
  return *(float *)(*(int *)((param_2 - 1 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x3c)) +
                    ((param_2 - 1) * 8 & 0x1ff8) + 4) <=
         *(float *)(*(int *)((param_2 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x3c)) +
                    (param_2 & 0x3ff) * 8 + 4);
}

