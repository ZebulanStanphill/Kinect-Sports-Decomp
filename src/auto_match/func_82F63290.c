extern unsigned short fn_82F70490(unsigned short c, int n);

unsigned short *fn_82F63290(unsigned short *first, unsigned short *last, unsigned short *dest)
{
  for (; first < last; ++first, ++dest)
    *dest = fn_82F70490(*first, -1);
  return last;
}
