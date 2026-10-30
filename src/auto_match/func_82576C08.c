extern int lbl_8320A898;
extern unsigned lbl_83282270[];
extern void fn_8263CBB0(int a, int b, unsigned c, int d);

typedef struct A_82576C08 { char pad[0xb9e4]; int *tab; } A_82576C08;
typedef struct B_82576C08 { char pad[0x8ac]; A_82576C08 *f8ac; } B_82576C08;
typedef struct CN_82576C08 { void *arg; void (*cb)(void *, float); int f8, fc; struct CN_82576C08 *next; } CN_82576C08;
struct VT_82576C08;
typedef struct Iface_82576C08 { const struct VT_82576C08 *vt; } Iface_82576C08;
typedef struct VT_82576C08 { int pad[6]; void (*f18)(Iface_82576C08 *, float, int); void (*f1c)(Iface_82576C08 *, float, int); } VT_82576C08;
typedef struct VN_82576C08 { Iface_82576C08 *o; struct VN_82576C08 *next; } VN_82576C08;
typedef struct Obj_82576C08 {
  B_82576C08 *f0; char pad[0xc]; CN_82576C08 *f10; int pad14; VN_82576C08 *f18;
  char pad2[0x80 - 0x1c]; Iface_82576C08 *f80;
} Obj_82576C08;

void fn_82576C08(Obj_82576C08 *o, float dt, int idx)
{
  CN_82576C08 *c;
  VN_82576C08 *v;
  for (c = o->f10; c != 0; c = c->next) {
    if (c->arg != 0 && c->cb != 0) c->cb(c->arg, dt);
  }
  if (lbl_83282270[o->f0->f8ac->tab[idx]] != 0) {
    fn_8263CBB0(lbl_8320A898, 0x10, lbl_83282270[o->f0->f8ac->tab[idx]], 0x8000);
  }
  for (v = o->f18; v != 0; v = v->next) {
    if (v->o != 0) v->o->vt->f1c(v->o, dt, idx);
  }
  if (o->f80 != 0) o->f80->vt->f18(o->f80, dt, idx);
  fn_8263CBB0(lbl_8320A898, 0x10, 0, 0x8000);
}
