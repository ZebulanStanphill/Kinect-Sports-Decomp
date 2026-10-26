extern void fn_82522ED8(void *p);

typedef struct { void *p; int a; int b; int c; short d; } S;

void fn_8251E400(S *s)
{
  if (s->p != 0) {
    fn_82522ED8(s->p);
  }
  s->p = 0;
  s->a = 0;
  s->b = 0;
  s->d = 0;
}
