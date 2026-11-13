extern unsigned int *auStack_20;
extern int fn_8224EE50();
extern int fn_8224EEE0();


int fn_82894B88(unsigned int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned char auStack_20 [8];
  
  fn_8224EE50(param_1,auStack_20,auStack_20);
  if (param_1 != param_2) {
    fn_8224EEE0(param_1);
    uVar1 = *(unsigned int *)(param_1 + 4);
    *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_2 + 4);
    *(unsigned int *)(param_2 + 4) = uVar1;
    uVar1 = *(unsigned int *)(param_1 + 8);
    *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_2 + 8);
    *(unsigned int *)(param_2 + 8) = uVar1;
  }
  return param_1;
}

