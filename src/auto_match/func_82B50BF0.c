typedef struct { int a; int b; } E_82B50B70;
typedef struct { int pad[2]; unsigned int size; unsigned int cap; E_82B50B70 e[1]; } Arr_82B50B70;
extern Arr_82B50B70 *fn_82AF87E0(unsigned int *, int);

void fn_82B50BF0(unsigned int *param_1, int param_2)
{
  E_82B50B70 e;
  Arr_82B50B70 *arr;
  unsigned int n;

  e.a = 2;
  e.b = param_2;
  if ((param_1[1] & 1) == 0) {
    arr = (Arr_82B50B70 *)((param_1[0] & 0xfffffffe) - 4);
    if (arr != 0 && arr->size + 1 <= arr->cap) goto ok;
  }
  arr = fn_82AF87E0(param_1, 1);
ok:
  { E_82B50B70 *d; d = &arr->e[arr->size]; arr->size++; *d = e; }
}
