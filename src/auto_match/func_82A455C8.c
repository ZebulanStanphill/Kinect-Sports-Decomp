typedef struct {
  unsigned int a : 5;
  unsigned int b : 5;
  unsigned int pad0 : 22;
  unsigned int c : 1;
  unsigned int pad1 : 1;
  unsigned int d : 1;
  unsigned int pad2 : 29;
  unsigned int pad3 : 6;
  unsigned int e : 26;
  int pad4[9];
  int dirty;
  int pad5[11];
} Entry;

typedef struct { int pad[2]; Entry *entries; } Table;

int fn_82A455C8(Table *t, int idx, unsigned int val)
{
  Entry *e;
  int ret;
  unsigned int b;
  unsigned int n;

  e = t->entries + idx;
  ret = 1;
  b = e->b;
  val = val >> (7 - e->d);
  if (val < b) {
    n = (e->a - val) + b;
    if (n >= b) {
      n = n - b;
    }
  } else {
    ret = 0;
    n = e->e;
  }
  if (e->a != n) {
    e->dirty = 1;
    e->a = n;
  }
  if (e->c != 1) {
    e->dirty = 1;
    e->c = 1;
  }
  return ret;
}
