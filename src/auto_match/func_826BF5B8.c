extern void fn_826824B0(void *p);
extern void fn_82696330(void *p);

typedef struct {
  void *a;
  void *b;
  unsigned char flags;
  char pad[7];
  int sub;
} S;

void fn_826BF5B8(S *s)
{
  fn_82696330(&s->sub);
  if (!(s->flags & 2) && s->a != 0) {
    fn_826824B0(s->a);
  }
  s->a = 0;
  if (!(s->flags & 1) && s->b != 0) {
    fn_826824B0(s->b);
  }
  s->b = 0;
}
