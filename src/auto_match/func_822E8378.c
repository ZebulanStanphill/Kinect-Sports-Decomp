extern char lbl_821AE068[];
typedef struct { int a; int b; void *c; } Child;
typedef struct { void *vt; int unused; Child *child; } Obj;
typedef struct { int v[4]; } Tmp;
extern void fn_82D81240(Tmp *, void *, Child *);
extern void fn_82CE4118(Child *);

void fn_822E8378(Obj *p)
{
  Tmp s;
  Child *c = p->child;
  p->vt = lbl_821AE068;
  if (c != 0 && c->c != 0) {
    fn_82D81240(&s, c->c, c);
    fn_82CE4118(p->child);
    p->child = 0;
  }
}
