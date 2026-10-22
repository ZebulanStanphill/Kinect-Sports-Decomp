typedef struct Obj Obj;
typedef struct { void (*dtor)(Obj *, int); } Vtbl;
struct Obj { Vtbl *vt; };
typedef struct { void *vt; int f4; char f8[1]; } Sub;
typedef struct {
  int f0;
  char f4[0x1c];
  Obj *f20;
  Obj *f24;
  char pad[0x48 - 0x28];
  Sub sub;
} S;
extern void fn_82359C18(void *);
extern void fn_82230300(void *, int, int);
extern char lbl_821C7FB8[];

void fn_8234AF90(S *s)
{
  Sub *sub;
  Obj *o;

  sub = &s->sub;
  fn_82359C18(sub->f8);
  sub->vt = lbl_821C7FB8;
  o = s->f24;
  if (o != 0) {
    o->vt->dtor(o, 1);
  }
  o = s->f20;
  if (o != 0) {
    o->vt->dtor(o, 1);
  }
  fn_82230300(s->f4, 1, 0);
}
