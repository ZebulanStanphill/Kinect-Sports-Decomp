unsigned char fn_8288B760(int param_1)

{
  unsigned int iVar1;
  
  if ((*(unsigned int *)(param_1 + 0x34) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0x38), iVar1 != 0)) {
    return *(unsigned char *)(iVar1 + 0x26);
  }
  return 0;
}

