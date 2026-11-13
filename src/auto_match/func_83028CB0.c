double fn_83028CB0(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = *(unsigned int *)(param_1 + 0x88);
      (iVar1 != *(unsigned int *)(param_1 + 0x8c) && (*(unsigned int *)(iVar1 + 4) != param_2)); iVar1 = iVar1 + 8) {
  }
  return (double)*(float *)(*(unsigned int *)(iVar1 + 4) + 0x2c);
}

