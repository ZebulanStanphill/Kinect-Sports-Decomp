typedef struct { int first; int second; } Pair;
extern char *fn_82F56548(int);
extern void fn_82F57D48(int *, const int *);

char *fn_82F57FD0(int param_1, const Pair *src)
{
  char *node = fn_82F56548(param_1);
  Pair *p = (Pair *)(node + 0xc);
  if (p != 0) {
    p->first = src->first;
    fn_82F57D48(&p->second, &src->second);
  }
  return node;
}
