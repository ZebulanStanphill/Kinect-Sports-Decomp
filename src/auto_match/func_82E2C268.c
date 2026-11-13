typedef struct Obj_82E2C268 Obj_82E2C268;
struct Obj_82E2C268 {
  struct {
    void *slots[7];
    long (*get)(Obj_82E2C268 *self, const void *key, int *out);
  } *vt;
};
extern char lbl_82153498[];

long fn_82E2C268(Obj_82E2C268 *o, int *out)
{
  int v;
  long hr = o->vt->get(o, lbl_82153498, &v);
  *out = (hr >= 0 ? v : 0) == 0;
  return 0;
}
