void fn_82852138(int param_1,unsigned int param_2,int *param_3,int param_4)

{
  *(unsigned __int64 *)(param_1 + 8) =
       (unsigned __int64)
       (-0x8000000000000000 >>
       ((unsigned __int64)((param_2 + param_4) - 1 >> 2) - (unsigned __int64)(param_2 >> 2) & 0x7f)) >>
       ((unsigned __int64)(param_2 >> 2) & 0x7f) | *(unsigned __int64 *)(param_1 + 8);
  *param_3 = (param_2 + 0x178) * 0x10 + param_1;
  return;
}

