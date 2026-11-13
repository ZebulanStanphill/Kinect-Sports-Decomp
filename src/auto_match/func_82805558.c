unsigned int fn_82805558(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  return ((param_1[1] << 1) << (0x1f - (param_2 & 0xff) & 0x3f) | *param_1 >> (param_2 & 0x3f)) &
         (1 << (param_3 & 0x3f)) - 1U;
}

