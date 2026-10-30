typedef struct S_822D6260 { char pad[0x28]; int f28; } S_822D6260;
extern void fn_8224F2B8(char *, char *, char *);
extern void fn_822CABC8(char *);
extern void fn_82897600(char *, void *, int);
extern int fn_82897B18(char *);
extern void fn_82898220(void *, char *, char *, int);

void fn_822D6260(char *p)
{
  char *v;
  S_822D6260 *s;
  fn_822CABC8(p);
  v = *(char **)(p + 0x10);
  s = (S_822D6260 *)(p + 0x1ec);
  fn_82897600(p, s, fn_82897B18(v + 0x20c));
  s->f28 = *(int *)(p + 0xc);
  fn_82898220(s, p, v + 0x20c, *(int *)(p + 4));
  fn_8224F2B8(p + 0x240, p, v + 0x264);
  fn_8224F2B8(p + 0x294, p, v + 0x2bc);
  fn_8224F2B8(p + 0x2e8, p, v + 0x314);
}
