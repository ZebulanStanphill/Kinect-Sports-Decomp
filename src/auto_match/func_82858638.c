void fn_82858638(int param_1,int param_2)

{
  (**(int (***)())(*(int *)(param_1 + 4) + *(int *)(param_2 + 4) + 0x1d4))
            (*(int *)(param_1 + 4),*(unsigned short *)(param_2 + 0xc),*(unsigned int *)(param_2 + 8));
  *(unsigned int *)((*(unsigned short *)(param_2 + 0xc) + 3) * 4 + param_1) = 0xffff;
  return;
}

