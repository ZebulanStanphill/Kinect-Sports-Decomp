int fn_82936290(char *dst, unsigned cch, char *src)
{
  int hr = 0;
  if (cch == 0) return 0x80070057;
  while (cch != 0 && *src != 0) {
    *dst = *src;
    dst++; src++; cch--;
  }
  if (cch == 0) { dst--; hr = 0x8007007a; }
  *dst = 0;
  return hr;
}
