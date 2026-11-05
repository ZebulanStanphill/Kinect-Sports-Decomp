extern unsigned fn_82CEAC20(void *);
extern void fn_82D000A0(char *, unsigned, void *);

void fn_82E094E8(char *a, void *b, unsigned c)
{
  fn_82D000A0(a + 0xc, c != 0 ? c : fn_82CEAC20(b), b);
}
