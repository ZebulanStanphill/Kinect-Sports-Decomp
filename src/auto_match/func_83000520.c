unsigned short fn_83000520(int param_1,unsigned int *param_2)

{
  unsigned char bVar1;
  int iVar2;
  
  bVar1 = *(unsigned char *)(param_1 + 0x3d);
  while (((bVar1 & 0x40) == 0 && (iVar2 = *(int *)(param_1 + 0x10), iVar2 != 0))) {
    bVar1 = *(unsigned char *)(iVar2 + 0x3d);
    param_1 = iVar2;
  }
  *param_2 = (unsigned int)*(unsigned short *)(param_1 + 0x6c);
  return *(unsigned short *)(param_1 + 0x6e);
}

