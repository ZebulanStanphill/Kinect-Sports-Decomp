extern char lbl_82196582[];
extern int fn_82A9ECB8();
extern void fn_82A9D360(char *, int *, char *);

void fn_82A9F348(char *o, const char *p2, const char *s)
{
  int pr[2];
  pr[0] = fn_82A9ECB8(o, p2);
  pr[1] = fn_82A9ECB8(o, s != 0 ? s : lbl_82196582);
  fn_82A9D360(o + 0x20, pr, o + 0x90);
}
