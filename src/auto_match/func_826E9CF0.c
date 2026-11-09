typedef struct Obj_826E9CF0 Obj_826E9CF0;
typedef struct {
  void *slots[14];
  int (*f38)(Obj_826E9CF0 *self, __int64 v);
} Vtbl_826E9CF0;
struct Obj_826E9CF0 { Vtbl_826E9CF0 *vt; };

__int64 fn_826E9CF0(Obj_826E9CF0 *self, int v)
{
  return self->vt->f38(self, v);
}
