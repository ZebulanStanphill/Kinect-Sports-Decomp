typedef struct { void **data; int size; int capacityAndFlags; } Arr;
typedef struct { char pad[0x14]; Arr arr; } Obj;
extern void fn_82CE4118(void *p);

/* hkMemUtil::memCpyOneAligned<4, 4> */
static void memCpyOneAligned(void *dst, const void *src)
{
  unsigned int i;
  for (i = 0; i < 1; ++i) {
    ((unsigned int *)dst)[i] = ((const unsigned int *)src)[i];
  }
}

void fn_82D94510(Obj *o, int i)
{
  Arr *a = &o->arr;
  fn_82CE4118(a->data[i]);
  a->size--;
  if (a->size != i) {
    memCpyOneAligned(a->data + i, a->data + a->size);
  }
}
