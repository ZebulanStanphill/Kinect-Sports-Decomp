typedef struct { char pad[0x30]; int refs; } Obj;
extern void fn_827E4580(Obj *o);

int fn_827E7C78(Obj *o)
{
  if (--o->refs <= 0) {
    fn_827E4580(o);
    return 0;
  }
  return 0x3e5;
}
