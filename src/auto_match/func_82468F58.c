typedef struct Elem_82468F58 {
  unsigned char data[0x174];
} Elem_82468F58;

typedef struct Vec_82468F58 {
  Elem_82468F58 *first;
  Elem_82468F58 *last;
  Elem_82468F58 *end;
} Vec_82468F58;

typedef struct Obj_82468F58 {
  int pad0;
  Vec_82468F58 v;
} Obj_82468F58;

extern void fn_8265CA20(void *p);

static __forceinline void Tidy_82468F58(Vec_82468F58 *v)
{
  if (v->first != 0) {
    Elem_82468F58 *p;
    for (p = v->first; p != v->last; p++) {
    }
    fn_8265CA20(v->first);
  }
  v->first = 0;
  v->last = 0;
  v->end = 0;
}

void fn_82468F58(Obj_82468F58 *param_1)
{
  Tidy_82468F58(&param_1->v);
}
