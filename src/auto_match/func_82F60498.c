typedef struct S { int p0; unsigned char f4; char p5[7]; unsigned cnt; char p10[0xc]; int **arr; char p20[0xb4]; int cs; } S;
typedef struct O { void (**vt)(void *); } O;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
int fn_82F60498(S *s, O *o)
{
  int hr; unsigned i, j, last;
  hr = 0;
  RtlEnterCriticalSection(&s->cs);
  if (s->f4 != 0) {
    hr = 0x82240403;
    if (o == 0 || s->cnt == 0) {
      hr = 0x82240404;
    } else {
      last = s->cnt - 1;
      for (i = 0; i < s->cnt; i++) {
        if (s->arr[i] == (int *)o) {
          for (j = i; j < last; j++) s->arr[j] = s->arr[j + 1];
          s->arr[last] = 0;
          o->vt[2](o);
          hr = 0;
          s->cnt = s->cnt - 1;
          break;
        }
      }
    }
  }
  RtlLeaveCriticalSection(&s->cs);
  return hr;
}
