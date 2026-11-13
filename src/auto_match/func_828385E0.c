unsigned char fn_828385E0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if ((iVar1 == 0) || (iVar1 == 2)) {
    return 0x3c;
  }
  if (iVar1 == 3) {
    return 0x40;
  }
  if (iVar1 != 4) {
    return -(iVar1 == 5) & 0x3c;
  }
  return 0x54;
}

