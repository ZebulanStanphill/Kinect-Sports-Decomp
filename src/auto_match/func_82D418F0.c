extern int fn_82D441E8();


unsigned int fn_82D418F0(int param_1)

{
  unsigned int uVar1;
  
  if (*(int *)(param_1 + 0xd0) < 0) {
    uVar1 = fn_82D441E8();
    *(unsigned int *)(param_1 + 0xd0) = uVar1;
  }
  return *(unsigned int *)(param_1 + 0xd0);
}

