// Open-addressing hash set add (HashSetCachedBase::add with a cached hash): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_826D6238(void *dst, const void *src);
extern "C" void fn_826D6290(void *dst, const void *src);
extern "C" void fn_82769F00(void *dst, const void *src);
extern "C" void fn_8276B498(void *m, void *a, int n);
extern "C" int fn_82769E90(void *m, const void *key, unsigned int hash);
extern "C" void fn_8276D930(void *m, void *a, const void *key, unsigned int hash);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Str_8276DD70 {
  int w[2];
  Str_8276DD70() {}
  Str_8276DD70(const Str_8276DD70 &s) { fn_826D6238(this, &s); }
  Str_8276DD70 &operator=(const Str_8276DD70 &s) { fn_826D6290(this, &s); return *this; }
};
struct Key_8276DD70 { const int *a; const Str_8276DD70 *b; };
struct Value_8276DD70 {
  int first; Str_8276DD70 second;
  Value_8276DD70() {}
  Value_8276DD70(const Key_8276DD70 &k) : first(*k.a), second(*k.b) {}
  Value_8276DD70 &operator=(const Key_8276DD70 &k) { first = *k.a; second = *k.b; return *this; }
};

struct Entry_8276DD70 {
  int NextInChain;
  unsigned int HashValue;
  Value_8276DD70 Value;
  Entry_8276DD70(const Key_8276DD70 &k, int next) : NextInChain(next), Value(k) {}
  Entry_8276DD70(const Entry_8276DD70 &e) { fn_82769F00(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_8276DD70 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8276DD70 {
  Table_8276DD70 *pTable;
  Entry_8276DD70 &E(unsigned int index) { return ((Entry_8276DD70 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_8276B498(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};


extern "C" void fn_8276DD70(Hash_8276DD70 *m, void *a, const Key_8276DD70 *key)
{
  const int *ka = key->a;
  int i = 4;
  unsigned int h = 0x1505;
  const unsigned char *kb = (const unsigned char *)key->a;
  for (; i > 0; ) {
    --i;
    h = kb[i] + h * 0x1003f;
  }
  Table_8276DD70 *t = m->pTable;
  int idx;
  if (t == 0 || (idx = fn_82769E90(m, key, h & t->SizeMask)) < 0) {
    fn_8276D930(m, a, key, h);
  } else {
    Value_8276DD70 *v = &((Entry_8276DD70 *)(t + 1))[idx].Value;
    v->first = *ka;
    v->second = *key->b;
  }
}
