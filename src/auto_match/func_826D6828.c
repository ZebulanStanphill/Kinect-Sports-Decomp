typedef struct Obj_826D6828 Obj_826D6828;
struct Obj_826D6828 {
  struct { int pad[15]; void *(*f3c)(Obj_826D6828 *); } *vt;
  int pad[4];
  unsigned flags;
};
extern void fn_82687DA8(void *, void *, unsigned);

void fn_826D6828(void *param_1, Obj_826D6828 *param_2)
{
  unsigned f = param_2->flags & 0x303;
  fn_82687DA8(param_1, param_2->vt->f3c(param_2), f);
}
