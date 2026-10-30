// Open-addressing hash set add (HashSetCachedBase::add with a cached hash): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_82753970(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

typedef int Value_82753DF8;
struct Entry_82753DF8 {
  int NextInChain;
  unsigned int HashValue;
  Value_82753DF8 Value;
  Entry_82753DF8(const int &k, int next) : Value(k) { NextInChain = next; }
  Entry_82753DF8(const Entry_82753DF8 &e) : NextInChain(e.NextInChain), HashValue(e.HashValue), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_82753DF8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_82753DF8 {
  Table_82753DF8 *pTable;
  Entry_82753DF8 &E(unsigned int index) { return ((Entry_82753DF8 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_82753970(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_82753DF8(Hash_82753DF8 *m, void *a, const const int &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_82753DF8 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_82753DF8(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_82753DF8 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_82753DF8(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_82753DF8 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_82753DF8(*naturalEntry);
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
