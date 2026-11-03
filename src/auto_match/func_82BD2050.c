typedef struct { int pad0; int b; } Sub_82BD2050;
typedef struct { int a; Sub_82BD2050 *sub; } Obj_82BD2050;
typedef struct { int pad0; unsigned size; Obj_82BD2050 **data; } Vec_82BD2050;
typedef struct { char pad[0x60]; Vec_82BD2050 *vec; } Self_82BD2050;

extern Obj_82BD2050 **fn_82BC0088(Vec_82BD2050 *, unsigned);

static __forceinline Obj_82BD2050 **At(Vec_82BD2050 *v, unsigned i)
{
  if (i < v->size) {
    return &v->data[i];
  }
  return fn_82BC0088(v, i);
}

void fn_82BD2050(Self_82BD2050 *self)
{
  Vec_82BD2050 *v;
  unsigned n;
  unsigned i;
  unsigned j;
  int ka;
  int kb;
  Obj_82BD2050 *tmp;

  v = self->vec;
  n = v->size;
  i = 0;
  if ((int)n > 0) {
    do {
      j = i + 1;
      if (j < v->size) {
        do {
          ka = (*At(v, i))->sub->b;
          ka = ((*At(v, i))->a - 1) * ka;
          kb = (*At(v, j))->sub->b;
          kb = ((*At(v, j))->a - 1) * kb;
          if (ka < kb) {
            tmp = *At(v, i);
            *At(v, i) = *At(v, j);
            *At(v, j) = tmp;
          }
          j = j + 1;
        } while (j < v->size);
      }
      i = i + 1;
    } while ((int)i < (int)n);
  }
}
