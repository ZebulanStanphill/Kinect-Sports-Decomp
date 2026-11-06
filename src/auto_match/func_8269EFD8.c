extern void fn_826824B0(void *o);

struct VT_8269EFD8;
typedef struct Inner_8269EFD8 {
  struct InnerVT_8269EFD8 *vt;
} Inner_8269EFD8;
typedef struct InnerVT_8269EFD8 {
  int pad[20];
  int (*f50)(Inner_8269EFD8 *self, int a, int b);
} InnerVT_8269EFD8;

typedef struct Obj_8269EFD8 {
  int pad0[2];
  unsigned count;
  int pad1;
  Inner_8269EFD8 inner;
} Obj_8269EFD8;

typedef struct VT_8269EFD8 {
  int pad[57];
  Obj_8269EFD8 *(*fE4)(void *self);
} VT_8269EFD8;
typedef struct Src_8269EFD8 {
  VT_8269EFD8 *vt;
} Src_8269EFD8;

int fn_8269EFD8(char *param_1, int param_2, int param_3)
{
  Src_8269EFD8 *s = (Src_8269EFD8 *)(param_1 - 0x68);
  Obj_8269EFD8 *o;
  int r;
  Inner_8269EFD8 *in;
  o = s->vt->fE4(s);
  if (o != 0) {
    o->count = (o->count + 1) & 0x8fffffff;
    in = &o->inner;
    r = in->vt->f50(in, param_2, param_3);
  } else {
    r = 0;
  }
  if (o != 0) {
    fn_826824B0(o);
  }
  return r;
}
