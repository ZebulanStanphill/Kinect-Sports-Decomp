typedef struct Obj_8228C8D0 { char pad[0x160]; void *f160; } Obj_8228C8D0;
extern void fn_8228C590(Obj_8228C8D0 *, float);
extern void fn_82284B08(void *, float);
extern void fn_82279E08(Obj_8228C8D0 *, float);

void fn_8228C8D0(Obj_8228C8D0 *o, float t)
{
  fn_8228C590(o, t);
  if (o->f160 != 0) {
    fn_82284B08(o->f160, t);
  }
  fn_82279E08(o, t);
}
