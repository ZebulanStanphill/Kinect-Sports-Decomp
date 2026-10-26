extern void fn_8251FA58(void *p);

typedef struct {
  char pad[0x20];
  int v20;
  void *p24;
} S;

void fn_826745E8(S *o, int v)
{
  o->v20 = v;
  if (o->p24 != 0) {
    fn_8251FA58(o->p24);
    o->p24 = 0;
  }
}
