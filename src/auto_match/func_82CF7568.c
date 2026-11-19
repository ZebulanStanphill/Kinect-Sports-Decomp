void fn_82CF7568(int self,int *param_2)

{
  *param_2 = *(int *)(self + 8) - *(int *)(self + 4);
  param_2[3] = *(int *)(self + 8) - *(int *)(self + 0xc);
  param_2[1] = *(int *)(self + 0xc) - *(int *)(self + 4);
  param_2[2] = *(int *)(self + 0x14);
  return;
}

