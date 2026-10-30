// Open-addressing hash set add (HashSetCachedBase::add with a cached hash): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_82689F98(void *dst, const void *src);
extern "C" void fn_8268A100(void *dst, const void *src);
extern "C" void fn_8268A530(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Value_8268A690 {
  char b[16];
  Value_8268A690() {}
  Value_8268A690(const Value_8268A690 &s) { fn_82689F98(this, &s); }
  Value_8268A690 &operator=(const Value_8268A690 &s) { fn_8268A100(this, &s); return *this; }
};

struct Entry_8268A690 {
  int NextInChain;
  unsigned int HashValue;
  Value_8268A690 Value;
  Entry_8268A690(const Value_8268A690 &k, int next) : NextInChain(next), Value(k) {}
  Entry_8268A690(const Entry_8268A690 &e) : NextInChain(e.NextInChain), HashValue(e.HashValue), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_8268A690 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8268A690 {
  Table_8268A690 *pTable;
  Entry_8268A690 &E(unsigned int index) { return ((Entry_8268A690 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_8268A530(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_8268A690(Hash_8268A690 *m, void *a, const Value_8268A690 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_8268A690 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_8268A690(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_8268A690 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_8268A690(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_8268A690 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_8268A690(*naturalEntry);
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
