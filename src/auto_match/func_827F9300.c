typedef struct Obj_827F9300 { int p0; void *f4; char pad[0x14]; unsigned f1c; unsigned f20; char pad2[0x6c]; int f90; } Obj_827F9300;
extern void fn_827F7268(Obj_827F9300 *);
extern void fn_827F77A8(Obj_827F9300 *, int);
extern void fn_827F8190(Obj_827F9300 *, int);
extern void fn_827F87A0(Obj_827F9300 *, int);
extern void fn_827F8B30(Obj_827F9300 *, int);
extern void fn_827F9090(Obj_827F9300 *, int);

void fn_827F9300(Obj_827F9300 *o)
{
  if (o->f1c != 0) {
    if (o->f4 != 0 && o->f90 == 0) {
      fn_827F8190(o, 0);
    } else {
      fn_827F9090(o, 0);
    }
  } else if (o->f20 != 0) {
    fn_827F8B30(o, 0);
  } else if (o->f4 != 0 && o->f90 == 0) {
    fn_827F77A8(o, 0);
  } else {
    fn_827F87A0(o, 0);
  }
  fn_827F7268(o);
}
