extern void *fn_82BE56B0(int);
extern void *fn_82BFB468(void *, const char *);
typedef struct Obj_82BF7E20 { int a, b, c; const char *name; } Obj_82BF7E20;
static const char *nm(Obj_82BF7E20 *p) { return p->name ? p->name : "(none)"; }

void *fn_82BF7E20(Obj_82BF7E20 *p)
{
  void *r, *m;
  const char *s = nm(p);
  if (s != 0 && *s != 0) {
    m = fn_82BE56B0(0x10);
    r = m ? fn_82BFB468(m, nm(p)) : 0;
    if (r != 0) return r;
  }
  return 0;
}
