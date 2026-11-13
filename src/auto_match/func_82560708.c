extern int fn_825602B8(unsigned int index);

unsigned char fn_82560708(void)
{
  unsigned int count = 0;
  unsigned int i;
  for (i = 0; i < 2; i++) {
    if (fn_825602B8(i) != 0)
      count++;
  }
  return count > 1;
}
