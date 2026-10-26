typedef struct { int p; void *rep; } SP;
extern void fn_822315A0(void *rep);
extern void fn_82430D80(int o, int a, int b);
extern SP *fn_82522588(SP *out, unsigned int it);

void fn_8242DE00(int param_1, int param_2)
{
  unsigned int it;
  SP tmp;
  int o;
  int s;

  for (it = *(unsigned int *)(param_1 + 0x30); it != *(unsigned int *)(param_1 + 0x34); it += 8) {
    o = fn_82522588(&tmp, it)->p;
    s = *(int *)(o + 0x244);
    if (*(int *)(s + 8) != param_2) {
      *(int *)(s + 8) = param_2;
      fn_82430D80(o, 0, 1);
    }
    if (tmp.rep != 0) {
      fn_822315A0(tmp.rep);
    }
  }
}
