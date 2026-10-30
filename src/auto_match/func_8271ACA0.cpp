// Open-addressing hash set add with a cached hash in each entry
// (Scaleform-style HashSetCachedBase::add). The probe loop re-reads
// m->pTable->SizeMask through the map each time, which keeps the mask load
// inside the loop as in the original.
extern "C" void fn_8271A940(void *m, void *a, int n);
extern "C" void fn_8271A580(void *dst, const void *src, int next);
extern "C" void fn_8271A660(void *dst, const void *src);
extern "C" void fn_8268BA10(void *dst, const void *src);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct String_8268BA10 {
  void *p;
  String_8268BA10 &operator=(const String_8268BA10 &s) { fn_8268BA10(this, &s); return *this; }
};

struct Value_8271ACA0 { String_8268BA10 key; int a; int b; };

struct Entry_8271ACA0 {
  int NextInChain;
  unsigned int HashValue;
  Value_8271ACA0 Value;
  Entry_8271ACA0(const Value_8271ACA0 &k, int next) { fn_8271A580(this, &k, next); }
  Entry_8271ACA0(const Entry_8271ACA0 &e) { fn_8271A660(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_8271ACA0 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8271ACA0 {
  Table_8271ACA0 *pTable;
  Entry_8271ACA0 &E(unsigned int index) { return ((Entry_8271ACA0 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_8271A940(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_8271ACA0(Hash_8271ACA0 *m, void *a, const Value_8271ACA0 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_8271ACA0 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_8271ACA0(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_8271ACA0 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_8271ACA0(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_8271ACA0 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_8271ACA0(*naturalEntry);
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
