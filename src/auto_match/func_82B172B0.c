typedef struct N_82B172B0 {
  char pad[0x34];
  struct N_82B172B0 *parent;
  struct N_82B172B0 *f38;
  struct N_82B172B0 *f3c;
} N_82B172B0;
typedef struct { N_82B172B0 *head; int pad; unsigned char flag; } It_82B172B0;

N_82B172B0 *fn_82B172B0(It_82B172B0 *it, N_82B172B0 *n)
{
  N_82B172B0 *r;

  r = 0;
  if (it->flag != 0 && (r = n->f3c, r == 0)) {
    it->flag = 0;
    n = n->parent->f38;
  }
  if (it->flag == 0) {
    r = n->f38;
    if (r == 0) {
      do {
        while (1) {
          if (n == it->head) return 0;
          r = n->f3c;
          if (r != 0) break;
          n = n->parent;
        }
        n = r;
        r = r->f38;
      } while (r == 0);
    }
    it->flag = 1;
  }
  return r;
}
