extern int _getptd();


void _SaveUnwindContext(unsigned int param_1)

{
  int iVar1;
  
  iVar1 = _getptd();
  *(unsigned int *)(iVar1 + 0x90) = param_1;
  return;
}

