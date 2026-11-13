void fn_8302AE30(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x24) = param_2;
  *(unsigned int *)(param_1 + 0x28) =
       (unsigned int)(_CountLeadingZeros(param_2) << 0x1a) & 0x80000000 | *(unsigned int *)(param_1 + 0x28) & 0x7fffffff;
  return;
}

