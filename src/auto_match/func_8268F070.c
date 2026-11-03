typedef struct N_8268F070 { struct N_8268F070 *next; struct N_8268F070 *prev; } N_8268F070;
extern int fn_8268E7C0(void);
extern void fn_8268E490(void *, N_8268F070 *, N_8268F070 *);
extern void fn_8268E408(void *, N_8268F070 *, N_8268F070 *);
N_8268F070 *fn_8268F070(void *a)
{
  int r;
  N_8268F070 *n;
  N_8268F070 *nx;
  N_8268F070 *pv;
  r = fn_8268E7C0();
  if (r != 0) {
    r = *(int *)(r + 4);
    n = (N_8268F070 *)r;
    nx = n->next;
    if (nx != n) {
      pv = n->prev;
      pv->next = nx;
      nx->prev = pv;
      fn_8268E408(a, n, nx);
    } else {
      fn_8268E490(a, n, nx);
    }
  }
  return (N_8268F070 *)r;
}
