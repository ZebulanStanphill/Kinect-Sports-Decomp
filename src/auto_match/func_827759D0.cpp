// Open-addressing hash set add with a cached hash in each entry
// (Scaleform-style HashSetCachedBase::add), with a three-word value.
extern "C" void fn_827753A8(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Value_827759D0 { int a; int b; int c; Value_827759D0 &operator=(const Value_827759D0 &v) { a = v.a; b = v.b; c = v.c; return *this; } };

struct Entry_827759D0 {
  int NextInChain;
  unsigned int HashValue;
  Value_827759D0 Value;
  Entry_827759D0(const Value_827759D0 &k, int next) { NextInChain = next; Value = k; }
  Entry_827759D0(const Entry_827759D0 &e) { NextInChain = e.NextInChain; HashValue = e.HashValue; Value = e.Value; }
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_827759D0 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_827759D0 {
  Table_827759D0 *pTable;
  Entry_827759D0 &E(unsigned int index) { return ((Entry_827759D0 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_827753A8(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_827759D0(Hash_827759D0 *m, void *a, const Value_827759D0 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_827759D0 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_827759D0(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_827759D0 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_827759D0(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_827759D0 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_827759D0(*naturalEntry);
          e->NextInChain = blankIndex;
          break;
        }
        collidedIndex = e->NextInChain;
      }
      naturalEntry->Value.a = key.a;
      naturalEntry->Value.b = key.b;
      int t = key.c;
      naturalEntry->NextInChain = -1;
      naturalEntry->Value.c = t;
    }
  }
  naturalEntry->SetCachedHash(hashValue);
}
