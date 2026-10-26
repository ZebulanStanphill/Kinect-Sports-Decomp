typedef struct { int a; int b; } Pair;
typedef struct { Pair *data; int size; int capacityAndFlags; } PairArray;
typedef struct { char pad[0xc]; int id; } Item;
typedef struct { char pad[0x10]; void *heap; } Tls;
extern Tls *fn_82CE5410(void);
extern void fn_82CE63B0(void *heap, void *arr, int elemSize);

void fn_8308B650(Item *a, Item *b, PairArray *arr)
{
  Tls *t = fn_82CE5410();
  Pair *e;
  if (arr->size == (arr->capacityAndFlags & 0x3fffffff)) {
    fn_82CE63B0(t->heap, arr, 8);
  }
  e = &arr->data[arr->size++];
  e->a = a->id;
  e->b = b->id;
}
