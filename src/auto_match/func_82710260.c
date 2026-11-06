typedef struct Obj_82710260 {
  int pad0;
  int a;
  unsigned int b;
} Obj_82710260;
extern unsigned char fn_82695468(Obj_82710260 *, int);
extern void fn_826954C0(Obj_82710260 *, const char *, int, int);
extern void fn_82681838(int, unsigned int);
extern char lbl_82005EA4[];

void fn_82710260(Obj_82710260 *o)
{
  unsigned int p;
  if (fn_82695468(o, 8) == 0) {
    fn_826954C0(o, lbl_82005EA4, 0, 0);
  } else {
    p = o->b ? o->b - 0x10 : 0;
    fn_82681838(o->a, p + 0x30);
  }
}
