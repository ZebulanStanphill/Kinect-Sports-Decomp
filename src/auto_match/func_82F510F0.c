extern int fn_82F4DB48();


void fn_82F510F0(int param_1,int param_2)

{
  int iVar1;
  unsigned int iVar2;
  
  *(int *)(*(int *)(param_1 + 4) + 0x7d8) = (int)param_2;
  if (param_2 < 6) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
    iVar2 = fn_82F4DB48(param_2);
    if ((*(int *)(iVar1 + 0x28) != iVar2) && (iVar1 != iVar2)) {
      *(int *)(iVar1 + 0x28) = iVar2;
      *(unsigned char *)(iVar1 + 0x34) = 1;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
    if (*(unsigned int *)(iVar1 + 0x28) != 0) {
      *(unsigned int *)(iVar1 + 0x28) = 0;
      *(unsigned char *)(iVar1 + 0x34) = 1;
    }
  }
  return;
}

