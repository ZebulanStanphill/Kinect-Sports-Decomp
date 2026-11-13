extern int fn_8265C990();


void fn_82F2CBD0(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x80) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x80),0x248c8000);
    *(unsigned int *)(param_1 + 0x80) = 0;
    *(unsigned int *)(param_1 + 0x40) = 1;
    return;
  }
  *(unsigned int *)(param_1 + 0x40) = 1;
  return;
}

