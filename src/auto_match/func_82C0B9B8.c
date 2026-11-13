extern void *memset(void *, int, unsigned int);
extern void fn_82C12D08(void *);

void fn_82C0B9B8(char *p)
{
  memset(p + 0x7c, 0, 0x50);
  memset(p + 0x11c, 0, 0x50);
  memset(p + 0x16c, 0, 0x50);
  memset(p + 0xcc, 0, 0x50);
  *(int *)(p + 0x1bc) = 0;
  *(int *)(p + 0x1c0) = 0;
  fn_82C12D08(p);
}
