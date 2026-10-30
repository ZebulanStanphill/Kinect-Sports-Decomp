typedef struct A_822A0A18 { int f0; int f4; int f8; void *fc; } A_822A0A18;
typedef struct B_822A0A18 { int f0; void *f4; } B_822A0A18;
typedef struct Obj_822A0A18 {
  char pad[0x38];
  void *f38; void *f3c; void *f40; B_822A0A18 *f44;
  char pad2[0xd4 - 0x48];
  A_822A0A18 *fd4;
} Obj_822A0A18;
extern void fn_822315A0(void *);
extern void fn_82292450(void *, int);
extern void fn_8229AA08(void *);
extern void fn_8265CA20(void *);

Obj_822A0A18 *fn_822A0A18(Obj_822A0A18 *o, unsigned flags)
{
  A_822A0A18 *a = o->fd4;
  B_822A0A18 *b;
  if (a != 0) {
    if (a->fc != 0) fn_822315A0(a->fc);
    fn_8265CA20(a);
  }
  b = o->f44;
  if (b != 0) {
    if (b->f4 != 0) fn_822315A0(b->f4);
    fn_8265CA20(b);
  }
  if (o->f40 != 0) fn_82292450(o->f40, 1);
  if (o->f3c != 0) fn_82292450(o->f3c, 1);
  if (o->f38 != 0) fn_82292450(o->f38, 1);
  fn_8229AA08(o);
  if (flags & 1) fn_8265CA20(o);
  return o;
}
