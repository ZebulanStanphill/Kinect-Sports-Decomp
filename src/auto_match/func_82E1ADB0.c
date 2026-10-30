typedef struct { int key; int val; } Ent_82E1ADB0;
typedef struct { Ent_82E1ADB0 *e; int pad; int n; } Tbl_82E1ADB0;
extern int fn_82CEA280(int *, int, unsigned);
extern void fn_82E17300(int *, int);

static int skip(Tbl_82E1ADB0 *t, int i)
{
  int n = t->n;
  if (i <= n) {
    Ent_82E1ADB0 *p = &t->e[i];
    do {
      if (p->key != -1) break;
      i++;
      p++;
    } while (i <= n);
  }
  return i;
}

void fn_82E1ADB0(int *self, Tbl_82E1ADB0 *t)
{
  int none = -1;
  int i = skip(t, 0);
  while (i <= t->n) {
    Ent_82E1ADB0 *p = &t->e[i];
    int key = p->key;
    int val = p->val;
    int k = fn_82CEA280(self + 3, key, none);
    if (k != none) {
      do {
        Ent_82E1ADB0 *e = (Ent_82E1ADB0 *)*self + k;
        *(int *)e->key = val;
        e = (Ent_82E1ADB0 *)*self + k;
        k = e->val;
      } while (k != none);
    }
    fn_82E17300(self, key);
    i = skip(t, i + 1);
  }
}
