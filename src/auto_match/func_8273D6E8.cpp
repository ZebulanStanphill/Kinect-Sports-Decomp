// Open-addressing hash set add (HashSetBase::add): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_8273D3D0(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Value_8273D6E8 { unsigned int first; unsigned int second; };
struct Entry_8273D6E8 {
  int NextInChain;
  Value_8273D6E8 Value;
  Entry_8273D6E8(const Value_8273D6E8 &k, int next) : NextInChain(next), Value(k) {}
  Entry_8273D6E8(const Entry_8273D6E8 &e) : NextInChain(e.NextInChain), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.first & mask; }
};

struct Table_8273D6E8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8273D6E8 {
  Table_8273D6E8 *pTable;
  Entry_8273D6E8 &E(unsigned int index) { return ((Entry_8273D6E8 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_8273D3D0(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_8273D6E8(Hash_8273D6E8 *m, void *a, const Value_8273D6E8 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_8273D6E8 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_8273D6E8(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_8273D6E8 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_8273D6E8(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_8273D6E8 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_8273D6E8(*naturalEntry);
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
