typedef struct V20_83008748 { int v[5]; } V20_83008748;
typedef struct Obj_83008748 { int m0; V20_83008748 s; int m18; int m1c; unsigned __int64 m20; } Obj_83008748;
extern void fn_83008488(Obj_83008748 *);

void fn_83008748(Obj_83008748 *self, int a, V20_83008748 s, unsigned __int64 q)
{
  self->m20 = q;
  fn_83008488(self);
  self->m1c = a;
  self->m18 = 0;
  self->s = s;
  self->s.v[4] |= 0x1000000;
}
