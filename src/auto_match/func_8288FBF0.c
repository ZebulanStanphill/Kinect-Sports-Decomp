typedef struct { int ****p; int pad; int idx; } P_8288FBF0;
typedef struct { int first; int second; int idx; } It_8288FBF0;
extern void fn_8288E150(void *, void *, It_8288FBF0 *, It_8288FBF0 *);

void *fn_8288FBF0(void *self, void *unused, P_8288FBF0 *P)
{
  int ****p1 = P->p;
  int **p2 = 0;
  It_8288FBF0 a, b;
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
  fn_8288E150(self, unused, &a, &b);
  return self;
}
