extern void fn_82814F70(void *p);

typedef struct {
  int state;
  int x4;
  int x8;
  void *res;
} Obj;

void fn_8281C9A0(Obj *o)
{
  if (o->res != 0) {
    fn_82814F70(o->res);
    o->res = 0;
    o->state = 4;
  }
}
