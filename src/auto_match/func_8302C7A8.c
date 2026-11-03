typedef struct Obj_8302C7A8 { char pad[0x11c]; unsigned short h; unsigned char f11e; } Obj_8302C7A8;
extern unsigned char fn_8300CC40(int, int);
extern unsigned char fn_8300CD40(int, int);

unsigned char fn_8302C7A8(Obj_8302C7A8 *o, int a, int b)
{
  unsigned char r;
  if ((o->f11e & 0xc) == 0) {
    if (o->h != 0) {
      return fn_8300CD40(a, b) == 0;
    }
    return 1;
  }
  r = fn_8300CC40(a, b) == 0 && fn_8300CD40(a, b) == 0;
  return r;
}
