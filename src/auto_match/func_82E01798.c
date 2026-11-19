void fn_82E01798(int self,unsigned int param_2)

{
  *(unsigned int *)(self + 0xc) = param_2;
  if (*(unsigned int *)(self + 0x10) == 0) {
    return;
  }
  *(unsigned int *)(*(int *)(self + 0x10) + 0x2c) = param_2;
  return;
}

