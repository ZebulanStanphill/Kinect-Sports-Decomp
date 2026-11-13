void *memmove(void *, const void *, unsigned int);

int *fn_8265D600(int *first, int *last, int *dest, unsigned char tag)
{
  int count = last - first;
  memmove(dest - count, first, count * sizeof(*first));
  return dest - count;
}
