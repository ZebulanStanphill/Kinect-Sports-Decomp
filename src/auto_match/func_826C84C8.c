typedef struct Sub_826CA988 Sub_826CA988;
typedef struct Obj_826CA988 { char pad0[0xa0]; struct { char pad[0x14]; void *heap; } *f_a0; char pad1[0x1b8 - 0xa4]; int f1b8; } Obj_826CA988;
extern void *fn_8267B890(void *heap, int size, int c);
extern void fn_8267C498(Sub_826CA988 *s);
extern Sub_826CA988 *fn_82758A28(void *mem);
extern void fn_82758498(Sub_826CA988 *s, float a, float b, float c, float d);
extern void fn_8269A5F8(Obj_826CA988 *o);

void fn_826C84C8(Obj_826CA988 *o, float a, float b, float c, float d)
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
  fn_82758498((Sub_826CA988 *)o->f1b8, a * 20.0f, b * 20.0f, c * 20.0f, d * 20.0f);
  fn_8269A5F8(o);
}
