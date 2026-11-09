extern void *memset(void *, int, unsigned int);
extern void fn_82C12D08(void *);

void fn_82C09778(char *p)
{
  memset(p + 0xcc, 0, 0x50);
  memset(p + 0x7c, 0, 0x50);
  *(int *)(p + 0x11c) = 0;
  fn_82C12D08(p);
}
