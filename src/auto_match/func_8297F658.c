extern void *fn_82930318(int);
extern void *fn_82931328(void *, void *, void *);

void fn_8297F658(int *self, void *a, void *b)
{
  void *mem = fn_82930318(0x28);
  int *o;
  if (mem != 0) {
    o = (int *)fn_82931328(mem, a, b);
  } else {
    o = 0;
  }
  if (o != 0) {
    o[6] = self[27];
    self[27] = self[27] + 1;
  }
}
