// Open-addressing hash set add (HashSetBase::add): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_827A5918(void *dst, const void *src);
extern "C" void fn_827A5AB8(void *dst, const void *src);
extern "C" void fn_827A6A50(void *dst, const void *src);
extern "C" void fn_827A7338(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Sub_827A7960 {
  char b[8]; unsigned int h; 
  Sub_827A7960() {}
  Sub_827A7960(const Sub_827A7960 &s) { fn_827A5918(this, &s); }
  Sub_827A7960 &operator=(const Sub_827A7960 &s) { fn_827A5AB8(this, &s); return *this; }
};
struct Value_827A7960 { Sub_827A7960 s; int t; Value_827A7960() {} };

struct Entry_827A7960 {
  int NextInChain;
  Value_827A7960 Value;
  Entry_827A7960(const Value_827A7960 &k, int next) : NextInChain(next), Value(k) {}
  Entry_827A7960(const Entry_827A7960 &e) { fn_827A6A50(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.s.h & mask; }
};

struct Table_827A7960 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_827A7960 {
  Table_827A7960 *pTable;
  Entry_827A7960 &E(unsigned int index) { return ((Entry_827A7960 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_827A7338(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_827A7960(Hash_827A7960 *m, void *a, const Value_827A7960 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_827A7960 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_827A7960(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_827A7960 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_827A7960(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_827A7960 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_827A7960(*naturalEntry);
          e->NextInChain = blankIndex;
          break;
        }
        collidedIndex = e->NextInChain;
      }
      naturalEntry->Value = key;
      naturalEntry->NextInChain = -1;
    }
  }
}
