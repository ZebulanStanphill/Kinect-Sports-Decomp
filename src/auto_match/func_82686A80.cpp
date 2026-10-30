// Open-addressing hash set add (HashSetBase::add): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_82686FA0(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

typedef unsigned int Value_82686A80;
struct Entry_82686A80 {
  int NextInChain;
  Value_82686A80 Value;
  Entry_82686A80(const unsigned int &k, int next) : NextInChain(next), Value(k) {}
  Entry_82686A80(const Entry_82686A80 &e) : NextInChain(e.NextInChain), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { unsigned int v = Value; return (v ^ (v >> 6)) & mask; }
};

struct Table_82686A80 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_82686A80 {
  Table_82686A80 *pTable;
  Entry_82686A80 &E(unsigned int index) { return ((Entry_82686A80 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_82686FA0(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_82686A80(Hash_82686A80 *m, void *a, const const unsigned int &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_82686A80 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_82686A80(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_82686A80 *blankEntry = &m->E(blankIndex);
    unsigned int naturalHash = naturalEntry->GetCachedHash(m->pTable->SizeMask);
    if (naturalHash == (unsigned int)index) {
      new (blankEntry) Entry_82686A80(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalHash;
      for (;;) {
        Entry_82686A80 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_82686A80(*naturalEntry);
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
