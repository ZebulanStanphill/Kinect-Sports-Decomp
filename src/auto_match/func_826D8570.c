extern unsigned int fn_826D6E30(void *p, void *dst, unsigned int n);

unsigned int fn_826D8570(char *self, void *dst, unsigned int n)
{
  return fn_826D6E30(*(void **)(*(char **)(*(char **)(self + 0x1c) + 0xc) + 0x20), dst, n);
}
