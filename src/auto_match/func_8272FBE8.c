struct Obj_8272FBE8;
typedef struct VT_8272FBE8 {
  void *s[16];
  int (*f40)(struct Obj_8272FBE8 *);
} VT_8272FBE8;

typedef struct Obj_8272FBE8 {
  VT_8272FBE8 *vt;
  char pad[0x88];
  struct {
    unsigned a : 14;
    unsigned f : 2;
    unsigned b : 16;
  } w8c;
  char pad90[0xc8 - 0x90];
  unsigned short flags;
} Obj_8272FBE8;

extern void fn_8272F9D8(Obj_8272FBE8 *, int);

void fn_8272FBE8(Obj_8272FBE8 *o, unsigned char v)
{
  o->w8c.f = v;
  o->flags |= 0x4000;
  fn_8272F9D8(o, o->vt->f40(o));
}
