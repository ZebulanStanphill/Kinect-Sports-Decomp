typedef struct Obj_82A40A10 { void **vt; } Obj_82A40A10;
typedef struct Node_82A40A10 { Obj_82A40A10 *obj; struct Node_82A40A10 *next; } Node_82A40A10;

void fn_82A40A10(int param_1, int param_2)
{
  Obj_82A40A10 *sub = (Obj_82A40A10 *)(param_1 + 0x70);
  Node_82A40A10 *n;
  Node_82A40A10 *t;
  Obj_82A40A10 *o;

  ((void (*)(Obj_82A40A10 *))sub->vt[2])(sub);
  n = *(Node_82A40A10 **)(param_1 + 0x22c);
  for (;;) {
    t = n;
    if (t != 0) { n = t->next; o = t->obj; } else { o = 0; }
    if (o == 0) break;
    ((void (*)(Obj_82A40A10 *, int))o->vt[2])(o, param_2);
  }
  ((void (*)(Obj_82A40A10 *))sub->vt[5])(sub);
}
