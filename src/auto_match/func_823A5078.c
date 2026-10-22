typedef struct { int a; void *b; } Pair;
extern int fn_822315A0(void *p);
extern int *fn_822EFBF0(Pair *out, void *src);
extern int fn_823598B0(int a, int b);
extern int fn_82359928(int a, int b);
extern int fn_82396CA0(int a);
extern int fn_823A75F0(int a);

void fn_823A5078(int param_1)
{
  void *src;
  Pair tmp;

  src = *(void **)(*(int *)(param_1 + 8) + 0x84);
  if (src != 0) {
    fn_823A75F0(*fn_822EFBF0(&tmp, src));
    if (tmp.b != 0) {
      fn_822315A0(tmp.b);
    }
  }
  fn_823598B0(*(int *)(param_1 + 8), 0);
  fn_82359928(*(int *)(param_1 + 8), 0);
  if (*(int *)(param_1 + 0x60) != 0) {
    fn_82396CA0(*(int *)(param_1 + 8));
    *(int *)(param_1 + 0x60) = 0;
  }
}
