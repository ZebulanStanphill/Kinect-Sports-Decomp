extern int fn_826959C8();


void fn_826C2F38(int param_1)

{
  unsigned char *pbVar1;
  int iVar2;
  
  pbVar1 = *(unsigned char **)(param_1 + 4);
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
  if (4 < *pbVar1) {
    fn_826959C8();
  }
  *pbVar1 = 5;
  iVar2 = *(int *)(iVar2 + 0x148);
  *(int *)(pbVar1 + 4) = iVar2;
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  return;
}

