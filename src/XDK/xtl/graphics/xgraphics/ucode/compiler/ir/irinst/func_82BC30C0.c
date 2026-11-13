struct N_82BC30C0;
typedef struct { char pad[0x44]; unsigned char (*f44)(struct N_82BC30C0 *); } Vt_82BC30C0;
typedef struct N_82BC30C0 {
  Vt_82BC30C0 *vt;
  char pad[0xb4 - 4];
  int cache;
  char pad2[0xec - 0xb8];
  int next;
} N_82BC30C0;

int fn_82BC30C0(N_82BC30C0 *o)
{
  int c, nx;
  if (o->cache == 0) {
    c = o->next;
    nx = ((N_82BC30C0 *)c)->next;
    while (nx != 0) {
      if (((N_82BC30C0 *)nx)->vt->f44((N_82BC30C0 *)nx) == 0) break;
      c = ((N_82BC30C0 *)((N_82BC30C0 *)c)->next)->next;
      nx = ((N_82BC30C0 *)c)->next;
    }
    o->cache = c;
    return c;
  }
  return o->cache;
}
