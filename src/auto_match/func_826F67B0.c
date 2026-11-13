void fn_826F67B0(unsigned char *param_1,int param_2)

{
  unsigned char bVar1;
  int iVar2;
  
  iVar2 = 1;
  if ((*(unsigned char *)(param_2 + 4) & 0x80) != 0) {
    iVar2 = 5;
  }
  bVar1 = *(unsigned char *)(param_2 + 4 + iVar2);
  *param_1 = (((bVar1 & 0xfe) << 1 | bVar1 & 3) & 5) << 5 | *(unsigned char *)(param_2 + 4) & 0x5f;
  return;
}

