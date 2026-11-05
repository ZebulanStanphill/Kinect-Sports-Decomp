struct Obj_func_827D84F8;
typedef struct {
  int pad;
  unsigned (*f4)(struct Obj_func_827D84F8 *);
} VT_func_827D84F8;
typedef struct Obj_func_827D84F8 {
  VT_func_827D84F8 *vt;
} Obj_func_827D84F8;

typedef struct {
  unsigned a;
  Obj_func_827D84F8 *b;
} Pair_func_827D84F8;

extern void fn_827D93B0(void *, void *, Pair_func_827D84F8 *);

void fn_827D84F8(char *self, Obj_func_827D84F8 *o)
{
  Pair_func_827D84F8 p;
  int buf[3];
  p.a = o->vt->f4(o);
  p.b = o;
  fn_827D93B0(buf, self + 0x2d0, &p);
}
