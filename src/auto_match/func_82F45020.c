extern int fn_8265C990();


void fn_82F45020(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x20) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x20),0x248c8000);
    *(unsigned int *)(param_1 + 0x20) = 0;
  }
  return;
}

