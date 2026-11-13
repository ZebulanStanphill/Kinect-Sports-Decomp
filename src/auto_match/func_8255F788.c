typedef struct {
  char pad[0x110];
  void *x110;
  int x114;
} Obj_8255F788;
extern void fn_8255F7E8(Obj_8255F788 *o);
extern void fn_827F3580(Obj_8255F788 *o, float a, float b, int c);

void fn_8255F788(Obj_8255F788 *o, float t)
{
  fn_8255F7E8(o);
  fn_827F3580(o, t, 0.0f, 0x12);
  o->x114 = 0;
  o->x110 = 0;
}
