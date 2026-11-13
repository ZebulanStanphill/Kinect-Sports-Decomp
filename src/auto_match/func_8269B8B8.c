extern int fn_8269AE08();


void fn_8269B8B8(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_8269AE08();
  if (*(int *)(iVar1 + 0x70) != 0) {
    *(unsigned int *)(*(int *)(iVar1 + 0x70) + 0x74) = *(unsigned int *)(iVar1 + 0x74);
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    if (*(int *)(param_2 + 0xaf4) == iVar1) {
      *(unsigned int *)(param_2 + 0xaf4) = *(unsigned int *)(iVar1 + 0x70);
    }
  }
  else {
    *(unsigned int *)(*(int *)(iVar1 + 0x74) + 0x70) = *(unsigned int *)(iVar1 + 0x70);
  }
  *(unsigned int *)(iVar1 + 0x74) = 0;
  *(unsigned int *)(iVar1 + 0x70) = 0;
  *(unsigned int *)(param_2 + 0xb00) = *(unsigned int *)(param_2 + 0xb00) | 0x400;
  return;
}

