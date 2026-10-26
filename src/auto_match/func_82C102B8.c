typedef struct S S;
typedef struct { void *f[20]; } Vt;
extern void fn_8265C990(void *p, unsigned int flags);
extern void fn_82A1E658(void *p);
struct S { Vt *vt; int pad[10]; void *a; int pad2[10]; void *b; };
int fn_82C102B8(S *s)
{
  if (s->a) fn_8265C990(s->a, 0x208c8002);
  if (s->b) fn_82A1E658(s->b);
  ((void (*)(S *))s->vt->f[0x13])(s);
  return 0;
}
