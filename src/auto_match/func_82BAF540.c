extern int fn_82BC0340();


void fn_82BAF540(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(*(int *)(param_1 + 0x18) + 0xc) = param_3;
  *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x20) = param_2;
  fn_82BC0340(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 0x18));
  return;
}
