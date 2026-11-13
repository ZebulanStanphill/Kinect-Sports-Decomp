extern int _getptd();


void fn_82F65320(unsigned int param_1)

{
  int iVar1;
  
  iVar1 = _getptd();
  *(unsigned int *)(iVar1 + 0x14) = param_1;
  return;
}

