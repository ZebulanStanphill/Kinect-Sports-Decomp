typedef struct Obj_827A0BD0 { char pad[0x13f]; unsigned char flags; } Obj_827A0BD0;
extern void fn_8279FB38(Obj_827A0BD0 *);

int fn_827A0BD0(Obj_827A0BD0 *self)
{
  if ((self->flags & 3) != 0) {
    fn_8279FB38(self);
    self->flags &= ~3;
    return 1;
  }
  return 0;
}
