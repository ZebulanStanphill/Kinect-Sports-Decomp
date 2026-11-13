extern int fn_826FD8A0();


unsigned int fn_82700480(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xac4) + 1;
  *(int *)(param_1 + 0xac4) = iVar1;
  *(int *)(param_2 + 0x30) = iVar1;
  fn_826FD8A0(param_1 + 0xab8,&param_2);
  return *(unsigned int *)(param_1 + 0xac4);
}

