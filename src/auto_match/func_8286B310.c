typedef struct { int first; int second; } Pair;
extern char *fn_82869928(int);
extern void fn_82292780(int *, const int *);

char *fn_8286B310(int param_1, const Pair *src)
{
  char *node = fn_82869928(param_1);
  Pair *p = (Pair *)(node + 0xc);
  if (p != 0) {
    p->first = src->first;
    fn_82292780(&p->second, &src->second);
  }
  return node;
}
