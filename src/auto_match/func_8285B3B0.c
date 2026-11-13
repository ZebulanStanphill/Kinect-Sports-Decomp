void fn_8285B3B0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar3 = iVar1 + param_2;
  iVar2 = iVar1 + param_3;
  *(unsigned char *)(iVar1 + param_3) = *(unsigned char *)(iVar1 + param_2);
  *(unsigned int *)(iVar2 + 4) = *(unsigned int *)(iVar3 + 4);
  *(unsigned int *)(iVar2 + 8) = *(unsigned int *)(iVar3 + 8);
  *(unsigned int *)(iVar2 + 0xc) = *(unsigned int *)(iVar3 + 0xc);
  *(unsigned int *)(iVar2 + 0x10) = *(unsigned int *)(iVar3 + 0x10);
  *(unsigned int *)(iVar2 + 0x14) = *(unsigned int *)(iVar3 + 0x14);
  return;
}

