extern void fn_82F6EE10(unsigned int value, char *buffer, unsigned int radix, int negative);

char *fn_82F6EEA0(int value, char *buffer, int radix)
{
  if (radix == 10 && value < 0) fn_82F6EE10(value, buffer, radix, 1);
  else fn_82F6EE10(value, buffer, radix, 0);
  return buffer;
}
