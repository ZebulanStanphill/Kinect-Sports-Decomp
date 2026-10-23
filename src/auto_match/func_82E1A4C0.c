typedef struct { int off; int val; } Fix;
typedef struct { int off; int val; int pad[2]; } Fix2;
typedef struct {
    Fix *fix;
    int nfix;
    int pad;
    Fix2 *fix2;
    int nfix2;
} Tbl;

void fn_82E1A4C0(Tbl *t0, int base)
{
    int i, j;
    Tbl *t = t0;
    for (i = 0; i < t->nfix; i++) {
        *(int *)(t->fix[i].off + base) = t->fix[i].val + base;
    }
    for (j = 0; j < t->nfix2; j++) {
        Fix2 *g = &t->fix2[j];
        *(int *)(g->off + base) = g->val;
    }
}
