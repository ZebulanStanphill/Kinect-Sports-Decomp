extern int fn_8265C990();


void fn_828FA4E0(int param_1)

{
  unsigned int uVar1;
  
  while (*(unsigned int *)(param_1 + 0x10) != 0) {
    uVar1 = **(unsigned int **)(param_1 + 0x10);
    fn_8265C990(*(unsigned int **)(param_1 + 0x10),0x24810000);
    *(unsigned int *)(param_1 + 0x10) = uVar1;
  }
  fn_8265C990(*(unsigned int *)(param_1 + 4),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 8),0x24810000);
  return;
}

