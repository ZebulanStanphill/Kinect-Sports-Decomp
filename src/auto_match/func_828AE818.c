typedef struct Obj_828AE818 {
  unsigned char pad[0xa4];
  unsigned char pending;
  int value;
} Obj_828AE818;
extern int fn_828ACD28(Obj_828AE818 *o);
extern void fn_828AE3A8(Obj_828AE818 *o, int v);

void fn_828AE818(Obj_828AE818 *o, int v)
{
  switch (fn_828ACD28(o)) {
  case 2:
    fn_828AE3A8(o, v);
    break;
  case 1:
    if (!o->pending) {
      o->value = v;
      o->pending = 1;
    }
    break;
  }
}
