int fn_82DAC068(int param_1,unsigned int param_2)

{
  unsigned char bVar1;
  int iVar2;
  
  bVar1 = *(unsigned char *)(*(int *)(param_1 + 0x20) + (param_2 & 0xffff));
  if (bVar1 == 0xff) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  return (unsigned int)*(unsigned char *)(iVar2 + 10) * (int)(short)(unsigned short)bVar1 +
         (unsigned int)*(unsigned short *)(iVar2 + 6) * 0x20 + iVar2 + 0x30;
}

