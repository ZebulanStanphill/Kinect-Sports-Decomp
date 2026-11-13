extern int fn_82CE4040();


void fn_830B2FC8(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x18) != 0) {
    fn_82CE4040(*(int *)(param_1 + 0x18));
  }
  if (*(unsigned int *)(param_1 + 0x1c) != 0) {
    fn_82CE4040(*(unsigned int *)(param_1 + 0x1c));
  }
  return;
}

