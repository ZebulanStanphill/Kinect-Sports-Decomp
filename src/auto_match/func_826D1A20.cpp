// Open-addressing hash set add with a cached hash in each entry
// (Scaleform-style HashSetCachedBase::add). Every access goes through the map.
extern "C" void fn_826D0500(void *m, void *a, int n);
extern "C" void fn_826CC190(void *dst, const void *src);
extern "C" void fn_8268C2D0(void *dst, const void *src);
extern "C" void fn_8268BA10(void *dst, const void *src);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Second_826D1A20 {
  int w[1];
  Second_826D1A20() {}
  Second_826D1A20(const Second_826D1A20 &s) { fn_8268C2D0(this, &s); }
  Second_826D1A20 &operator=(const Second_826D1A20 &s) { fn_8268BA10(this, &s); return *this; }
};

struct Value_826D1A20 { Second_826D1A20 first; int second; };

struct Entry_826D1A20 {
  int NextInChain;
  unsigned int HashValue;
  Value_826D1A20 Value;
  Entry_826D1A20(const Value_826D1A20 &k, int next) : NextInChain(next), Value(k) {}
  Entry_826D1A20(const Entry_826D1A20 &e) { fn_826CC190(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_826D1A20 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826D1A20 {
  Table_826D1A20 *pTable;
  Entry_826D1A20 &E(unsigned int index) { return ((Entry_826D1A20 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_826D0500(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_826D1A20(Hash_826D1A20 *m, void *a, const Value_826D1A20 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_826D1A20 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_826D1A20(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_826D1A20 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_826D1A20(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_826D1A20 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_826D1A20(*naturalEntry);
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
