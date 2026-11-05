extern void *memcpy(void *, const void *, unsigned);
void fn_826F62D0(char *obj, void *dst)
{
  char buf[0x2c];
  void *p = *(void **)(obj + 0xb04);
  if (p == 0) { *(short *)(buf + 0x28) = 0; memcpy(dst, buf, 0x2c); }
  else memcpy(dst, p, 0x2c);
}
