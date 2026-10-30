typedef struct { int ****p; int pad; int idx; } P_823B8B00;
typedef struct { int first; int second; int idx; } It_823B8B00;
extern void fn_823B8E78(void *, void *, It_823B8B00 *, It_823B8B00 *);

void *fn_823B8B00(void *self, void *unused, P_823B8B00 *P)
{
  int ****p1 = P->p;
  int **p2 = 0;
  It_823B8B00 a, b;
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
  fn_823B8E78(self, unused, &a, &b);
  return self;
}
