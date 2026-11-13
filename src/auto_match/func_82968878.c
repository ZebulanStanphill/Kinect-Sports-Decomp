#define true 1


void fn_82968878(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  while( true ) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x18) + param_3 * 4);
    iVar2 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x14));
    if (param_4 != 0) {
      if ((*(unsigned int *)(*(int *)(*(int *)(iVar2 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 2) != 0) {
        if (*(int *)(iVar1 + 0x18) != 0) {
          *(unsigned int *)(*(int *)(iVar1 + 0x14) * 4 + *(int *)(iVar1 + 0x18)) =
               *(unsigned int *)(iVar2 + 0x48);
        }
        *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
        iVar1 = *(int *)(*(int *)(iVar2 + 0x48) * 4 + *(int *)(param_1 + 0x18));
        if (*(int *)(iVar1 + 0x20) != 0) {
          *(int *)(*(int *)(iVar1 + 0x1c) * 4 + *(int *)(iVar1 + 0x20)) = param_3;
        }
        *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
      }
    }
    if (*(int *)(iVar2 + 8) != -1) {
      fn_82968878(param_1,*(int *)(iVar2 + 8),param_3,1);
    }
    param_2 = *(int *)(iVar2 + 0x14);
    if (param_2 == -1) break;
    param_4 = 1;
  }
  return;
}

