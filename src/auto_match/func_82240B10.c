typedef struct B2_82240B10 { void *vt; int f4; void *self; } B2_82240B10;
typedef struct Obj_82240B10 { void *vt; char pad[0x50]; B2_82240B10 b; } Obj_82240B10;
extern void fn_8289D7E8(void *, unsigned int);
extern char lbl_821B4200[];
extern char lbl_82197248[];
extern char lbl_82197290[];

static __inline void B2_ctor(B2_82240B10 *b, void *self)
{
  b->self = self;
  b->vt = lbl_821B4200;
  b->f4 = 0;
}

Obj_82240B10 *fn_82240B10(Obj_82240B10 *o)
{
  fn_8289D7E8(o, 0x19);
  B2_ctor(&o->b, o);
  o->vt = lbl_82197248;
  o->b.vt = lbl_82197290;
  return o;
}
