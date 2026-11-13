typedef int (*Fn_82C107F8)(int, int, int, int *, int *);
typedef struct Ent_82C107F8 { int used; Fn_82C107F8 fn; int ctx; } Ent_82C107F8;

int fn_82C107F8(Ent_82C107F8 *tbl, int idx, int a, int b)
{
  int one = 0;
  struct { int first; int second; int third; int fourth; } pair;
  Ent_82C107F8 *e;

  pair.first = 0;
  pair.second = 0;
  if (idx >= 0 && idx < 0x7f) {
    e = &tbl[idx];
    if (e->used == 0) {
      return (int)0x805000b6;
    }
    return e->fn(e->ctx, a, b, &one, &pair.first);
  }
  return (int)0x80070057;
}
