extern int _blkmov(void *, void *, unsigned int);
extern int fn_830358C8(unsigned int, unsigned int);

typedef struct Pair_83031B90 { unsigned int key; int *val; } Pair_83031B90;
typedef Pair_83031B90 P;
typedef struct Vec_83031B90 { P *begin; P *end; } V;

static __forceinline int **Find(V *v, unsigned int key)
{
  P *e;
  P *end;
  int found;
  end = v->end;
  for (e = v->begin; e != end && e->key != key; e++) {
  }
  found = e != end;
  return found ? &e->val : 0;
}

int fn_83031B90(int *param_1, unsigned int param_2)
{
  unsigned int *pi;
  unsigned int *pe;
  int **v;
  int *obj;
  P *b;
  P *end;
  V *vec;

  pi = (unsigned int *)param_1[0x2a];
  pe = (unsigned int *)param_1[0x2b];
  for (; pi != pe; pi++) {
    fn_830358C8(*pi, param_2);
  }
  vec = (V *)(param_1 + 0x1f);
  v = Find(vec, param_2);
  if (v != 0) {
    obj = *v;
    (*(void (**)(int *, int))(*obj + 0x2c))(obj, 0);
    end = vec->end;
    b = vec->begin;
    for (; b != end; b++) {
      if (b->key == param_2) break;
    }
    if (b != vec->end) {
      end = end - 1;
      if (b < end) {
        _blkmov(b, b + 1, ((((unsigned int)end - (unsigned int)b) - 1 >> 3) + 1) * 8);
      }
      vec->end = vec->end - 1;
    }
    (*(void (**)(int *))(*param_1 + 8))(param_1);
  }
  return 1;
}
