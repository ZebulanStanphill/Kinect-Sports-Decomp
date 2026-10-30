// Open-addressing hash set add (HashSetBase::add): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_8273D3D0(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Key_8273D858 { const unsigned int *a; const unsigned int *b; };
struct Value_8273D858 {
  unsigned int first; unsigned int second;
  Value_8273D858() {}
  Value_8273D858(const Key_8273D858 &k) : first(*k.a), second(*k.b) {}
  Value_8273D858 &operator=(const Key_8273D858 &k) { first = *k.a; second = *k.b; return *this; }
};
struct Entry_8273D858 {
  int NextInChain;
  Value_8273D858 Value;
  Entry_8273D858(const Key_8273D858 &k, int next) : NextInChain(next), Value(k) {}
  Entry_8273D858(const Entry_8273D858 &e) : NextInChain(e.NextInChain), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.first & mask; }
};

struct Table_8273D858 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8273D858 {
  Table_8273D858 *pTable;
  Entry_8273D858 &E(unsigned int index) { return ((Entry_8273D858 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_8273D3D0(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_8273D858(Hash_8273D858 *m, void *a, const Key_8273D858 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_8273D858 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_8273D858(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_8273D858 *blankEntry = &m->E(blankIndex);
    unsigned int naturalHash = naturalEntry->GetCachedHash(m->pTable->SizeMask);
    if (naturalHash == (unsigned int)index) {
      new (blankEntry) Entry_8273D858(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalHash;
      for (;;) {
        Entry_8273D858 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_8273D858(*naturalEntry);
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
