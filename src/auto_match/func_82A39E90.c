typedef struct Obj { char pad[0x1c]; unsigned int count; } Obj;
extern void fn_82A39CE8(Obj *o);
extern void fn_82A3C038(Obj *o);

void fn_82A39E90(Obj *o)
{
  while (o->count > 0)
    fn_82A39CE8(o);
  fn_82A3C038(o);
}
