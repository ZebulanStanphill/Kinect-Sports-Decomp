typedef struct { unsigned char a[5]; unsigned char b; unsigned char c[2]; } Data;
typedef struct { int tag; Data d; } Entry;
typedef struct { unsigned count; Entry *heap; int pad[2]; Entry inl[16]; } Arr;
typedef struct { char p0[5]; unsigned char key; char p6[2]; unsigned short idx; char pa[6]; int sel; char p14[0x10]; Arr arr; } Obj;
int fn_826F06A8(Obj *o)
{
  unsigned i = o->idx;
  Arr *a = &o->arr;
  unsigned n = a->count;
  unsigned char first = 1;
  int off;
  o->sel = -1;
  if (i < n) {
    off = i * 0xc;
    do {
      Entry *e;
      if (i < 0x10) e = (Entry *)(off + (int)a + 0x10); else e = (Entry *)((int)a->heap + off - 0xc0);
      if (e->tag == 1) {
        Data d = e->d;
        if (d.b == o->key) {
          if (first) o->idx++;
          o->sel = i;
          return 1;
        }
        if (first) first = 0;
      } else if (first) {
        o->idx++;
      }
      i++;
      off += 0xc;
    } while (i < n);
  }
  return 0;
}
