extern void fn_82A95CE8(void *);
extern void fn_82A95FD8(void *, void *);
extern void fn_82A96270(void *);

void fn_82A963C8(char *p, void *a)
{
  fn_82A95CE8(p + 8);
  fn_82A95FD8(p, a);
  fn_82A96270(a);
}
