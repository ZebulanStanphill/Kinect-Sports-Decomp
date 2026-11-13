unsigned int fn_830C6770(int param_1,int param_2)

{
  return ((__int64)(int)(param_2 >> 8 & 0xfffffe00) * *(int *)(param_1 + 0x5b0) &
         0xfffe0000U) + (*(unsigned int *)(param_1 + 0x558) & 0x7fff) * -0x20000 + 0x10000 |
         (unsigned __int64)(unsigned int)((int)(short)param_2 * *(int *)(param_1 + 0x5b0) >> 8) & 0xffff;
}

