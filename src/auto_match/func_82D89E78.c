unsigned int fn_82D89E78(int param_1,int param_2)

{
  if (param_2 < (int)(unsigned int)*(unsigned short *)(param_1 + 0xb0)) {
    return *(unsigned int *)(*(int *)(param_1 + 0xac) + param_2 * 0x30);
  }
  return *(unsigned int *)
          ((param_2 - (unsigned int)*(unsigned short *)(param_1 + 0xb0)) * 4 + *(int *)(param_1 + 0xb4));
}

