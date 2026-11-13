void *memmove(void *, const void *, unsigned int);

int *fn_82669D58(int *first, int *last, int *dest, unsigned char tag)
{
  int count = last - first;
  memmove(dest, first, count * sizeof(*first));
  return dest + count;
}
