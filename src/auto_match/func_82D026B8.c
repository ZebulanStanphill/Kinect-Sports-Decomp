typedef struct {
  int x0;
  int x4;
  char x8;
  char buf[50];
} Obj;

void fn_82D026B8(Obj *o)
{
  char *p;
  int i;
  o->x4 = 0;
  p = o->buf;
  for (i = 50; i != 0; i--) {
    *p++ = 0;
  }
}
