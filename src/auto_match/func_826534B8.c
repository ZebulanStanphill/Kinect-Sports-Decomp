extern int fn_8265C990();


void fn_826534B8(unsigned int param_1)

{
  if (param_1 != 0) {
    fn_826534B8(*(unsigned int *)(param_1 + 0xc));
    *(unsigned int *)(param_1 + 0xc) = 0;
    fn_8265C990(*(unsigned int *)(param_1 + 8),0xffffffffb1800000);
    fn_8265C990(param_1,0x24800000);
  }
  return;
}

