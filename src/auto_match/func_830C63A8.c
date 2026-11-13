unsigned int fn_830C63A8(int param_1,int param_2)

{
  return ((*(int *)(param_1 + 0x558) * 0x200 + (param_2 >> 8 & 0xffffff00U)) - 0x100 & 0xfffffe00) *
         *(int *)(param_1 + 0x5b8) & 0xfffe0000 |
         (int)(short)param_2 * *(int *)(param_1 + 0x5b8) >> 8 & 0xffffU;
}

