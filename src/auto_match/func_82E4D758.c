typedef struct Node { void *a; void *b; } Node;
typedef struct Obj { char pad[0x230]; void *list; void *x; } Obj;
extern void fn_8265C990(void *p, unsigned int tag);
extern void fn_82E914C0(void *list, Node **out, int flag);
extern void fn_82E91818(void *p);
extern void fn_82E92CE8(void *p);

void fn_82E4D758(Obj *o)
{
  Node *n;
  void *p;

  if (o->list != 0) {
    fn_82E914C0(o->list, &n, 0);
    while (n != 0) {
      if (n->a != 0) {
        fn_8265C990(n->a, 0x248c8000);
        n->a = 0;
      }
      if (n->b != 0) {
        fn_8265C990(n->b, 0x248c8000);
        n->b = 0;
      }
      if (n != 0) {
        fn_8265C990(n, 0x248c8000);
        n = 0;
      }
      fn_82E914C0(o->list, &n, 0);
    }
    p = o->list;
    if (p != 0) {
      fn_82E91818(p);
      fn_8265C990(p, 0x248c8000);
      o->list = 0;
    }
  }
  p = o->x;
  if (p != 0) {
    fn_82E92CE8(p);
    fn_8265C990(p, 0x248c8000);
    o->x = 0;
  }
}
