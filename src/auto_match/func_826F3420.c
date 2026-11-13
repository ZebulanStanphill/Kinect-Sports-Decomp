int fn_826F3420(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_2 & 0x80) != 0) {
    return iVar2;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  if (iVar1 == 0) {
    return iVar2;
  }
  if (*(char *)(iVar1 + 0xc) != '\0') {
    return iVar2;
  }
  return iVar1;
}

