// Open-addressing hash set add (HashSetCachedBase::add with a cached hash): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_826DAA10(void *dst, const void *src);
extern "C" void fn_8278BEE8(void *dst, const void *src);
extern "C" void fn_8278DE78(void *m, void *a);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Value_8278C160 {
  char b[4];
  Value_8278C160() {}
  Value_8278C160(const Value_8278C160 &s) { fn_826DAA10(this, &s); }
  Value_8278C160 &operator=(const Value_8278C160 &s) { fn_8278BEE8(this, &s); return *this; }
};

struct Entry_8278C160 {
  int NextInChain;
  unsigned int HashValue;
  Value_8278C160 Value;
  Entry_8278C160(const Value_8278C160 &k, int next) : NextInChain(next), Value(k) {}
  Entry_8278C160(const Entry_8278C160 &e) : NextInChain(e.NextInChain), HashValue(e.HashValue), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_8278C160 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8278C160 {
  Table_8278C160 *pTable;
  Entry_8278C160 &E(unsigned int index) { return ((Entry_8278C160 *)(pTable + 1))[index]; }
  void CheckExpand(void *a) { fn_8278DE78(this, a); }
};

extern "C" void fn_8278C160(Hash_8278C160 *m, void *a, const Value_8278C160 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_8278C160 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_8278C160(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_8278C160 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_8278C160(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_8278C160 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_8278C160(*naturalEntry);
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
