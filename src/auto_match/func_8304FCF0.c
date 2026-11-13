void fn_8304FCF0(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x74);
  *(unsigned int *)(param_1 + 0x74) = (param_2 & 1) << 0x1c | uVar1 & 0xefffffff;
  if ((((*(unsigned char *)(param_1 + 0xa9) & 0x80) == 0) || ((param_2 & 0xff) != 0)) ||
     (iVar2 = 1, (uVar1 & 0x8000000) != 0)) {
    iVar2 = 0;
  }
  *(unsigned int *)(param_1 + 0x74) = iVar2 << 0x18 | *(unsigned int *)(param_1 + 0x74) & 0xfeffffff;
  return;
}

