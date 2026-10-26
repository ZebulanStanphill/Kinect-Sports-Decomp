typedef struct { int a, b, c, d; } V16;
extern void fn_82FFE000(int a, int b, V16 *v);
int fn_8302B6A0(int a, int b, V16 v)
{
  fn_82FFE000(a, b, &v);
  return a;
}
