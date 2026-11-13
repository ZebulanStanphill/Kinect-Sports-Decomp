struct Node_82FABC50;
typedef struct Node_82FABC50 {
  struct Node_82FABC50 *next;
  int pad[4];
  void *f14;
  int pad18;
} Node_82FABC50;
typedef struct {
  Node_82FABC50 *head;
  int f4;
  Node_82FABC50 *list;
  unsigned count;
  unsigned f10;
  int f14;
  Node_82FABC50 *arr;
  void *heap;
} Obj_82FABC50;
extern void fn_82FA5190(void *, void *);
extern void fn_82FA9208(void *);
extern void fn_82FABA50(Obj_82FABC50 *, Node_82FABC50 *, int);

int fn_82FABC50(Obj_82FABC50 *o)
{
  Node_82FABC50 *n;
  Node_82FABC50 *nx;
  unsigned char out;
  unsigned i;
  unsigned off;
  Node_82FABC50 *e;

  if (o->f10 > 0) {
    do {
      n = o->head;
      if (n != 0) fn_82FABA50(o, n, 0);
    } while (n != 0);
    n = o->list;
    while (n != 0) {
      nx = n->next;
      if (n < o->arr || n >= o->arr + o->count) out = 1; else out = 0;
      if (out) {
        if (n->f14 != 0) {
          fn_82FA9208(n->f14);
          n->f14 = 0;
        }
        fn_82FA5190(o->heap, n);
      }
      n = nx;
    }
    if (o->arr != 0) {
      i = 0;
      if (o->count > 0) {
        off = 0;
        do {
          e = (Node_82FABC50 *)((char *)o->arr + off);
          if (e->f14 != 0) {
            fn_82FA9208(e->f14);
            e->f14 = 0;
          }
          i++;
          off += 0x1c;
        } while (i < o->count);
      }
      fn_82FA5190(o->heap, o->arr);
    }
    o->count = 0;
    o->f10 = 0;
    o->head = 0;
    o->f4 = 0;
  }
  return 1;
}
