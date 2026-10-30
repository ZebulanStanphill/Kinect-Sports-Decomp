// Open-addressing hash set add with a cached hash in each entry
// (Scaleform-style HashSetCachedBase::add). The probe loop re-reads
// m->pTable->SizeMask through the map each time, which keeps the mask load
// inside the loop as in the original.
extern "C" void fn_8276B498(void *m, void *a, int n);
extern "C" void fn_82769F00(void *dst, const void *src);
extern "C" void fn_826D6238(void *dst, const void *src);
extern "C" void fn_826D6290(void *dst, const void *src);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Second_8276D470 {
  int w[2];
  Second_8276D470() {}
  Second_8276D470(const Second_8276D470 &s) { fn_826D6238(this, &s); }
  Second_8276D470 &operator=(const Second_8276D470 &s) { fn_826D6290(this, &s); return *this; }
};

struct Value_8276D470 { int first; Second_8276D470 second; };

struct Entry_8276D470 {
  int NextInChain;
  unsigned int HashValue;
  Value_8276D470 Value;
  Entry_8276D470(const Value_8276D470 &k, int next) : NextInChain(next), Value(k) {}
  Entry_8276D470(const Entry_8276D470 &e) { fn_82769F00(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_8276D470 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8276D470 {
  Table_8276D470 *pTable;
  Entry_8276D470 &E(unsigned int index) { return ((Entry_8276D470 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_8276B498(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_8276D470(Hash_8276D470 *m, void *a, const Value_8276D470 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_8276D470 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_8276D470(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_8276D470 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_8276D470(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_8276D470 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_8276D470(*naturalEntry);
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
