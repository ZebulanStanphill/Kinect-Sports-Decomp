// Open-addressing hash set add (HashSetBase::add): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_8279D8C0(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

extern "C" void fn_8279B1F8(void *dst, const void *src);
struct Ref_8279DE58 { int RefCount; };
struct Ptr_8279DE58 {
  Ref_8279DE58 *p;
  Ptr_8279DE58() {}
  Ptr_8279DE58(const Ptr_8279DE58 &s) { if (s.p) s.p->RefCount++; p = s.p; }
};
struct Value_8279DE58 {
  unsigned int first; Ptr_8279DE58 second;
  Value_8279DE58() {}
  Value_8279DE58 &operator=(const Value_8279DE58 &s) { fn_8279B1F8(this, &s); return *this; }
};
struct Entry_8279DE58 {
  int NextInChain;
  Value_8279DE58 Value;
  Entry_8279DE58(const Value_8279DE58 &k, int next) : NextInChain(next), Value(k) {}
  Entry_8279DE58(const Entry_8279DE58 &e) : NextInChain(e.NextInChain), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.first & mask; }
};

struct Table_8279DE58 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8279DE58 {
  Table_8279DE58 *pTable;
  Entry_8279DE58 &E(unsigned int index) { return ((Entry_8279DE58 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_8279D8C0(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_8279DE58(Hash_8279DE58 *m, void *a, const Value_8279DE58 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_8279DE58 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_8279DE58(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_8279DE58 *blankEntry = &m->E(blankIndex);
    unsigned int naturalHash = naturalEntry->GetCachedHash(m->pTable->SizeMask);
    if (naturalHash == (unsigned int)index) {
      new (blankEntry) Entry_8279DE58(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalHash;
      for (;;) {
        Entry_8279DE58 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_8279DE58(*naturalEntry);
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
