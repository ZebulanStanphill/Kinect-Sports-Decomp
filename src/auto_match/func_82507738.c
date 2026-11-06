extern int fn_825200A8(unsigned int, int);

typedef struct Node_82507738 Node_82507738;
typedef struct Obj_82507738 Obj_82507738;
typedef struct Vt_82507738 {
  void *f[8];
  unsigned int (*f20)(Obj_82507738 *);
} Vt_82507738;
typedef struct Arr_82507738 { char *ptr; unsigned int count; } Arr_82507738;
struct Obj_82507738 {
  Vt_82507738 *vt;
  char pad[0x94];
  Arr_82507738 arr;
};
struct Node_82507738 {
  Obj_82507738 *obj;
  int pad[8];
  unsigned int flags;
  char rest[0x1a0 - 0x28];
};

void fn_82507738(int a, Node_82507738 *n, void (*cb)(Node_82507738 *, int), int b)
{
  Node_82507738 *self = n;
  unsigned int k;
  int r;
  k = self->obj->vt->f20(self->obj);
  r = fn_825200A8(k, a);
  if (r != 0) {
    cb(self, b);
  }
  if ((self->flags & 0x40000000) != 0) {
    Obj_82507738 *o = self->obj;
    Arr_82507738 *ar = &o->arr;
    unsigned int i = 0;
    if (ar->count > 0) {
      int off = 0;
      do {
        fn_82507738(a, (Node_82507738 *)(ar->ptr + off), cb, b);
        i++;
        off += 0x1a0;
      } while (i < ar->count);
    }
  }
}
