extern int fn_8225C590();
extern int fn_8225D168();
extern int fn_8225D388();
extern int fn_8225D8B8();
extern unsigned int fn_823AB478();
extern void *memmove(void *, const void *, unsigned int);

typedef struct { unsigned int **begin; unsigned int **end; int a8; int ac; int h; } Vec;

void fn_8225BFE0(Vec *v)
{
  int iVar5;
  unsigned int **p;
  unsigned int *e;
  unsigned int **q;

  iVar5 = fn_8225C590();
  if (v->h != -1) {
    fn_8225D168(iVar5, v->h);
    v->h = -1;
  }
  if (v->begin != v->end) {
    *(unsigned int *)(iVar5 + 0x30) = 0;
    p = v->begin;
    while (p != v->end) {
      {
        q = p + 1;
        e = *p;
        fn_8225D8B8(iVar5, e);
        fn_8225D388(iVar5, fn_823AB478(e));
        memmove(p, q, (v->end - q) * 4);
        v->end = v->end - 1;
      }
    }
  }
}
