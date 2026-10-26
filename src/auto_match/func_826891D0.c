extern void fn_8267C488(void *p);
extern void fn_8267C498(void *p);
extern int lbl_82005BB4;

typedef struct { int a; int b; void *vt; void *p; } S;

void fn_826891D0(S *s)
{
  if (s->p != 0) {
    fn_8267C498(s->p);
  }
  s->vt = &lbl_82005BB4;
  fn_8267C488(s);
}
