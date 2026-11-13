void fn_82764270(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(int *)(param_2 + 0x48) = iVar1;
  *(unsigned int *)(param_2 + 0x4c) = *(unsigned int *)(param_1 + 0x60);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(unsigned int *)(param_1 + 0x50);
  }
  *(unsigned int *)(param_2 + 4) = uVar2;
  if (*(int *)(param_2 + 0x4c) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(unsigned int *)(param_1 + 0x5c);
  }
  *(unsigned int *)(param_2 + 8) = uVar2;
  return;
}

