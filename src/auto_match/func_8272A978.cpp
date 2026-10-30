// Open-addressing hash set add (HashSetCachedBase::add with a cached hash): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_82724770(void *dst, const void *src);
extern "C" void fn_827247D0(void *dst, const void *src);
extern "C" void fn_827248E0(void *dst, const void *src);
extern "C" void fn_82729858(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Value_8272A978 {
  char b[8];
  Value_8272A978() {}
  Value_8272A978(const Value_8272A978 &s) { fn_82724770(this, &s); }
  Value_8272A978 &operator=(const Value_8272A978 &s) { fn_827247D0(this, &s); return *this; }
};

struct Entry_8272A978 {
  int NextInChain;
  unsigned int HashValue;
  Value_8272A978 Value;
  Entry_8272A978(const Value_8272A978 &k, int next) : NextInChain(next) { fn_827248E0(&Value, &k); }
  Entry_8272A978(const Entry_8272A978 &e) : NextInChain(e.NextInChain), HashValue(e.HashValue), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_8272A978 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8272A978 {
  Table_8272A978 *pTable;
  Entry_8272A978 &E(unsigned int index) { return ((Entry_8272A978 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_82729858(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_8272A978(Hash_8272A978 *m, void *a, const Value_8272A978 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_8272A978 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_8272A978(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_8272A978 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_8272A978(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_8272A978 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_8272A978(*naturalEntry);
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
