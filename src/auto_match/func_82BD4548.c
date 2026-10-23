typedef struct Obj Obj;
typedef struct Owner { int pad[18]; void *x48; } Owner;
typedef void (*VFn)(Obj *, void *);
extern VFn lbl_83171DCC[];
extern void *fn_8265C940(unsigned int, unsigned int);
extern void fn_82BD4160(Obj *);
struct Obj {
  VFn *vtbl;
  Owner *owner;
  int x08, x0c, x10;
  int cap;
  int x18;
  int x1c;
  int value;
  int type;
  void *buf;
  int x2c, x30, x34, x38;
  int x3c;
  int x40;
};
int fn_82BD4548(int value, Owner *owner, int type, Obj **out)
{
  Obj *o;
  void *buf;
  int hr = 0;
  o = (Obj *)fn_8265C940(0x50, 0x618a8011);
  if (o != 0) {
    o->value = value;
    o->type = type;
    o->x3c = 0;
    o->x1c = 2;
    o->vtbl = lbl_83171DCC;
    o->cap = 10;
    o->x40 = 0;
    if (type == 1) {
      o->owner = owner;
      if (owner->x48 != 0)
        o->vtbl[8](o, owner->x48);
    } else {
      o->owner = owner;
      *(unsigned char *)&o->x3c = 0xff;
    }
    buf = fn_8265C940(o->cap << 3, 0x618a0003);
    o->buf = buf;
    if (buf != 0) goto done;
  }
  hr = 0x8007000e;
  fn_82BD4160(o);
  o = 0;
done:
  *out = o;
  return hr;
}
