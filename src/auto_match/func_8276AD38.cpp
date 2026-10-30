// Open-addressing hash set add (HashSetBase::add): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_82769F60(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Value_8276AD38 {
  unsigned short first;
  unsigned short second;
  Value_8276AD38() {}
  Value_8276AD38(const Value_8276AD38 &v) : first(v.first), second(v.second) {}
};
struct Entry_8276AD38 {
  int NextInChain;
  Value_8276AD38 Value;
  Entry_8276AD38(const Value_8276AD38 &k, int next) : NextInChain(next), Value(k) {}
  Entry_8276AD38(const Entry_8276AD38 &e) : NextInChain(e.NextInChain), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.first & mask; }
};

struct Table_8276AD38 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8276AD38 {
  Table_8276AD38 *pTable;
  Entry_8276AD38 &E(unsigned int index) { return ((Entry_8276AD38 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_82769F60(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_8276AD38(Hash_8276AD38 *m, void *a, const Value_8276AD38 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_8276AD38 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_8276AD38(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_8276AD38 *blankEntry = &m->E(blankIndex);
    unsigned int naturalHash = naturalEntry->GetCachedHash(m->pTable->SizeMask);
    if (naturalHash == (unsigned int)index) {
      new (blankEntry) Entry_8276AD38(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalHash;
      for (;;) {
        Entry_8276AD38 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_8276AD38(*naturalEntry);
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
