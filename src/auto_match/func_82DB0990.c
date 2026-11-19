void fn_82DB0990(int self,int param_2)

{
  *(int *)(self + 0x30) = param_2;
  *(int *)(self + 0x34) = *(int *)(self + 0x38) * 0x10 + param_2;
  return;
}

