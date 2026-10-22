extern void fn_82FA5190(unsigned int, void *);
extern void fn_82FB76A8(void *);
extern unsigned int lbl_831BC768;
typedef struct Obj { struct Vt *vt; } Obj;
typedef struct Vt { void (*dtor)(Obj *, int); } Vt;
typedef struct S { char pad[0xac]; char sub[0x10]; Obj **begin; Obj **end; } S;
void fn_82FB2BD0(S *p) {
  Obj **it;
  for (it = p->begin; it != p->end; it++) {
    Obj *o = *it;
    if (o) { unsigned int h = lbl_831BC768; o->vt->dtor(o, 0); fn_82FA5190(h, o); }
  }
  p->end = p->begin;
  fn_82FB76A8(p->sub);
}
