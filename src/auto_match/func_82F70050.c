/* CRT xtow: wide-character unsigned-to-text conversion (the wchar_t twin of fn_82F6EE10, xtoa). */
void fn_82F70050(unsigned int value, unsigned short *out, unsigned int radix, int negative)
{
  unsigned short *p = out;
  unsigned short *start;
  unsigned short swap;
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
      *p++ = (unsigned short)(digit + 'a' - 10);
    else
      *p++ = (unsigned short)(digit + '0');
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
