typedef struct W5_8251DC90 { int v[5]; } W5_8251DC90;
typedef struct Obj_8251DC90 {
  char pad[0x898];
  W5_8251DC90 w;
  void **p8ac;
} Obj_8251DC90;
extern void fn_825269D0(int, Obj_8251DC90 *);

void fn_8251DC90(Obj_8251DC90 *o, W5_8251DC90 *src)
{
  void **p = o->p8ac;
  if (p != 0) {
    ((void (*)(void *, int))**(int **)p)(p, 1);
  }
  o->p8ac = 0;
  o->w = *src;
  fn_825269D0(0x54, o);
}
