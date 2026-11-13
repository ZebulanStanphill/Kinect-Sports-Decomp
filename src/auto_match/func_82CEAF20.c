__int64 fn_82CEAF20(int param_1,unsigned int param_2)

{
  return (param_2 + (param_2 & 0x7fffffff) * 2 & 0x1fffffff) * 8 +
         (unsigned __int64)*(unsigned int *)(param_1 + 0x18);
}

