void fn_82F6EE10(unsigned int value, char *out, unsigned int radix, int negative)
{
  char *p = out;
  char *start;
  char swap;
  unsigned int digit;

  if (negative) {
    *p++ = '-';
    value = (unsigned int)-(int)value;
  }
  start = p;
  do {
    digit = value % radix;
    value /= radix;
    if (digit > 9)
      *p++ = (char)(digit + 'a' - 10);
    else
      *p++ = (char)(digit + '0');
  } while (value > 0);
  *p-- = 0;
  do {
    swap = *p;
    *p = *start;
    *start = swap;
    p--;
    start++;
  } while (start < p);
}
