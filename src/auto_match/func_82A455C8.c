typedef unsigned int uint;

typedef struct {
  uint a : 5;
  uint b : 5;
  uint pad0 : 22;
  uint c : 1;
  uint pad1 : 1;
  uint d : 1;
  uint pad2 : 29;
  uint pad3 : 6;
  uint e : 26;
  int pad4[9];
  int dirty;
  int pad5[11];
} Entry;

typedef struct { int pad[2]; Entry *entries; } Table;

int fn_82A455C8(Table *t, int idx, uint val)
{
  Entry *e;
  int ret;
  uint b;
  uint n;

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
