extern int fn_8265C990();


void fn_82BD8038(unsigned int param_1)

{
  if (param_1 != 0) {
    if (*(unsigned int *)(param_1 + 0x10) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x10),0x618a0003);
      *(unsigned int *)(param_1 + 0x10) = 0;
    }
    fn_8265C990(param_1,0x618a8005);
  }
  return;
}

