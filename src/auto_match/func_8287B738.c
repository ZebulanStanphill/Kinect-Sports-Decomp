unsigned __int64 fn_8287B738(int self,int *param_2)

{
  if (*(unsigned int *)(self + 0x68) == 0) {
    *param_2 = 0;
    return 0xffffffffa0250000;
  }
  *param_2 = *(int *)(self + 0x68);
  *(unsigned int *)(self + 0x68) = 0;
  return 0x20250000;
}

