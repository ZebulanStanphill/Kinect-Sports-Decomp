extern int _getptd();


void _SaveUnwindContext(unsigned int pContext)

{
  int ptd;
  
  ptd = _getptd();
  *(unsigned int *)(ptd + 0x90) = pContext;
  return;
}

