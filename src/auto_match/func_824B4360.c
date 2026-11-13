typedef struct Obj_824B4360 Obj_824B4360;
typedef struct {
  void *slots[10];
  float (*getValue)(Obj_824B4360 *self);
} Vtbl_824B4360;
struct Obj_824B4360 {
  Vtbl_824B4360 *vt;
  char pad4[0x2c];
  float value;
  char pad34[0xc];
  int countdown;
  int done;
};

void fn_824B4360(Obj_824B4360 *o)
{
  o->value = o->vt->getValue(o);
  if (o->countdown > 0) {
    if (--o->countdown == 0) {
      o->done = 1;
    }
  }
}
