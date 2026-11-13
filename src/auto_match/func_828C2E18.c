extern unsigned int *auStack_20;
extern int fn_828A2348();
extern int fn_828A60D8();


int fn_828C2E18(unsigned int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned char auStack_20 [8];
  
  fn_828A2348(param_1,auStack_20,auStack_20);
  if (param_1 != param_2) {
    fn_828A60D8(param_1);
    uVar1 = *(unsigned int *)(param_1 + 4);
    *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_2 + 4);
    *(unsigned int *)(param_2 + 4) = uVar1;
    uVar1 = *(unsigned int *)(param_1 + 8);
    *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_2 + 8);
    *(unsigned int *)(param_2 + 8) = uVar1;
  }
  return param_1;
}

