extern void *memset(void *, int, unsigned int);
extern void fn_82C12D90(void *);
extern void fn_82C12D08(void *);
extern char lbl_820ECD28[];

char *fn_82C09818(char *p)
{
  fn_82C12D90(p);
  *(char **)p = lbl_820ECD28;
  memset(p + 0xcc, 0, 0x50);
  memset(p + 0x7c, 0, 0x50);
  *(int *)(p + 0x11c) = 0;
  fn_82C12D08(p);
  return p;
}
