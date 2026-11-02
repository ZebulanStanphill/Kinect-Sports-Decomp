extern void fn_8270D748(void *p);

void fn_8270E160(char *p, unsigned int n)
{
  unsigned int i;
  for (i = 0; i < n; i++) {
    if (p != 0) {
      fn_8270D748(p);
    }
    p += 0x28;
  }
}
