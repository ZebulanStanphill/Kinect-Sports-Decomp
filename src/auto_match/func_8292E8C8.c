typedef struct Obj { char pad0[0x10]; int f10; int f14; int f18; char pad1[0x20]; int a3c; int a40; char pad2[8]; int a4c; char pad3[0x18]; int a68; char pad4[0x14]; char *src; int a84; } Obj;
extern void *memcpy(void *d, const void *s, unsigned int n);
extern void fn_82925600(Obj *o, void *d);
extern int fn_8292E3B0(Obj *o, int a, int b, int c);
extern void fn_82B8FD40(Obj *o, void *d);

void fn_8292E8C8(Obj *o, int a, int b, void *dst)
{
  int x = o->a40 + a;
  int y = o->a4c + b;
  int r = fn_8292E3B0(o, x, y, 1);
  if (r >= 0) {
    memcpy(dst, o->src + ((o->a3c - o->a84) * 16), o->a68 * 16);
    if (o->f18 != 0) {
      fn_82B8FD40(o, dst);
    }
    if (o->f10 != 0) {
      fn_82925600(o, dst);
    }
  }
}
