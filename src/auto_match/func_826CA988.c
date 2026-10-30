typedef struct Sub_826CA988 Sub_826CA988;
typedef struct Obj_826CA988 { char pad0[0xa0]; struct { char pad[0x14]; void *heap; } *f_a0; char pad1[0x1b8 - 0xa4]; int f1b8; } Obj_826CA988;
extern void *fn_8267B890(void *heap, int size, int c);
extern void fn_8267C498(Sub_826CA988 *s);
extern void fn_826C8590(Obj_826CA988 *o, int a);
extern void fn_827583E8(Sub_826CA988 *s);
extern unsigned char fn_827586A8(Sub_826CA988 *s);
extern Sub_826CA988 *fn_82758A28(void *mem);

void fn_826CA988(Obj_826CA988 *o)
{
  void *mem;
  Sub_826CA988 *s;
  if (o->f1b8 == 0) {
    mem = fn_8267B890(o->f_a0->heap, 0x88, 0);
    if (mem != 0) {
      s = fn_82758A28(mem);
    } else {
      s = 0;
    }
    if ((Sub_826CA988 *)o->f1b8 != 0) fn_8267C498((Sub_826CA988 *)o->f1b8);
    o->f1b8 = (int)s;
  }
  if (fn_827586A8((Sub_826CA988 *)o->f1b8) == 0) {
    fn_826C8590(o, 0);
    fn_827583E8((Sub_826CA988 *)o->f1b8);
  }
}
