// Open-addressing hash set add (HashSetBase::add): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_826D6238(void *dst, const void *src);
extern "C" void fn_826D6290(void *dst, const void *src);
extern "C" void fn_826D7A48(void *dst, const void *src);
extern "C" void fn_826D9928(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Str_826DA660 {
  int w[2];
  Str_826DA660() {}
  Str_826DA660(const Str_826DA660 &s) { fn_826D6238(this, &s); }
  Str_826DA660 &operator=(const Str_826DA660 &s) { fn_826D6290(this, &s); return *this; }
};
struct Value_826DA660 { unsigned int first; Str_826DA660 second; Value_826DA660() {} };

struct Entry_826DA660 {
  int NextInChain;
  Value_826DA660 Value;
  Entry_826DA660(const Value_826DA660 &k, int next) : NextInChain(next), Value(k) {}
  Entry_826DA660(const Entry_826DA660 &e) { fn_826D7A48(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { unsigned int h = Value.first; return (h ^ (h >> 8)) & mask; }
};

struct Table_826DA660 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826DA660 {
  Table_826DA660 *pTable;
  Entry_826DA660 &E(unsigned int index) { return ((Entry_826DA660 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_826D9928(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_826DA660(Hash_826DA660 *m, void *a, const Value_826DA660 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_826DA660 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_826DA660(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_826DA660 *blankEntry = &m->E(blankIndex);
    unsigned int naturalHash = naturalEntry->GetCachedHash(m->pTable->SizeMask);
    if (naturalHash == (unsigned int)index) {
      new (blankEntry) Entry_826DA660(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalHash;
      for (;;) {
        Entry_826DA660 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_826DA660(*naturalEntry);
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
