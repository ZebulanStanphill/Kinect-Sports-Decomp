typedef struct Entry {
  int pad[3];
  int count;
} Entry;

typedef struct Block {
  unsigned int ids[7];
  struct Block *next;
} Block;

typedef struct Group {
  int pad;
  int count;
  Block *first;
} Group;

typedef struct Arr {
  int pad;
  unsigned int size;
  void **data;
} Arr;

typedef struct Obj {
  int pad;
  Arr *arr;
} Obj;

extern void **fn_82BC0088(Arr *a, unsigned int i);

static void **Arr_at(Arr *a, unsigned int i)
{
  if (i < a->size) {
    return &a->data[i];
  }
  return fn_82BC0088(a, i);
}

void fn_82BD11A0(Obj *param_1, unsigned int param_2, Arr *param_3, int param_4)
{
  Group *g;
  Block *b;
  int slot;
  int i;
  unsigned int id;

  g = *(Group **)Arr_at(param_1->arr, param_2);
  slot = -1;
  b = g->first;
  for (i = 0; i < g->count; i++) {
    slot++;
    if (slot == 7) {
      b = b->next;
      slot = 0;
    }
    id = b->ids[slot];
    if (((Entry *)*Arr_at(param_1->arr, id))->count > 0) {
      ((Entry *)*Arr_at(param_1->arr, id))->count--;
      if (((Entry *)*Arr_at(param_1->arr, id))->count == param_4 - 1) {
        *(unsigned int *)fn_82BC0088(param_3, param_3->size) = id;
      }
    }
  }
}
