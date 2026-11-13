typedef struct { char pad[0xc]; int f0c; char pad2[0x2c - 0x10]; unsigned mode; char pad3[0x48 - 0x30]; int f48; int f4c; char f50[1]; } In;
typedef struct { int p0; In *in; } Obj;
extern void fn_8229F688(int, void *, int);
extern void fn_8229FAB8(int, int, int);
extern void fn_8229FF28(int, int);
void fn_822A0F98(Obj *self)
{
  In *in = self->in;
  fn_8229F688(in->f0c, in->f50, 0);
  switch (in->mode) {
  case 1:
  case 2:
    fn_8229FF28(in->f0c, in->f48);
    break;
  case 0:
    fn_8229FAB8(in->f0c, in->f48, in->f4c);
    break;
  }
}
