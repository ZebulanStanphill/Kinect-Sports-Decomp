extern void fn_822315A0(void *);
extern void fn_8232B8B0(void *);
extern void fn_8265CA20(void *);
extern char lbl_821B06D0[];

typedef struct { int a; void *ref; } Ent;
typedef struct {
  void *vt;
  int pad4[0x14];
  Ent *begin;
  Ent *end;
  Ent *cap;
  int pad60[2];
  void *ref;
} Obj_8232C400;

static __forceinline void Release(void **r)
{
  if (*r != 0) fn_822315A0(*r);
}
void fn_8232C400(Obj_8232C400 *self)
{
  Ent *b;
  Ent *p;
  Ent *e;
  *(void **)self = lbl_821B06D0;
  Release(&self->ref);
  b = self->begin;
  if (b != 0) {
    e = self->end;
    for (p = b; p != e; p++) { void *r = p->ref; if (r != 0) fn_822315A0(r); }
    fn_8265CA20(self->begin);
  }
  self->begin = 0;
  self->end = 0;
  self->cap = 0;
  fn_8232B8B0(self);
}
