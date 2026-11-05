typedef struct {
  unsigned v;
} Hdr_func_8268AD58;

extern unsigned fn_826BD078(int *);

unsigned fn_8268AD58(unsigned *p, int n)
{
  Hdr_func_8268AD58 *h = (Hdr_func_8268AD58 *)(*p & 0xfffffffc);
  int it[4];
  unsigned r;
  it[0] = (int)((unsigned *)h + 2);
  if ((unsigned char)(h->v >> 31)) {
    it[0] += n;
    r = fn_826BD078(it);
  } else {
    do {
      r = fn_826BD078(it);
      n--;
      if (r == 0)
        return 0;
    } while (n >= 0);
  }
  return r;
}
