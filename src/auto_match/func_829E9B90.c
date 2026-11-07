typedef unsigned short Elem_829E9B90;
typedef struct {
  Elem_829E9B90 *first;
  Elem_829E9B90 *last;
  Elem_829E9B90 *end;
} Vec_829E9B90;

void *memmove(void *, const void *, unsigned int);

Elem_829E9B90 *fn_829E9B90(Vec_829E9B90 *v, Elem_829E9B90 *first, Elem_829E9B90 *last)
{
  Elem_829E9B90 *p = first;
  while (p < last && p < v->end)
    p++;
  memmove(first, p, (v->end - p) * sizeof(Elem_829E9B90));
  v->end = first + (v->end - p);
  return first;
}
