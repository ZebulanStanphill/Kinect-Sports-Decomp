typedef struct Obj_826C5728 Obj_826C5728;
typedef struct {
  void *slots[23];
  int (*get)(Obj_826C5728 *self);
} Vtbl_826C5728;
struct Obj_826C5728 {
  Vtbl_826C5728 *vt;
  char pad[0x62];
  unsigned char flags;
};
extern void fn_826BC850(void *dst, int v);

int fn_826C5728(Obj_826C5728 *o, void *dst)
{
  if ((o->flags & 0x10) == 0) {
    fn_826BC850(dst, o->vt->get(o));
    return 1;
  }
  return 0;
}
