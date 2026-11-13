__int64 fn_82CEAE60(int param_1,unsigned int param_2)

{
  return (param_2 + (param_2 & 0x3fffffff) * 4 & 0x3fffffff) * 4 +
         (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
}

