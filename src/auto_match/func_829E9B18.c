typedef unsigned int Elem_829E9B18;
typedef struct {
  Elem_829E9B18 *first;
  Elem_829E9B18 *last;
  Elem_829E9B18 *end;
} Vec_829E9B18;

void *memmove(void *, const void *, unsigned int);

Elem_829E9B18 *fn_829E9B18(Vec_829E9B18 *v, Elem_829E9B18 *first, Elem_829E9B18 *last)
{
  Elem_829E9B18 *p = first;
  while (p < last && p < v->end)
    p++;
  memmove(first, p, (v->end - p) * sizeof(Elem_829E9B18));
  v->end = first + (v->end - p);
  return first;
}
