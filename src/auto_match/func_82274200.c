typedef struct Obj_82274200 { char pad[0x160]; void *child; } Obj_82274200;
extern void fn_82284B08(void *);
extern void fn_82279E08(Obj_82274200 *, float);

void fn_82274200(Obj_82274200 *self, float value)
{
  if (self->child != 0) {
    fn_82284B08(self->child);
  }
  fn_82279E08(self, value);
}
