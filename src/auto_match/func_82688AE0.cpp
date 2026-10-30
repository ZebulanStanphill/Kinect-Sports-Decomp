// Open-addressing hash set add (HashSetCachedBase::add with a cached hash): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_826886C0(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

extern "C" void fn_8268C750(void *dst, const void *src);
extern "C" void fn_8268BA10(void *dst, const void *src);
struct Str_82688AE0 {
  int w;
  Str_82688AE0() {}
  Str_82688AE0(const Str_82688AE0 &s) { fn_8268C750(this, &s); }
  Str_82688AE0 &operator=(const Str_82688AE0 &s) { fn_8268BA10(this, &s); return *this; }
};
struct Key_82688AE0 { const Str_82688AE0 *a; const Str_82688AE0 *b; };
struct Value_82688AE0 {
  Str_82688AE0 first; Str_82688AE0 second;
  Value_82688AE0() {}
  Value_82688AE0(const Key_82688AE0 &k) : first(*k.a), second(*k.b) {}
  Value_82688AE0 &operator=(const Key_82688AE0 &k) { first = *k.a; second = *k.b; return *this; }
};
struct Entry_82688AE0 {
  int NextInChain;
  unsigned int HashValue;
  Value_82688AE0 Value;
  Entry_82688AE0(const Key_82688AE0 &k, int next) : NextInChain(next), Value(k) {}
  Entry_82688AE0(const Entry_82688AE0 &e) : NextInChain(e.NextInChain), HashValue(e.HashValue), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_82688AE0 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_82688AE0 {
  Table_82688AE0 *pTable;
  Entry_82688AE0 &E(unsigned int index) { return ((Entry_82688AE0 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_826886C0(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_82688AE0(Hash_82688AE0 *m, void *a, const Key_82688AE0 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_82688AE0 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_82688AE0(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_82688AE0 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_82688AE0(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_82688AE0 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_82688AE0(*naturalEntry);
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
