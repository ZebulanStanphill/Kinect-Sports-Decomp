extern void fn_8265CAA0(void *p);
extern void *fn_82E1F690(int a);

typedef struct {
  int x0;
  int x4;
  void *res;
} Obj;

void fn_82E205A0(Obj *o, int a)
{
  if (o->res != 0) {
    fn_8265CAA0(o->res);
    o->res = 0;
  }
  o->res = fn_82E1F690(a);
}
