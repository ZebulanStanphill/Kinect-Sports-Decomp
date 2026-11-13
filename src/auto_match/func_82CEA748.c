typedef struct { unsigned __int64 key, value; } Entry_82CEA748;
typedef struct { Entry_82CEA748 *table; int pad; unsigned mask; } Map_82CEA748;
static __forceinline int live(unsigned __int64 k) { if (k != (unsigned __int64)-1) return 1; return 0; }

unsigned __int64 fn_82CEA748(Map_82CEA748 *m, unsigned __int64 key, unsigned __int64 def)
{
  unsigned mask = m->mask;
  unsigned i;
  if ((int)mask > 0) {
    i = (((unsigned)key >> 4) * 0x9e3779b1) & mask;
    for (;;) {
      unsigned __int64 k = m->table[i].key;
      if (!live(k)) break;
      if (k == key) return m->table[i].value;
      i = (i + 1) & mask;
    }
  }
  return def;
}
