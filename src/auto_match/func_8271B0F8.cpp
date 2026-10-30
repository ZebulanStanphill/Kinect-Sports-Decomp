// Open-addressing hash set add (HashSetCachedBase::add with a cached hash): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_82719FA0(void *dst, const void *src);
extern "C" void fn_8271A528(void *dst, const void *src);
extern "C" void fn_8271A660(void *dst, const void *src);
extern "C" void fn_8271A940(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Value_8271B0F8 {
  char b[12];
  Value_8271B0F8() {}
  Value_8271B0F8 &operator=(const Value_8271B0F8 &s) { fn_82719FA0(this, &s); return *this; }
};

struct Entry_8271B0F8 {
  int NextInChain;
  unsigned int HashValue;
  Value_8271B0F8 Value;
  Entry_8271B0F8(const Value_8271B0F8 &k, int next) : NextInChain(next) { fn_8271A528(&Value, &k); }
  Entry_8271B0F8(const Entry_8271B0F8 &e) { fn_8271A660(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_8271B0F8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8271B0F8 {
  Table_8271B0F8 *pTable;
  Entry_8271B0F8 &E(unsigned int index) { return ((Entry_8271B0F8 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_8271A940(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_8271B0F8(Hash_8271B0F8 *m, void *a, const Value_8271B0F8 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_8271B0F8 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_8271B0F8(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_8271B0F8 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_8271B0F8(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_8271B0F8 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_8271B0F8(*naturalEntry);
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
