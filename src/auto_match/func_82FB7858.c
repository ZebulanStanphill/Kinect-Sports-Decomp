typedef struct Obj_82FB7858 { char pad[0x25]; unsigned char b25; char pad26[2]; unsigned short s28; } Obj_82FB7858;
extern unsigned char fn_8300CC40(void *, void *);
extern unsigned char fn_8300CD40(void *, void *);
unsigned char fn_82FB7858(int param_1, Obj_82FB7858 *o, void *a, void *b)
{
  unsigned char r;
  if (o->b25 == 0) {
    if (o->s28 != 0) r = fn_8300CD40(a, b) == 0;
    else r = 1;
  } else {
    r = fn_8300CC40(a, b) == 0 && fn_8300CD40(a, b) == 0;
  }
  return r;
}
