struct Obj_func_830088F8;
typedef struct {
  int pad[15];
  void (*f3c)(struct Obj_func_830088F8 *, int, float, int, int);
} VT_func_830088F8;
typedef struct Obj_func_830088F8 {
  VT_func_830088F8 *vt;
  int pad[11];
  short v;
} Obj_func_830088F8;

extern unsigned char fn_83007888(Obj_func_830088F8 *, int);

void fn_830088F8(Obj_func_830088F8 *o, float x)
{
  if (fn_83007888(o, 2))
    o->vt->f3c(o, 2, x - (float)o->v, 0, 0);
  o->v = (short)x;
}
