typedef struct Elem_823B3CC0 {
  int w[8];
} Elem_823B3CC0;

typedef struct Vec_823B3CC0 {
  Elem_823B3CC0 *first;
  Elem_823B3CC0 *last;
  Elem_823B3CC0 *end;
} Vec_823B3CC0;

typedef struct Owner_823B3CC0 {
  int pad[3];
  Vec_823B3CC0 v;
} Owner_823B3CC0;

extern void fn_8265CA20(void *p);

void fn_823B3CC0(Owner_823B3CC0 *param_1)
{
  Vec_823B3CC0 *v = &param_1->v;
  Elem_823B3CC0 *it;

  if (v->first != 0) {
    for (it = v->first; it != v->last; it++) {
    }
    fn_8265CA20(v->first);
  }
  v->first = 0;
  v->last = 0;
  v->end = 0;
}
