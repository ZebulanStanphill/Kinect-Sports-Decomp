typedef unsigned int size_t;
extern void fn_827A9810(void *vec, unsigned int n);
extern void *memmove(void *dst, const void *src, size_t n);

typedef struct {
  int *data;
  unsigned int count;
} Vec;

void fn_827A9B08(Vec *param_1, unsigned int param_2, int *param_3)
{
  int *p;

  fn_827A9810(param_1, param_1->count + 1);
  if (param_2 < param_1->count - 1) {
    p = param_1->data + param_2;
    memmove(p + 1, p, (param_1->count - param_2 - 1) * sizeof(int));
  }
  p = param_1->data + param_2;
  if (p != 0) {
    *p = *param_3;
  }
}
