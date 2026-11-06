extern int fn_8252D240();

static __forceinline int Valid_82267C00(unsigned int *p) { if (p == 0) return 0; return *p != 0; }
typedef struct Node_82267C00 Node_82267C00;
typedef struct Item_82267C00 Item_82267C00;
struct Item_82267C00 {
  char pad0[0x40];
  unsigned int key;
  char pad1[0x08];
  unsigned int refs;
  char pad2[0x8c];
  int h;
};
struct Node_82267C00 {
  Node_82267C00 *next;
  Node_82267C00 *prev;
  Item_82267C00 *item;
};
typedef struct Sink_82267C00 Sink_82267C00;
typedef struct { void (*f0)(Sink_82267C00 *, unsigned int); } SinkVt_82267C00;
struct Sink_82267C00 { SinkVt_82267C00 *vt; };
typedef struct {
  Node_82267C00 *head;
  char pad4[0x1c];
  Sink_82267C00 *sink;
  char pad24[0x18];
  int count;
  int pad40;
  int busy;
} Obj_82267C00;

void fn_82267C00(Obj_82267C00 *o, unsigned int key)
{
  Node_82267C00 *n;
  Item_82267C00 *it;
  unsigned int *r;

  o->busy = 1;
  if (o->count != 0) {
    for (n = o->head->next; n != o->head; n = n->next) {
      it = n->item;
      if (it->key == key) {
        r = &it->refs;
        if (Valid_82267C00(r)) {
          fn_8252D240(it->h, r, 0);
        }
        if (o->sink != 0) {
          o->sink->vt->f0(o->sink, key);
        }
        break;
      }
    }
  }
  o->busy = 0;
}
