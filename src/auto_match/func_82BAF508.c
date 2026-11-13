extern int fn_82BC0340();


void fn_82BAF508(int param_1,int param_2,int param_3)

{
  *(unsigned int *)(*(int *)(param_1 + 0x18) + 0xc) =
       *(unsigned int *)((int)((param_3 + 0xeU & 0xffffffff) << 2) + param_2);
  *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x20) =
       *(unsigned int *)((int)((param_3 + 0x14U & 0xffffffff) << 2) + param_2);
  fn_82BC0340(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 0x18));
  return;
}

