typedef struct Node_82FA5358 { struct Node_82FA5358 *next; } Node_82FA5358;

typedef struct List_82FA5358 {
  Node_82FA5358 *head;
  Node_82FA5358 *tail;
  int count;
} List_82FA5358;

typedef struct Pool_82FA5358 {
  int pad0;
  int itemSize;       /* 0x04 */
  char pad8[8];
  List_82FA5358 free; /* 0x10 */
  char pad1c[0x2c];
  int bytes;          /* 0x48 */
  int pad4c;
} Pool_82FA5358;

extern Pool_82FA5358 *lbl_83264210;

int fn_82FA5358(int idx, Node_82FA5358 *node)
{
  Pool_82FA5358 *p = &lbl_83264210[idx];
  List_82FA5358 *l = &p->free;
  p->bytes = p->bytes - p->itemSize;
  node->next = 0;
  if (l->tail == 0) {
    l->head = node;
  } else {
    l->tail->next = node;
  }
  l->tail = node;
  l->count = l->count + 1;
  return 1;
}
