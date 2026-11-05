extern void *fn_8265C9E0(unsigned);
extern void *fn_824FB000(void *, void *);

int fn_824FAE58(char *o, void *a)
{
  void *m = fn_8265C9E0(0x1e0);
  void *r;
  r = m ? fn_824FB000(m, a) : 0;
  *(void **)(o + 0x70) = r;
  return 1;
}
