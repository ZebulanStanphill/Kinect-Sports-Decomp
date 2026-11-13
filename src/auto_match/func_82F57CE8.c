extern int fn_82F57950();


void fn_82F57CE8(unsigned int param_1,int param_2)

{
  unsigned int uVar1;
  
  if (param_1 != param_2) {
    fn_82F57950();
    uVar1 = *(unsigned int *)(param_1 + 4);
    *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_2 + 4);
    *(unsigned int *)(param_2 + 4) = uVar1;
    uVar1 = *(unsigned int *)(param_1 + 8);
    *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_2 + 8);
    *(unsigned int *)(param_2 + 8) = uVar1;
  }
  return;
}

