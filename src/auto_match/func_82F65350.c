extern int _getptd();


unsigned int fn_82F65350(void)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = _getptd();
  uVar2 = *(int *)(iVar1 + 0x14) * 0x343fd + 0x269ec3;
  *(unsigned int *)(iVar1 + 0x14) = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}

