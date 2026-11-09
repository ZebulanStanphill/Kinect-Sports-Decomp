typedef struct Obj_8267A420 Obj_8267A420;
typedef struct {
  void *slots[14];
  int (*f38)(Obj_8267A420 *self, __int64 v);
} Vtbl_8267A420;
struct Obj_8267A420 { Vtbl_8267A420 *vt; };

__int64 fn_8267A420(Obj_8267A420 *self, int v)
{
  return self->vt->f38(self, v);
}
