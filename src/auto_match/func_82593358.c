typedef struct Entry {
  unsigned short id;
  char pad[0x42];
} Entry;

typedef struct Table {
  int count;
  Entry entries[1];
} Table;

typedef struct Inner {
  char pad[0x10];
  Table *table;
} Inner;

typedef struct Res {
  char pad[0x10];
  Inner *inner;
} Res;

typedef struct Mgr Mgr;
typedef struct MgrVt {
  void *f[7];
  Res *(*get)(Mgr *m);
} MgrVt;
struct Mgr {
  MgrVt *vt;
};

typedef struct Obj {
  char pad[0x8c0];
  Mgr *mgr;
} Obj;

int fn_82593358(Obj *o, Entry **it, unsigned short id)
{
  Mgr *m;
  Res *r;
  Table *t;
  Entry *e;
  Entry *end;

  m = o->mgr;
  r = m ? m->vt->get(m) : 0;
  t = r ? r->inner->table : 0;
  if (t != 0) {
    if (*it == 0) {
      e = t->entries;
      end = e + t->count;
    } else {
      e = *it + 1;
      end = t->entries + t->count;
    }
    for (; e < end; e++) {
      if (e->id == id) {
        *it = e;
        return 1;
      }
    }
  }
  return 0;
}
