typedef struct Entry {
  unsigned char a;
  unsigned char b;
  unsigned char pad[2];
  unsigned char idx[4];
} Entry;

typedef union EntryU {
  Entry s;
  unsigned int w[2];
} EntryU;

typedef struct Table {
  unsigned char f0[2];
  unsigned char count;
  unsigned char f3;
  EntryU e[1];
} Table;

typedef struct Key {
  unsigned short v[4];
  unsigned char a;
  unsigned char b;
} Key;

#define VAL(t, n, i) (*(unsigned short *)((unsigned char *)&(t)->e[n] + ((i) >> 3)))

int fn_82DD75C0(Table *t, Key *k)
{
  unsigned int n;
  unsigned int i;
  int sum;
  EntryU tmp;
  EntryU *e;

  n = t->count;
  for (i = 0; i < n; i++) {
    e = &t->e[i];
    if (k->a == e->s.a && k->b == e->s.b) {
      sum = k->a + k->b;
      if (k->v[0] == VAL(t, n, e->s.idx[0]) &&
          k->v[1] == VAL(t, n, e->s.idx[1]) &&
          (sum <= 2 || k->v[2] == VAL(t, n, e->s.idx[2])) &&
          (sum <= 3 || k->v[3] == VAL(t, n, e->s.idx[3]))) {
        if (i != 0) {
          tmp = t->e[i];
          t->e[i] = t->e[0];
          t->e[0] = tmp;
        }
        return 1;
      }
    }
  }
  if (k->a == 1 || k->b == 1) {
    for (i = 0; i < n; i++) {
      e = &t->e[i];
      if ((k->a == 1 && e->s.a == 1 && VAL(t, n, e->s.idx[0]) == k->v[0]) ||
          (k->b == 1 && e->s.b == 1 && VAL(t, n, e->s.idx[e->s.a]) == k->v[k->a])) {
        e->s.b = 0;
        e->s.a = 0;
        return 0;
      }
    }
  }
  return 0;
}
