typedef struct Item_82ACA718 {
  int pad0[2];
  unsigned int a8;
  int padc;
  unsigned int a10;
  unsigned int a14;
  int pad18;
  int key;
} Item_82ACA718;
typedef struct Edge_82ACA718 {
  int pad0[2];
  struct Edge_82ACA718 *next;
  int padc;
  Item_82ACA718 *item;
} Edge_82ACA718;
typedef struct Node_82ACA718 {
  int pad0;
  Edge_82ACA718 *edges;
  int pad8[2];
  unsigned int a10;
  unsigned int a14;
  int pad18;
  int key;
  struct Node_82ACA718 *next;
} Node_82ACA718;

static int notNull(void *p) { if (p) return 1; return 0; }
int fn_82ACA718(Node_82ACA718 *param_1)
{
  Node_82ACA718 *n; Edge_82ACA718 *e; Item_82ACA718 *it;
  for (n = param_1; n != 0; n = n->next) {
    for (e = n->edges; notNull(e); e = e->next) {
      it = e->item;
      if (it != 0 && it->key == n->key && (it->a8 & 0x3f80) != 0x3800 &&
          (unsigned char)((it->a8 >> 26) & 1) != 0 && (unsigned char)((it->a10 >> 25) & 1) == 0 &&
          (((param_1->a14 >> 5 | param_1->a10 & 0x78000000) ^ (it->a14 >> 5 | it->a10 & 0x78000000)) & 0xfff00000) != 0) return 0;
    }
  }
  return 1;
}
