typedef struct Vec_823B9060 { int pad0; void **data; unsigned n; int pad; unsigned q; } Vec_823B9060;
extern void fn_823B9248(Vec_823B9060 *);
extern void fn_8265CA20(void *);
void fn_823B9060(Vec_823B9060 *v)
{
  unsigned n;
  int off;
  while (v->q != 0) {
    fn_823B9248(v);
  }
  n = v->n;
  if (n != 0) {
    off = n << 2;
    do {
      off = off - 4;
      n = n - 1;
      if (*(void **)(off + (int)v->data) != 0) {
        fn_8265CA20(*(void **)(off + (int)v->data));
      }
    } while (n != 0);
  }
  if (v->data != 0) {
    fn_8265CA20(v->data);
  }
  v->n = 0;
  v->data = 0;
}
