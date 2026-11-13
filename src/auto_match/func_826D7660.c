unsigned int fn_826D7660(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(param_2 + 0xc);
  uVar2 = *(unsigned int *)(iVar1 + 0x28) ^ *(unsigned int *)(iVar1 + 0x24) ^ *(unsigned int *)(iVar1 + 0x20) ^
          *(unsigned int *)(iVar1 + 0x1c) ^ *(unsigned int *)(iVar1 + 0x18) ^ *(unsigned int *)(iVar1 + 0x14) ^
          *(unsigned int *)(iVar1 + 0x10) ^ *(unsigned int *)(iVar1 + 0xc) ^ *(unsigned int *)(iVar1 + 8) ^
          *(unsigned int *)(param_2 + 8);
  return uVar2 >> 7 ^ uVar2;
}

