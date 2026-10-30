typedef struct { int a; int b; } N;
extern void fn_82816EF0(void *a, void *b, N **out);
void fn_82816F98(void *a, void *b, int *out)
{
  N *n;
  fn_82816EF0(a, b, &n);
  *out = n ? n->b : 0;
}
