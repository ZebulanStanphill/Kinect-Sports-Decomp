unsigned __int64 fn_82C12820(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(unsigned int *)(*(int *)(param_2 + 0x14) + 4) = *(unsigned int *)(iVar1 + 0x44);
  *(int *)(iVar1 + 0x44) = param_2;
  return 0;
}

