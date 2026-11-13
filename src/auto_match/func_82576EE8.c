extern int fn_825C75A0(unsigned, int);
extern int fn_82631C78(unsigned, int, int, int);
extern unsigned lbl_8320A898;
typedef struct Obj Obj;
typedef struct { void (*f[16])(Obj *, float, int); } VT;
struct Obj { VT *vt; };
typedef struct N1 { Obj *obj; struct N1 *next; } N1;
typedef struct N3 { Obj *a; unsigned b; void (*fn)(Obj *, float); int pad[1]; struct N3 *next; } N3;
typedef struct { char pad[0x1d0]; Obj *obj; char pad2[0x1e4 - 0x1d4]; int next; } N2;
typedef struct S { unsigned f0; char pad[0xc]; N3 *f10; char pad1[0xc]; N1 *f20; char pad2[0x4c]; N2 *f70; char pad3[0xc]; Obj *f80; } S;
void fn_82576EE8(S *self, float dt, int c)
{
  N1 *n; N2 *m; N3 *k;
  for (n = self->f20; n != 0; n = n->next) {
    if (n->obj != 0) n->obj->vt->f[7](n->obj, dt, c);
  }
  fn_82631C78(lbl_8320A898, 0, 0x40, 0x40);
  for (m = self->f70; m != 0; m = *(N2 **)((char *)m + 0x1e4)) {
    m->obj->vt->f[0](m->obj, dt, c);
  }
  if (self->f80 != 0) self->f80->vt->f[8](self->f80, dt, c);
  for (k = self->f10; k != 0; k = k->next) {
    if (k->a != 0 && k->b != 0) k->fn(k->a, dt);
  }
  fn_825C75A0(self->f0, c);
}
