// Open-addressing hash set add with a cached hash in each entry
// (Scaleform-style HashSetCachedBase::add). Every access goes through the map.
extern "C" void fn_826DA368(void *m, void *a, int n);
extern "C" void fn_826D8A30(void *dst, const void *src);
extern "C" void fn_8268C2D0(void *dst, const void *src);
extern "C" void fn_8268BA10(void *dst, const void *src);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Second_826DC160 {
  int w[1];
  Second_826DC160() {}
  Second_826DC160(const Second_826DC160 &s) { fn_8268C2D0(this, &s); }
  Second_826DC160 &operator=(const Second_826DC160 &s) { fn_8268BA10(this, &s); return *this; }
};

struct Value_826DC160 { int first; Second_826DC160 second; };

struct Entry_826DC160 {
  int NextInChain;
  unsigned int HashValue;
  Value_826DC160 Value;
  Entry_826DC160(const Value_826DC160 &k, int next) : NextInChain(next), Value(k) {}
  Entry_826DC160(const Entry_826DC160 &e) { fn_826D8A30(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_826DC160 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826DC160 {
  Table_826DC160 *pTable;
  Entry_826DC160 &E(unsigned int index) { return ((Entry_826DC160 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_826DA368(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_826DC160(Hash_826DC160 *m, void *a, const Value_826DC160 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_826DC160 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_826DC160(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_826DC160 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_826DC160(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_826DC160 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_826DC160(*naturalEntry);
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
