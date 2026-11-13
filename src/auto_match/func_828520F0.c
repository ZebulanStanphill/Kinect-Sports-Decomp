void fn_828520F0(unsigned __int64 *param_1,unsigned int param_2,unsigned int *param_3,int param_4)

{
  *param_1 = (unsigned __int64)
             (-0x8000000000000000 >>
             ((unsigned __int64)((param_2 + param_4) - 1 >> 2) - (unsigned __int64)(param_2 >> 2) & 0x7f)) >>
             ((unsigned __int64)(param_2 >> 2) & 0x7f) | *param_1;
  *param_3 = param_1 + (param_2 + 0x78) * 2;
  return;
}

