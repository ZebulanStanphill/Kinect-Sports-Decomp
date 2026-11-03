struct Alloc_82E110B0 { };
extern "C" void fn_82CE7EE0(void *);
extern "C" void *fn_82CEAD98(void *, const char *);
extern "C" void fn_82D00388(void *, Alloc_82E110B0);
extern "C" char lbl_8323AEF8[];

extern "C" int *fn_82E110B0(int *p, int a, int b, int c)
{
  p[1] = a;
  fn_82CE7EE0(p + 2);
  fn_82CE7EE0(p + 0xd);
  p[0x18] = b;
  p[0x19] = c;
  fn_82D00388(p + 0x1a, Alloc_82E110B0());
  *(void **)p = fn_82CEAD98(lbl_8323AEF8, "Type");
  return p;
}
