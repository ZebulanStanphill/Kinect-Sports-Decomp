typedef struct {
  char pad0[0x18];
  int f18;
  char pad1c[0x50];
  int f6c;
  char pad70[0x10];
  unsigned kind;       /* 0x80 */
  int pad84;
  __int64 q88;
  unsigned char b90;
} Obj_828DDB98;
extern void fn_828B03A8(int, __int64);
extern void fn_828B03C0(int);
extern void fn_828B03D8(int, int, unsigned char);

int fn_828DDB98(Obj_828DDB98 *o)
{
  switch (o->kind) {
  case 2:
    fn_828B03C0(o->f6c);
    break;
  case 1:
    fn_828B03D8(o->f6c, o->f18, o->b90);
    break;
  case 0:
    fn_828B03A8(o->f6c, o->q88);
    break;
  default:
    break;
  }
  return 1;
}
