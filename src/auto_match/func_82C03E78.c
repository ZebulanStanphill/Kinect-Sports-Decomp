struct If_82C03E78;
typedef struct { void *s0; void (*addref)(struct If_82C03E78 *); void (*release)(struct If_82C03E78 *); } IfVt_82C03E78;
typedef struct If_82C03E78 { IfVt_82C03E78 *vt; } If_82C03E78;
typedef struct { char pad[0x38]; If_82C03E78 *a; If_82C03E78 *b; If_82C03E78 *c; } Obj_82C03E78;

int fn_82C03E78(Obj_82C03E78 *o, If_82C03E78 *a, If_82C03E78 *b, If_82C03E78 *c)
{
  if (o->a != 0) {
    o->a->vt->release(o->a);
    o->a = 0;
  }
  if (o->b != 0) {
    o->b->vt->release(o->b);
    o->b = 0;
  }
  if (o->c != 0) {
    o->c->vt->release(o->c);
    o->c = 0;
  }
  if (a != 0) {
    a->vt->addref(a);
    o->a = a;
  }
  if (b != 0) {
    b->vt->addref(b);
    o->b = b;
  }
  if (c != 0) {
    c->vt->addref(c);
    o->c = c;
  }
  return 0;
}
