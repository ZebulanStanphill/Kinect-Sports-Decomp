extern int fn_828E62F0(int *, unsigned);
extern void fn_82F622A8(const char *);
typedef struct { int first; int last; int end; } Vec_828E6460;
int fn_828E6460(Vec_828E6460 *v, unsigned n)
{
  int p;
  v->first = 0;
  v->last = 0;
  v->end = 0;
  if (n == 0)
    return 0;
  if (0x1fffffff < n)
    fn_82F622A8("vector<T> too long");
  p = fn_828E62F0((int *)v + 3, n);
  v->first = p;
  v->last = p;
  v->end = p + n * 8;
  return 1;
}