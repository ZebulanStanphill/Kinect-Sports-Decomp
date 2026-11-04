// Scaleform-style HashSetCachedBase::add with a 3-word value (entry {Next, Hash, Value}).
struct Value_827B1020 { int a, b, c; };
extern "C" void fn_827B1620(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Entry_827B1020 {
  int NextInChain;
  unsigned int HashValue;
  Value_827B1020 Value;
  Entry_827B1020(const Value_827B1020 &k, int next) : NextInChain(next) { Value = k; }
  Entry_827B1020(const Entry_827B1020 &e) : NextInChain(e.NextInChain), HashValue(e.HashValue) { Value = e.Value; }
  bool IsEmpty() const { return NextInChain == -2; }
};

struct Table_827B1020 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_827B1020 {
  Table_827B1020 *pTable;
  Entry_827B1020 &E(unsigned int index) { return ((Entry_827B1020 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_827B1620(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_827B1020(Hash_827B1020 *m, void *a, const Value_827B1020 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_827B1020 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_827B1020(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_827B1020 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->HashValue == (unsigned int)index) {
      new (blankEntry) Entry_827B1020(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->HashValue;
      for (;;) {
        Entry_827B1020 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_827B1020(*naturalEntry);
          e->NextInChain = blankIndex;
          break;
        }
        collidedIndex = e->NextInChain;
      }
      naturalEntry->Value = key;
      naturalEntry->NextInChain = -1;
    }
  }
  naturalEntry->HashValue = hashValue;
}
