typedef struct Obj_82EF4798 Obj_82EF4798;
typedef struct {
  void *slot[14];
  int (*method)(Obj_82EF4798 *self, void *a, void *b);
} ObjVtbl_82EF4798;
struct Obj_82EF4798 { ObjVtbl_82EF4798 *vt; };

int fn_82EF4798(Obj_82EF4798 *self, void *a, void *b)
{
  if (a == 0) {
    return 0x80004003;
  }
  if (b == 0) {
    return 0x80004003;
  }
  return self->vt->method(self, a, b);
}
