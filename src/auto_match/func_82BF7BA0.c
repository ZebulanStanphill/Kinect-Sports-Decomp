extern void *fn_82BE56B0(int);
extern void *fn_82BFB1C0(void *, const char *);
typedef struct Obj_82BF7BA0 { int a, b, c; const char *name; } Obj_82BF7BA0;
static const char *nm(Obj_82BF7BA0 *p) { return p->name ? p->name : "(none)"; }

void *fn_82BF7BA0(Obj_82BF7BA0 *p)
{
  void *r, *m;
  const char *s = nm(p);
  if (s != 0 && *s != 0) {
    m = fn_82BE56B0(0x14);
    r = m ? fn_82BFB1C0(m, nm(p)) : 0;
    if (r != 0) return r;
  }
  return 0;
}
