typedef struct Node_82E80A68 {
  unsigned int size;
  unsigned int pad4;
  unsigned int pad8;
  struct Node_82E80A68 *next;
} Node_82E80A68;
typedef struct {
  unsigned int pad0;
  unsigned int total;
  unsigned int limit;
  Node_82E80A68 *head;
  Node_82E80A68 *alt;
  Node_82E80A68 *cur;
} Obj_82E80A68;

void fn_82E80A68(Obj_82E80A68 *o)
{
  Node_82E80A68 *n;
  unsigned int acc;
  unsigned int sum;

  if (o->limit > o->total) {
    o->limit = o->total;
  }
  acc = 0;
  for (n = o->head; n != 0; n = n->next) {
    sum = n->size + acc;
    if (sum > o->limit) break;
    acc = sum > 0x10000 ? 0x10000 : sum;
  }
  if (n == 0) {
    if (o->alt != 0) {
      o->total = acc;
      o->limit = acc;
      o->cur = o->alt;
      return;
    }
  }
  o->cur = n;
}
