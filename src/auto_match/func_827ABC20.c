typedef struct {
    int f0;
    int f4;
    unsigned int f8;
} Obj_827ABC20;
extern unsigned char fn_82695468(Obj_827ABC20 *, int);
extern void fn_826954C0(Obj_827ABC20 *, const char *, int, int);
extern void fn_827A7AC8(unsigned int);

void fn_827ABC20(Obj_827ABC20 *o)
{
  unsigned int n;

  if (fn_82695468(o, 0x1f) == 0) {
    fn_826954C0(o, "StyleSheet", 0, 0);
    return;
  }
  n = o->f8 != 0 ? o->f8 - 0x10 : 0;
  if (n != 0) {
    fn_827A7AC8(n + 0x30);
  }
}
