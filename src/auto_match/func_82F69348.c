extern int _getptd();


unsigned int _GetUnwindContext(void)

{
  int iVar1;
  
  iVar1 = _getptd();
  return *(unsigned int *)(iVar1 + 0x90);
}

