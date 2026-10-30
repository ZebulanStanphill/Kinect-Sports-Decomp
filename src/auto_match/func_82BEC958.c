extern void fn_82F64020(char *, unsigned, const char *, int, int);
extern unsigned fn_82F6D460(char *, unsigned);
extern int lbl_8317546C;
static int Fits(char *b) { return b == 0 || fn_82F6D460(b, 0x104) < 0x104; }
static int Fits2(char *b) { if (b == 0) return 1; return fn_82F6D460(b, 0x104) < 0x104; }
static int Fits3(char *b) { if (b != 0 && fn_82F6D460(b, 0x104) >= 0x104) return 0; return 1; }
int fn_82BEC958(char *buf, int n)
{
  fn_82F64020(buf, 0x104, "%u%s", n, lbl_8317546C);
  if (buf == 0) goto ok;
  if (fn_82F6D460(buf, 0x104) < 0x104) goto ok;
  return 0;
ok:
  return 1;
}