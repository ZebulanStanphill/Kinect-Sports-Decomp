typedef struct {
  unsigned int *first;
  unsigned int *last;
} Vec_83021C40;

extern void fn_830214B8(unsigned int **result, Vec_83021C40 *v, unsigned int **where);

static __forceinline unsigned int *find_83021C40(unsigned int *first, unsigned int *last, unsigned int value)
{
  for (; first != last; ++first)
    if (*first == value)
      break;
  return first;
}

int fn_83021C40(Vec_83021C40 *v, unsigned int value)
{
  unsigned int *it;
  unsigned int *result;

  it = v->first;
  if (it != v->last) {
    it = find_83021C40(it, v->last, value);
    if (it != v->last) {
      fn_830214B8(&result, v, &it);
      return 1;
    }
  }
  return 2;
}
