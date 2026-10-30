typedef struct Obj_826B35F0 { char p0[0xc8]; int *arr; unsigned int n; } Obj_826B35F0;
extern int *fn_826B0F90(Obj_826B35F0 *p, int a);
extern void fn_826B2BE8(Obj_826B35F0 *p, int a, int b);
extern void fn_82695FA0(int *p, int b);

void fn_826B35F0(Obj_826B35F0 *s, int a, int b)
{
  int *r;
  if (s->n == 0) return;
  if (s->arr[s->n - 1] == 0) return;
    r = fn_826B0F90(s, a);
    if (r == 0) {
      fn_826B2BE8(s, a, b);
    } else {
      fn_82695FA0(r, b);
    }
}
