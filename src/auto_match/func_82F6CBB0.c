void _initterm(unsigned int *pfbegin,unsigned int *pfend)

{
  for (; pfbegin < pfend; pfbegin = pfbegin + 1) {
    if ((int (**)())*pfbegin != (int (**)())0x0) {
      ((int (*)())*pfbegin)();
    }
  }
  return;
}

