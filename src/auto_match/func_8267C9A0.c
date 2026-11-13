#define true 1


void fn_8267C9A0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (iVar1 == param_2) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  if (*(int *)(param_2 + 8) == 0) {
    *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_2 + 4);
  }
  else {
    *(unsigned int *)(*(int *)(param_2 + 8) + 4) = *(unsigned int *)(param_2 + 4);
  }
  if (*(int *)(param_2 + 4) != 0) {
    *(unsigned int *)(*(int *)(param_2 + 4) + 8) = *(unsigned int *)(param_2 + 8);
    return;
  }
  *(unsigned int *)(param_1 + 0x24) = *(unsigned int *)(param_2 + 8);
  return;
}

