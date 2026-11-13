typedef struct Obj_82696480 { char pad[0x80]; int handle; } Obj_82696480;
extern int fn_8269F500(Obj_82696480 *o);
extern void fn_82696408(void *self, int handle);
static __forceinline int GetHandle_82696480(Obj_82696480 *o)
{
  if (o->handle == 0)
    return fn_8269F500(o);
  return o->handle;
}
void fn_82696480(void *self, Obj_82696480 *o)
{
  fn_82696408(self, o ? GetHandle_82696480(o) : 0);
}
