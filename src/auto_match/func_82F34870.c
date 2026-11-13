typedef struct VT_82F34870 { int pad[2]; void (*f8)(void *); } VT_82F34870;
typedef struct Obj_82F34870 { VT_82F34870 *vt; } Obj_82F34870;
typedef struct Hold_82F34870 { void *vt; Obj_82F34870 *f4; unsigned count; Obj_82F34870 **arr; } Hold_82F34870;
extern void fn_82E4FE40(void *);
extern int lbl_82162AA8;

void fn_82F34870(Hold_82F34870 *o)
{
  unsigned i;
  o->vt = &lbl_82162AA8;
  if (o->f4 != 0) {
    o->f4->vt->f8(o->f4);
    o->f4 = 0;
  }
  if (o->arr != 0 && o->count != 0) {
    for (i = 0; i < o->count; i++) {
      if (o->arr[i] != 0) {
        o->arr[i]->vt->f8(o->arr[i]);
        o->arr[i] = 0;
      }
    }
  }
  if (o->arr != 0) {
    fn_82E4FE40(o->arr);
  }
  o->arr = 0;
}
