typedef struct Obj_82A4FD48 {
  char pad[8];
  long *rc;
  int pad_c;
  struct { char pad[0x30]; int v; } *ctx;
  char list[1];
} Obj;
extern int *fn_82A40BA8(void *);
extern void fn_82A403E8(int, int);
extern void fn_82A4F4E0(int *);
extern void fn_82A411B8(void *);
extern long _InterlockedDecrement(long *);

void fn_82A4FD48(Obj *o)
{
  int *p;
  while ((p = fn_82A40BA8(o->list)) != 0) {
    fn_82A403E8(o->ctx->v, *p);
    fn_82A4F4E0(p);
  }
  if (o->rc != 0) {
    _InterlockedDecrement(o->rc);
    o->rc = 0;
  }
  fn_82A411B8(o->list);
}
