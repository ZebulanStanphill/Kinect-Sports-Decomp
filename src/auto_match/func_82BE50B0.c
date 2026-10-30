extern void *memcpy(void *, const void *, unsigned int);
extern void *memset(void *, int, unsigned int);

char *fn_82BE50B0(char *p, int clear)
{
  memcpy(p + 0x3c, p + 0x18, 0x24);
  if (clear != 0) {
    memset(p + 0x18, 0, 0x24);
  }
  return p + 0x3c;
}
