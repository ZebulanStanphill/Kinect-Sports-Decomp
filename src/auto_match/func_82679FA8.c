extern void *fn_826772B0(void *p);
extern void *fn_8267B890(int a, int b, int c);
extern int lbl_831E7E64;

void *fn_82679FA8(void)
{
  void *p = fn_8267B890(lbl_831E7E64, 0x2308, 0);
  return p ? fn_826772B0(p) : 0;
}
