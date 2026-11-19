extern int _getptd();


unsigned int _GetUnwindContext(void)

{
  int ptd;
  
  ptd = _getptd();
  return *(unsigned int *)(ptd + 0x90);
}

