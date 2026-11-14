extern void fn_82FA5CA0(void *, void *);

char *fn_82FA5F18(void *heap, char *p)
{
  char *next = p + (*(unsigned int *)(p + 4) & 0xfffffffc);
  char *c = next + 4;
  if ((*(int *)(next + 8) & 1) != 0) {
    unsigned int sz;
    fn_82FA5CA0(heap, c);
    sz = (*(unsigned int *)(c + 4) & 0xfffffffc) + *(unsigned int *)(p + 4) + 4;
    *(unsigned int *)(p + 4) = sz;
    *(char **)(p + (sz & 0xfffffffc) + 4) = p;
  }
  return p;
}
