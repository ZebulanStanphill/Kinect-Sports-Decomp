extern int fn_82826AB0(void *, int, int *, int *);
extern int fn_82835C00(char *, void *, int);
extern int fn_82F6D000(void *, const char *, ...);

typedef struct { int a; int b; } E8;
typedef struct {
  void **f0;
  int f4;
  unsigned int f8;
  E8 *fc;
} Sect_82831618;

void fn_82831618(Sect_82831618 *p, void *out)
{
  int a;
  int b;
  unsigned int i;

  fn_82F6D000(out, "\nSection %d\n\n", p->f4);
  fn_82826AB0(*p->f0, p->f4, &a, &b);
  for (i = 0; i < p->f8; i++) {
    fn_82835C00((char *)&p->fc[i], out, a);
  }
}
