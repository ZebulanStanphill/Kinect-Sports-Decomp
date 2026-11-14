typedef struct Node_8296BCB0 {
  int f0;
  unsigned int flags;
} Node_8296BCB0;

typedef struct Item_8296BCB0 {
  int f0;
  int node;
} Item_8296BCB0;

typedef struct Obj_8296BCB0 {
  char pad0[0x10];
  Node_8296BCB0 **nodes;
  Item_8296BCB0 **items;
} Obj_8296BCB0;

typedef struct Prims_8296BCB0 {
  unsigned int stride;
  unsigned int count;
  int *indices;
} Prims_8296BCB0;

extern int fn_82966400(Obj_8296BCB0 *self, int a, int b);

int fn_8296BCB0(Obj_8296BCB0 *self, Prims_8296BCB0 *prims, int first, int second)
{
  unsigned int stride = prims->stride & 0xfffff;
  unsigned int n = prims->count / stride;
  unsigned int i;
  for (i = 0; i < n; i++) {
    int a = prims->indices[i * stride + first];
    int b = prims->indices[i * stride + second];
    if ((self->nodes[self->items[a]->node]->flags & 0x40) &&
        (self->nodes[self->items[b]->node]->flags & 0x40) &&
        fn_82966400(self, a, b) == 0) {
      return 1;
    }
  }
  return 0;
}
