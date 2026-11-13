typedef struct { int a; int b; int c; } Elem_829E99A0;
typedef struct {
  Elem_829E99A0 *first;
  Elem_829E99A0 *last;
  Elem_829E99A0 *end;
} Vec_829E99A0;

void *memmove(void *, const void *, unsigned int);

Elem_829E99A0 *fn_829E99A0(Vec_829E99A0 *v, Elem_829E99A0 *first, Elem_829E99A0 *last)
{
  Elem_829E99A0 *p = first;
  while (p < last && p < v->end)
    p++;
  memmove(first, p, (v->end - p) * sizeof(Elem_829E99A0));
  v->end = first + (v->end - p);
  return first;
}
