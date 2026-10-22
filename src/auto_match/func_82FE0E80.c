typedef struct Alloc Alloc;
typedef struct {
  void *s0;
  void *s4;
  void (*free)(Alloc *a, void *p);
} AllocVt;
struct Alloc {
  AllocVt *vt;
};

typedef struct { int v[3]; } E12;
typedef struct { int v[4]; } E16;

typedef struct Obj Obj;
typedef struct {
  void (*dtor)(Obj *o, int flags);
} ObjVt;

struct Obj {
  ObjVt *vt;
  E16 arr[4];
  char pad44[0x8c - 0x44];
  E12 a8c;
  E12 a98;
  E12 aa4;
  E12 ab0;
  char padbc[0xd0 - 0xbc];
  unsigned char flag;
  char padd1[0xdc - 0xd1];
  void *pdc;
};

extern int fn_82FE0660(Obj *o, Alloc *a);
extern int fn_82FE06D0(Obj *o, Alloc *a);
extern int fn_82FE4220(void *p, Alloc *a);

int fn_82FE0E80(Obj *o, Alloc *a)
{
  int i;

  fn_82FE4220(&o->a8c, a);
  fn_82FE4220(&o->a98, a);
  fn_82FE4220(&o->aa4, a);
  fn_82FE4220(&o->ab0, a);
  if (o->flag != 0 && o->pdc != 0) {
    fn_82FE4220(o->pdc, a);
    a->vt->free(a, o->pdc);
    o->pdc = 0;
  }
  fn_82FE0660(o, a);
  fn_82FE06D0(o, a);
  for (i = 0; i < 4; i++) {
    fn_82FE4220(&o->arr[i], a);
  }
  o->vt->dtor(o, 1);
  a->vt->free(a, o);
  return 1;
}
