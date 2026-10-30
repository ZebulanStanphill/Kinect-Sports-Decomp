// Open-addressing hash set add (HashSetCachedBase::add with a cached hash): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_827753A8(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Pair_82776B48 { unsigned int a, b; Pair_82776B48() {} Pair_82776B48(const Pair_82776B48 &o) : a(o.a), b(o.b) {} Pair_82776B48 &operator=(const Pair_82776B48 &o) { a = o.a; b = o.b; return *this; } };
struct Key_82776B48 { const Pair_82776B48 *p; const unsigned int *q; };
struct Value_82776B48 {
  Pair_82776B48 first; unsigned int second;
  Value_82776B48(const Key_82776B48 &k) : first(*k.p), second(*k.q) {}
  Value_82776B48(const Value_82776B48 &v) : first(v.first), second(v.second) {}
  Value_82776B48 &operator=(const Key_82776B48 &k) { first = *k.p; second = *k.q; return *this; }
};

struct Entry_82776B48 {
  int NextInChain;
  unsigned int HashValue;
  Value_82776B48 Value;
  Entry_82776B48(const Key_82776B48 &k, int next) : NextInChain(next), Value(k) {}
  Entry_82776B48(const Entry_82776B48 &e) : NextInChain(e.NextInChain), HashValue(e.HashValue), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_82776B48 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_82776B48 {
  Table_82776B48 *pTable;
  Entry_82776B48 &E(unsigned int index) { return ((Entry_82776B48 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_827753A8(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_82776B48(Hash_82776B48 *m, void *a, const Key_82776B48 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_82776B48 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_82776B48(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_82776B48 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_82776B48(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_82776B48 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_82776B48(*naturalEntry);
          e->NextInChain = blankIndex;
          break;
        }
        collidedIndex = e->NextInChain;
      }
      naturalEntry->Value = key;
      naturalEntry->NextInChain = -1;
    }
  }
  naturalEntry->SetCachedHash(hashValue);
}
