extern char *fn_82236140(void *);
extern void *memcpy(void *, const void *, unsigned);

void fn_8223BAD8(void *a, void *dst, int off, unsigned n)
{
  char *base = fn_82236140(a);
  memcpy(dst, base + off, n);
}
