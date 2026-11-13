extern int fn_82FFE0F0();


unsigned char fn_83015838(int param_1)

{
  unsigned int iVar1;
  
  if ((*(char *)(param_1 + 0x94) == '\0') && (iVar1 = fn_82FFE0F0(param_1 + 4), iVar1 != 0)) {
    return *(unsigned char *)(iVar1 + 0x20);
  }
  return 1;
}

