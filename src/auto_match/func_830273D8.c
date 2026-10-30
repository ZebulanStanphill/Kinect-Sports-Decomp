typedef struct { char *ptr; int cnt; int a, b; } E_830273D8;
typedef struct { char pad[0x38]; int val; int pad3c, pad40; E_830273D8 *arr; unsigned n; } S_830273D8;
void fn_830273D8(S_830273D8 *p)
{
  unsigned i;
  for (i = 0; i < p->n; i++) {
    if (p->arr[i].cnt > 0) {
      *(int *)(p->arr[i].ptr + p->arr[i].cnt * 0x10 - 4) = p->val;
    }
  }
}
