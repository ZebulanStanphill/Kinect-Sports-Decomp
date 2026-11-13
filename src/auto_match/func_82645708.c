extern int fn_82645110();


unsigned int fn_82645708(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 0x2a9c);
  *(unsigned int *)(param_1 + 0x2ab0) = uVar1;
  fn_82645110();
  return uVar1;
}

