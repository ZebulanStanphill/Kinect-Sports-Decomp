typedef struct { int ****p; int pad; int idx; } P_828A34C0;
typedef struct { int first; int second; int idx; } It_828A34C0;
extern void fn_828C5A90(void *, void *, It_828A34C0 *, It_828A34C0 *);

void *fn_828A34C0(void *self, void *unused, P_828A34C0 *P)
{
  int ****p1 = P->p;
  int **p2 = 0;
  It_828A34C0 a, b;
  int i, j;
  if (p1 != 0 && *p1 != 0) {
    p2 = **p1;
  }
  i = P->idx;
  j = i + 1;
  b.first = 0;
  b.second = 0;
  if (p2 != 0 && *p2 != 0) {
    b.first = **p2;
  }
  b.idx = j;
  a.first = 0;
  a.second = 0;
  if (p1 != 0 && *p1 != 0) {
    a.first = (int)**p1;
  }
  a.idx = i;
  fn_828C5A90(self, unused, &a, &b);
  return self;
}
