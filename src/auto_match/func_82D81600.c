typedef struct Arr { unsigned int *data; int size; } Arr;
typedef struct Obj { char pad[0x18c]; Arr arr; } Obj;

static int Arr_indexOf(Arr *a, unsigned int t)
{
  int i = 0;
  if (0 < a->size) {
    unsigned int *p = a->data;
    do {
      if (*p == t) return i;
      i++;
      p++;
    } while (i < a->size);
  }
  return -1;
}

void fn_82D81600(Obj *o, unsigned int v)
{
  Arr *a = &o->arr;
  a->data[Arr_indexOf(a, v)] = 0;
}
