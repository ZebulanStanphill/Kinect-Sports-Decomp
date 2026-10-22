typedef unsigned int uint;
extern int fn_82698CC0();
extern int fn_82699740();
void *memmove(void *dst, const void *src, unsigned int n);

typedef struct {
  int *data;
  uint count;
} Vec;

void fn_82699828(Vec *v, uint idx, int *val)
{
  int *p;

  fn_82699740(v, v->count + 1);
  if (idx < v->count - 1) {
    p = v->data + idx;
    memmove(p + 1, p, (v->count - idx - 1) * 4);
  }
  p = v->data + idx;
  if (p != 0) {
    *p = 0;
    fn_82698CC0(p, *val);
  }
}
