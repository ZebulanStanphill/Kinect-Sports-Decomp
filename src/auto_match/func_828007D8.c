extern int fn_82817B08(void *p);
typedef struct { char pad[0x20]; void *a; void *b; void *c; } S;
typedef struct { int x; S *s; } O;
int fn_828007D8(O *p)
{
  int n = fn_82817B08(p->s->a);
  n += fn_82817B08(p->s->b);
  return n + fn_82817B08(p->s->c);
}
