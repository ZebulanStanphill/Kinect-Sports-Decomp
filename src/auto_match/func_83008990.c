struct Obj_func_83008990;
typedef struct {
  int pad[15];
  void (*f3c)(struct Obj_func_83008990 *, int, float, int, int);
} VT_func_83008990;
typedef struct Obj_func_83008990 {
  VT_func_83008990 *vt;
  int pad[14];
  unsigned char v;
} Obj_func_83008990;

extern unsigned char fn_83007888(Obj_func_83008990 *, int);

void fn_83008990(Obj_func_83008990 *o, float x)
{
  if (fn_83007888(o, 4))
    o->vt->f3c(o, 3, x - (float)o->v, 0, 0);
  o->v = (unsigned char)x;
}
